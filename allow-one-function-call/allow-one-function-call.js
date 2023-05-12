/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    
 let x=0;
    return function(...args){
        let ans=fn(...args);
     
        if(x==0)
        {
            x++;
            return ans;
     
        }
    }
};


  let fn = (a,b,c) => (a + b + c)
let onceFn = once(fn)
//  *
//  * onceFn(1,2,3); // 6
//  * onceFn(2,3,6); // returns undefined without calling fn
//  */