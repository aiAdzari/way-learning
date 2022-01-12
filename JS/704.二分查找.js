/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var search = function(nums, target) {
    var i = 0, j = nums.length - 1;
    while(i <= j){
        let mid = (i + j) >> 1; //移位运算符，向右移位，其效果等同于 /2 后的 Math.frool
        if (target == nums[mid]) {
            return mid;
        }
        else if (target < nums[mid]) {
            j = mid - 1;
        }
        else if (target > nums[mid]) {
            i = mid + 1;
        }
    }
    return -1;
};

console.log(search([-1,0,3,5,9,12], 9));