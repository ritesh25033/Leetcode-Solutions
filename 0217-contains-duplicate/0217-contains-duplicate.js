/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
   let myset = new Set();
    for(let i=0;i<nums.length;i++){
        if(myset.has(nums[i])){
            return true;
        }
        myset.add(nums[i]);
    }
    return false;
};