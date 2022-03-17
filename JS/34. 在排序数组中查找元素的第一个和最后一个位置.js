/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var searchRange = function(nums, target) {
    var arr = [-1, -1];
    var arrIndex = 0;
    if (nums.length < 1) {
        return arr;
    }
    for (let index = 0; index < nums.length; index++) {
        if (nums[index] == target) {
            if (arrIndex == 0) {
                arr[0] = index;
                arr[1] = index;
                arrIndex++;
            }
            else{
                arr[1] = index;
            }
        }
    }
    return arr;
};

console.log(searchRange([5,7,7,8,8,10], 8));