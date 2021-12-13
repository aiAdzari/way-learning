/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
 var matrixReshape = function(mat, r, c) {
     var m = mat.length;
     var n = mat[0].length;
     const ans = new Array(r).fill(0).map(() => new Array(c).fill(0));
    if (m * n != r * c) {
        return mat;
    }
    else{
        for (let index = 0; index < r * c; index++) {
            ans[Math.floor(index / c)][index % c] = mat[Math.floor(index / n)][index % n];
        }
        return ans;
    }
};

console.log(matrixReshape([[1,2],[3,4]], 1, 4));