class Solution {
public:
    int reverse(int x) {
        int o,k=0;
        
        while(x){o=x%10;
          x=x/10;
           if((k > INT_MAX/10 )||(k < INT_MIN/10)){
            return 0;
        }
          k=(10*k)+o;
                  }
       
       return k;
        //return 0;
    }
};