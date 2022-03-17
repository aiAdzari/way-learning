/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var search = function(nums, target) {
    var right = 0, left = nums.length - 1; 
    if (nums.length == 0) {
        return -1;
    }
    if (nums.length == 1){
        return nums[0] == target ? 0 : -1;
    }

    while (right < left) {
        var mid = Math.floor((right + left) / 2);
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[0] > nums[mid]) {
            if (nums[mid] < target && target <= nums[nums.length - 1]) {
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        else{
            if (nums[0] <= target && target < nums[mid]) {
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        console.log(mid, right, left)
    }
    return -1;
};

console.log(search([4,5,6,7,0,1,2], 0));