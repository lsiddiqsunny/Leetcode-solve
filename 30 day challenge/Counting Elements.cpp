class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int ans=0;
        for(auto x:mp){
            int a=x.first;
            if(mp.find(a+1)==mp.end()){
                continue;
            }
            else{
                ans+=mp[a];
            }
        }
        return ans;
    }
};