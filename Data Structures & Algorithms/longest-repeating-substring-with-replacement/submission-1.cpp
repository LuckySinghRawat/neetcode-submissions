class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> freq;
        int j = 0; 
        int highestFreq = 0;
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
            
            highestFreq = max(highestFreq, freq[s[i]]);

            
            while ((i - j + 1) - highestFreq > k) {
                freq[s[j]]--; 
                j++;      
            }

            maxLength = max(maxLength, i - j + 1);
        }
        
        return maxLength;
    }
};
