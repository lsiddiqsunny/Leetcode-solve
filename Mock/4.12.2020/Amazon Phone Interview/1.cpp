 /*
 Given a string S, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and return the new string.

 

Example 1:

Input: "leetcodeisacommunityforcoders"
Output: "ltcdscmmntyfrcdrs"
Example 2:

Input: "aeiou"
Output: ""
 

Note:

S consists of lowercase English letters only.
1 <= S.length <= 1000
*/
class Solution {
public:
    string removeVowels(string S) {
        set<char> vowel;
        vowel.insert('a');
        vowel.insert('e');
        vowel.insert('i');
        vowel.insert('o');
        vowel.insert('u');
        string ans;
        for(char x:S){
            if(vowel.find(x)==vowel.end()){
                ans+=x;
            }
        }
        return ans;
    }
};