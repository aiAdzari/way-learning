/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var searchInsert = function(nums, target) {
    var left = 0, ans = nums.length, right = ans - 1;
    while (left <= right){
        var mid = (left + right) >> 1;
        console.log(mid);
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            left = mid + 1;
        }
        else{
            ans = mid;
            right = mid - 1;
        }
    }
    return ans;
};