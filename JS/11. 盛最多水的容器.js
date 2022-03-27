/**
 * @param {number[]} height
 * @return {number}
 */
 var maxArea = function(height) {
    let max = 0;

    for (let i = 0, j = height.length - 1; i < j;) {
        let minHeight = Math.min(height[i], height[j]);
        let area = (j - i) * minHeight;
        max = Math.max(area, max);
        if (height[i] < height[j]) {
            i++;
        }
        else{
            j--;
        }
        console.log(i, j, minHeight, max)
    }
    return max;
};

console.log(maxArea([1,8,6,2,5,4,8,7,3]));