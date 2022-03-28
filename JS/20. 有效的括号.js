/**
 * @param {string} s
 * @return {boolean}
 */
 var isValid = function(s) {
    let length = s.length / 2;
		for (let i = 0; i < length; i++) {
			s = s.replace("()", "").replace("{}", "").replace("[]", "");
		}
        return s.length == 0;
};

console.log(isValid('{[]}'));