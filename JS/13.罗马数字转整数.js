/**
 * @param {string} s
 * @return {number}
 */
 var romanToInt = function(s) {
    const symbol = new Map();
    symbol.set('I', 1);
    symbol.set('V', 5);
    symbol.set('X', 10);
    symbol.set('L', 50);
    symbol.set('C', 100);
    symbol.set('D', 500);
    symbol.set('M', 1000); 

    let ans = 0 , n = s.length;
    for (let i = 0; i < n; i++) {
        let value = symbol.get(s[i]);
        if (i < n - 1 && value < symbol.get(s[i + 1])) {
            ans -= value;
        }
        else{
            ans += value;
        }
        
    }
    return ans;
};

console.log(romanToInt('IV'));