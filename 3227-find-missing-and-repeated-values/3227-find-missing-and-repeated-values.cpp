class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      vector<int> ans;  
      long sum=0;
      long squareSum=0;
      long sumA=0;
      long squareSumA=0;
      int n=grid.size();
      int cnt=1;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=cnt;
            squareSum+= cnt*cnt;
            sumA+=grid[i][j];
            squareSumA+=grid[i][j]*grid[i][j]; 
            cnt++;
        }
     }
     int x = (0.5)*((sum-sumA)+((squareSum-squareSumA)/(sum-sumA)));
     int y = x-(sum-sumA);
     cout<<" "<<sum<<" "<<sumA<<" "<< squareSum<<" "<<squareSumA <<" "<<endl;
     ans.push_back(y);
     ans.push_back(x);
     return ans;
    }
};