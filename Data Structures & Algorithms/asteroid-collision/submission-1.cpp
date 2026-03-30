class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;

        for (int ast : asteroids) {
            bool destroyed = false;

            while (!stack.empty() && stack.back() > 0 && ast < 0) {
                int last = stack.back();
                stack.pop_back();

                if (last > -ast) {
                    stack.push_back(last);
                    destroyed = true;
                    break;
                } 
                else if (last == -ast) {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                stack.push_back(ast);
            }
        }

        return stack;
    }
};