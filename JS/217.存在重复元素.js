/**
 * @param {number[]} nums
 * @return {boolean}
 */
var nums = [1,2,3,1];
 var containsDuplicate = function(nums) {
    let arr = [];
    for (let i = 0; i < nums.length; i++) {
        if (arr.indexOf(nums[i]) == -1) {
            arr.push(nums[i]);
        }
        else{
            return true;
        }

    }
    return false;
};
console.log(containsDuplicate(nums));