class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int>ans;
        if(S.size() == 0){
            return ans;
        }
        string arr = S;
        set<char> seen;
        int right[26] = {0};
        for(char c:arr)
            right[c-'a']++;
        int count =0;
        for(char c:arr){
            count++;
            seen.insert(c);
            if(--right[c-'a'] == 0){
                seen.erase(c);
                if(seen.size()==0){
                    ans.push_back(count);
                    count=0;
                }
            }
        }
        return ans;
    }
};