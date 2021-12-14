function reversstring(string){
    if (string.length <= 1) {
        return false;
    }
    for (let index = 0; index < Math.floor(string.length / 2); index++) {
        if (string[index] != string[string.length - 1]) {
            return false;
        }
        
    }
    return true;
}

console.log(reversstring('ada'));