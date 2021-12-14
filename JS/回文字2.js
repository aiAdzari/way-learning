function reversstring(string){
    var string_tep = string.split('').reverse().join('');
    if (string_tep.length != 1 && string_tep == string) {
        return true;
    }
    else{
        return false;
    }
}
console.log(reversstring('a'));