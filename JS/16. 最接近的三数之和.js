/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var threeSumClosest = function(nums, target) {
    let res = 0, n = nums.length, ans = 100000;
    nums.sort((a,b) => a - b);
    for (let i = 0; i < n; i++) {
        let L = i + 1, R = n - 1;
        while(L < R){
            res = nums[i] + nums[L] + nums[R];
            if (res - target == 0) {
                return res;
            }
            else if (res - target > 0) {
                ans = Math.abs(ans) > Math.abs(res - target) ? res - target : ans;
                R--;
            }
            else if (res - target < 0) {
                ans  = Math.abs(ans) > Math.abs(res - target) ? res - target : ans;
                L++;
            }
        }
        
        
    }
    return ans + target;
};

console.log(threeSumClosest([0,0,0], 1));