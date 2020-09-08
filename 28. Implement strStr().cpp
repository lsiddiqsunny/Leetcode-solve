class Solution {
public:
    int strStr(string haystack, string needle) {
         if( needle == "" ) return 0;
        if( needle == haystack ) return 0;
        if( needle.length() > haystack.length() ) return -1;
        for(int i = 0; i < haystack.length() - needle.length() + 1; ++i)
            if( haystack[i] == needle[0] ){
                int cnt = 0;
                for(int j = 0; j < needle.length(); ++j)
                    if( needle[j] == haystack[i + j] ) ++cnt;
                if( cnt == needle.length() ) return i;
                }
        return -1;
    }
};