/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let num= arr.filter((e,i)=>fn(e,i));
    return num;
};