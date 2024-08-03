class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> res(1001);
        int sum=0;
        for(int i=0;i<target.size();i++){
            res[target[i]]++;
        }
         for(int i=0;i<arr.size();i++){
            res[arr[i]]--;
        }
         for(int i=0;i<res.size();i++){
            if(res[i]>0)
            sum+=res[i];
        }
        if(sum==0)return true;
        return false;
    }
};