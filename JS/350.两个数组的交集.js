/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
 var intersect = function(nums1, nums2) {
     var ans = [];
    for (let index = 0; index < nums1.length; index++) {
        if (nums2.indexOf(nums1[index]) != -1) {
            ans.push(nums1[index]);
            nums2.splice(nums2.indexOf(nums1[index]), 1);
        }
    }
    return ans;
};

console.log(intersect([2,1], [1,2]));