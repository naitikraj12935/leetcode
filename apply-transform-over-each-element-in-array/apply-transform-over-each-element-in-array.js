/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let ar1 = arr.map((num, index) => {
        return fn(num, index);
    });
    return ar1;
};
