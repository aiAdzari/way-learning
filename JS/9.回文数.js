/**
 * @param {number} x
 * @return {boolean}
 */
 var isPalindrome = function(x) {
    var x_tep = x.toString().split('').reverse().join('');
    if (x_tep == x) {
        return true;
    }
    else{
        return false;
    }

};

console.log(isPalindrome(100));