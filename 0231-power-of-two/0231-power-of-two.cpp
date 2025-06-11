class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(INT_MIN<n&&INT_MAX>n){
            if(n==1){return true;}
            else if(n==0){return false;}
            while(n%2==0){
                
                if(n==2){
                return true;}
                n=n/2;
            }
            
        }
        return false;
    }
};