/**
 * @param {string[]} strs
 * @return {string}
 */
 var longestCommonPrefix = function(strs) {
    var prefix = "";
    if (strs.length == 0 || strs[0].length == 0 ){
        return prefix;
    }
    else if (strs.length == 1){
        return strs[0];
    }
    for (let i = 0; i < strs[0].length; i++) {
        let letter = strs[0][i];
        for (let j = 0; j < strs.length; j++) {
            if (letter != strs[j][i]) {
                return prefix;
            }
        }
        prefix = prefix.concat(letter);
        
    }
    return prefix;
};

console.log(longestCommonPrefix(["flower","flower","flower","flower"]))