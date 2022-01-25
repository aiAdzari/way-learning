/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var sortedSquares = function(nums) {
    var n = nums.length;
    var newarr = [];
    for (let i = 0, j = n - 1, ind = n - 1; i <= j;) {
        if ((nums[i] * nums[i]) > nums[j] * nums[j]) {
            newarr[ind] = nums[i] * nums[i];
            ++i;
        }
        else {
            newarr[ind] = nums[j] * nums[j];
            --j;
        }
        --ind;
    }
    return newarr;
};


console.log(sortedSquares([-4,-1,0,3,10]));