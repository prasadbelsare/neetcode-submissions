class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        st,end=0,len(matrix)-1
        row=[]

        while st<=end:
            m=st+(end-st)//2
            if matrix[m][0]<=target<=matrix[m][-1]:
                row=matrix[m]
                break
            elif matrix[m][0]>target:
                end=m-1
            else:
                st=m+1
            
        l,r=0,len(row)-1

        while l<=r:
            mid=l+(r-l)//2
            if row[mid]==target:
                return True
            elif row[mid]>target:
                r=mid-1
            else:
                l=mid+1
        
        return False


        