/**
 * @param {string} s
 * @return {string}
 */
 var longestPalindrome = function(s) {
    if (s.length < 2) {
        return s;
    }
    var res = '';
    for (let i = 0; i < s.length; i++) {
        solve(i, i);
        solve(i, i + 1);
    }

    function solve(n, m){
        while (n >= 0 && m < s.length && s[n] == s[m]){
            n--;
            m++;
        }
        if (m - n - 1 > res.length) {
            res = s.slice(n + 1, m)
        }
    }
    return res;
}; 

console.log(longestPalindrome("cbbd"));