/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let mxsum=-Infinity,sum=0;
    for(let num of nums){
        sum+=num;
        mxsum=Math.max(mxsum,sum);
        if(sum<0)sum=0;
    }
    return mxsum;
};