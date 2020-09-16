class Solution {
    public int lengthOfLastWord(String s) {
        String[] words = s.split(" ");
        
        int sz = words.length;
        if(sz==0){
            return 0;
        }
        return words[sz-1].length();
    }
}