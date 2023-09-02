class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
          priority_queue<int> pq;
        /*We keep a track of sum to decide whether to break the 
        element in consideration into two halves or not.*/
        long long sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            pq.push(nums[i]);
            sum+=nums[i];
        }
        int ans=0;
        while(target>0){
            int front = pq.top();
            sum-=front;
            pq.pop();
            /*Case 1: If top element is less than target, then just 
            subtract the element. No need to divide it at this
            point.*/
            if(front<=target){
                target-=front;
            }
            /*Case 2: If top element is greater than target but sum
             upto top element is less than target. In this case, we 
            should split the top element to two halves.*/
            else if(front>target && sum<target){
                ans++;
                sum+=front;
                pq.push(front/2);
                pq.push(front/2);
            }
            /*Case 3: If our priority queue is empty and we have 
            yet not reached our target, then just return -1;*/
            if(pq.empty() && target!=0){
                return -1;
            }
        }
        //Finally we return our ans which we increment at every divide
        return ans;
    }
};