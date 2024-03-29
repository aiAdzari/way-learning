/**
 * @param {number} x
 * @return {number}
 */
 var reverse = function(x) {
    let res = 0;
    while(x){
        res = res * 10 + x % 10;
        if (res > Math.pow(2, 31) - 1 || res < Math.pow(-2, 31)) {
            return 0;
        }
        x = ~~(x / 10); //~~意为按位取反两次，在不改变符号的情况下取整。
    }
    return res;
};