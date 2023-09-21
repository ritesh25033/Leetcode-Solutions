class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            res.push_back(nums2[j]);
        }
        sort(res.begin(),res.end());
        if(res.size()%2==1){
            return (double)res[res.size()/2];
        }else{
            double d=(double)(res[res.size()/2]+res[(res.size()/2)-1])/2;
            return d;
        }
        return 1;
    }
};