var string = 'thisisstring';

function reverse_string(string){
    var arr1 = string.split('');
    console.log(arr1)
     var arr2 = arr1.reverse();
    var arr3 = arr2.join('');
    return arr3; 
}

console.log(reverse_string(string));