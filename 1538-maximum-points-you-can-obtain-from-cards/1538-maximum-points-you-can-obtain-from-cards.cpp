class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=0;
        n=cardPoints.size();
        int l=0;
        
        int leftsum=0;
        int rightsum=0;
        int sums=0;
        for (int i=0 ;i <= k-1; i++){
            leftsum+=cardPoints[i];
        }
        sums=leftsum;
        for (int i=k-1 ; i>=0 ; i--){
            leftsum-=cardPoints[i];
            rightsum+=cardPoints[n-1];
            n-=1;
        if (sums<leftsum+rightsum){
            sums=leftsum+rightsum;
        }
        }
        


        return sums;
    }
};