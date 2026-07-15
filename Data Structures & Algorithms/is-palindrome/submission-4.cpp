class Solution {
public:
    bool isPalindrome(string s) {
        int i  = 0,j = s.length()-1;
        
        while(i<=j){

            /* here we used isalnum-> for all alhanumeric values 
                        not isalpha-> for all alphabetic values*/
            while(i<j && !isalnum(s[i])){
                i++;
            }while(i < j && !isalnum(s[j])){
                j--;
            }
            if(tolower(s[i++]) != tolower(s[j--]))return false;
        }
        return true;
    }
};
