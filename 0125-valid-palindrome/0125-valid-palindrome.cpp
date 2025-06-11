class Solution {
public:
   
char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    } 
    return ch;
}

// Function to check if a character is alphanumeric
bool isAlphanumeric(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

// Function to check if the string is a palindrome
bool isPalindrome(string s) {
    int st = 0;
    int e = s.size() - 1;
    
    while (st < e) {
        // Move start pointer to the next alphanumeric character
        while (st < e && !isAlphanumeric(toLowerCase(s[st]))) {
            st++;
        }

        // Move end pointer to the previous alphanumeric character
        while (st < e && !isAlphanumeric(toLowerCase(s[e]))) {
            e--;
        }

        // Compare characters in lowercase
        if (toLowerCase(s[st]) != toLowerCase(s[e])) {
            return false;
        }
        
        st++;
        e--;
    }
    
    return true;
}
    

};
