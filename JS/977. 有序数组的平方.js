/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var sortedSquares = function(nums) {
    var n = nums.length;
    var newarr = [];
    for (let i = 0, j = n - 1, ind = n - 1; i <= n;) {
        if (Math.sqrt(nums[i]) > Math.sqrt([nums[j])) {
            newarr[ind] = Math.sqrt[nums[i]];
            ++i;
        }
        else {
            newarr[ind] = Math.sqrt[nums[j]];
            --j;
        }
        --ind;
    }
    return newarr;
};

console.log(sortedSquares([-4,-1,0,3,10]));