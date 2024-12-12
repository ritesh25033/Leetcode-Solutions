class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        for(long long i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        long long ans=0;
        while(k>0){
            long long tp=pq.top();
            long long sq=floor(sqrt(tp));
            pq.pop();
            pq.push(sq);
            k--;
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};