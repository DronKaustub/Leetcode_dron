class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxcount=0;
        map<char,int> m;
        for (int i = 0; i <= 256; ++i) {
        m[i] = -1;
        }
        int n= s.size();
        int count=0;
        while(r<n){
            cout<<endl<<"c : " << count<<endl;
            
            if(m[s[r]]!=-1){
                if(m[s[r]]>=l){
                    l=m[s[r]]+1;}
                                
            }
            count=r-l+1;
            if(maxcount<count){
                maxcount=count;
            }
            m[s[r]]=r;
            
            
            r++;

        }
        return maxcount;
    }
};