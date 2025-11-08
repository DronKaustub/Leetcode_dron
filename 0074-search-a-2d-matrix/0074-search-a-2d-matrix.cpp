class Solution {
public:
    bool searchArray(vector<int>& matrixArr, int target,int high){
        int low=0;
        while(high>=low){
            int mid= low+(high-low)/2;
            if(matrixArr[mid]==target){
                return true;
            }
            else if(matrixArr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m=matrix[0].size();
        for(int i =0;i<n;i++){
            if((matrix[i][0]<=target)&&(matrix[i][m-1]>=target)){
                return searchArray(matrix[i],target,m);
            }
        }
        return false;
    }
};