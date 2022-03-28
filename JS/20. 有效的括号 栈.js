/**
 * @param {string} s
 * @return {boolean}
 */
 var isValid = function(s) {
    let stack = [];
	for (let i = 0; i < s.length; i++) {
		if (['(','{','['].includes(s[i])) {
			stack.unshift(s[i]);
		}
		else if (['()', '{}', '[]'].includes(stack[0] + s[i])) {
			stack.shift()
		}
		else{
			return false;
		}
		console.log(s[i], stack);
	}

	return stack.length == 0;
};

console.log(isValid('{[]}'));