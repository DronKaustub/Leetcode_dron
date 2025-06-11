class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i =s.size()-1;i>=0;i--){
            switch(s[i]){
                case 'I':   sum+=1; break;
                case 'V':   if(i>0&&s[i-1]=='I'){sum+=4;i--;}else{sum+=5;}break;
                case 'X':   if(i>0&&s[i-1]=='I'){sum+=9;i--;}else{sum+=10;}break;    
                case 'L':   if(i>0&&s[i-1]=='X'){sum+=40;i--;}else{sum+=50;}break;
                case 'C':   if(i>0&&s[i-1]=='X'){sum+=90;i--;}else{sum+=100;}break;
                case 'D':   if(i>0&&s[i-1]=='C'){sum+=400;i--;}else{sum+=500;}break;
                case 'M':   if(i>0&&s[i-1]=='C'){sum+=900;i--;}else{sum+=1000;}break;
            }
        }
        return sum;
    }

};