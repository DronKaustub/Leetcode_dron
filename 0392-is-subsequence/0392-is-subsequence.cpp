class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m =t.size();int j=0;
        int count =0;
        for(int i=0;i<m;i++){
            if(t[i]==s[j]){count++;
            j++;}
           // cout<<t[i]<<" ";}
        }
        if(count==n){return true;}
        else{return false;}
    }
};