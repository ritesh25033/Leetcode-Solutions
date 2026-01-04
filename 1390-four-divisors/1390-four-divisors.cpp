class Solution {
public:
    int divisors(int n){
        int cnt=0,sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
               cnt++;
               sum+=i;
               sum+=(n/i);
            }
        }
        if(cnt==2)return sum;
        else return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        long long ans=0,temp;
        for(int i=0;i<nums.size();i++){
            if(ceil(sqrt(nums[i]))==floor(sqrt(nums[i])))continue;
            temp=divisors(nums[i]);
           cout<<temp<<" ";
           ans+=temp;
        }
        return ans;
    }
};