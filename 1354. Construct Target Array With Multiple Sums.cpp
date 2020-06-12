class Solution {
public:
    bool isPossible(vector<int>& target) {
        if(target.size()==0){
            return true;
        }
        priority_queue<long long int> pq;
        long long sum = 0;
        for(int i=0;i<target.size();i++){
            pq.push((long long )target[i]);
            sum+=(long long )target[i];
        }
        long long  cur = pq.top();
        while(cur != 1) {
            long long  r = sum -= cur;
            if(r == 0 || cur - r < 1 || ((cur - r - 1) % r)+1 < 1) return false;
            long long  last = 1 + ((cur - r - 1) % r);
            sum += last;
            pq.push(last);
            pq.pop();
            cur = pq.top();
        }
        return true;
        
    }
};