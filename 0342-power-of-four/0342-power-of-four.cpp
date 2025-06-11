class Solution {
public:
    bool isPowerOfFour(int n) {
        if(0<n&&INT_MAX>n){
        if(n!=1&&n%4!=0||n==0){return false;}
        else if(n==4||n==1){
            return true;
        }
        else{return isPowerOfFour( n/4); }
        }
return false;
    }
};