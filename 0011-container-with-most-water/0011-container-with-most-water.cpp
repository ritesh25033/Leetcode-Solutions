class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int mx=0,area=0;
        while(i<j){
            if(height[i]<height[j]){
               area=(j-i)*height[i];
               mx=max(mx,area);
               i++;
            }else{
               area=(j-i)*height[j];
               mx=max(mx,area);
               j--;
            }
        }
        return mx;
    }
};