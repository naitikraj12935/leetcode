/**
 * @param {Function} fn
 */
function memoize(fn) {
   let sol={};
    return function(...args) {
        let key=JSON.stringify(args);
        if(key in sol)
        {
            return sol[key];
        }
        let ans=fn(...args);
        sol[key]=ans;
        
        return ans;
        
    }
}
 
  

/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */