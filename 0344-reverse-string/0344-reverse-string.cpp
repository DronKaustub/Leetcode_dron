class Solution {
public:
    void reverseString(vector<char>& s) {
       
         int end= s.size()-1;
         for (int i =0;i<end;i++){
            swap(s[i],s[end]);
            end--;
         }
    
    }
};