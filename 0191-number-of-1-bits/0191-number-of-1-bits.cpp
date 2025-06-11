class Solution {
public:
    int hammingWeight(uint32_t n) {
        /*cout << n;
        n=n>>1;
        int i=n;
        cout <<endl<<i;
        n=n>>1;
        int j=n;
        cout <<endl<<j;*/
int count=0;
for(int h=0;h<=32;h++){
   // cout<<'EYs'<<endl;
        if(n%2==0){
            count=count;
            n=n>>1;
        }
        else{
            count++;
            n=n>>1;
        }}
        //cout<<count;
        return count;
    }
};