class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int res=0;
        int countW=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                countW+=1;
            }
        }
        res=countW;
        for(int r=k;r<blocks.size();r++){
            if(blocks[r-k]=='W'){
                countW-=1;
            }
            if(blocks[r]=='W'){
                countW+=1;
            }
            res=min(res,countW);
        }
        return res;
    }
};