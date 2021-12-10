/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
 var findMedianSortedArrays = function(nums1, nums2) {
    nums1 = nums1.concat(nums2).sort((a,b) => a - b);
    console.log(nums1);
    var len = Math.ceil(nums1.length / 2) - 1;
    console.log(len);
    if (nums1.length % 2 == 1){
        return nums1[len];
    }
    else{
        return (nums1[len] + nums1[len + 1]) / 2;
    }
};