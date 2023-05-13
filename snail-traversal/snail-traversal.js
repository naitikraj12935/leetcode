/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function(rowsCount, colsCount) {
      let obj=[];
        if(this.length!=rowsCount*colsCount)
        {
            return obj;
        }
       
         for(let i=0;i<rowsCount;i++)
         {
             let sol=[];
             obj.push(sol);
         }
         let x=0;
         for(let i=0;i<this.length;i++)
         {  
             if(i!=0 && i%rowsCount==0)
             {
                 x++;
             }
             if(x%2==0)
             {
             obj[i%rowsCount].push(this[i]);
             }
             if(x%2!=0)
             {
                 obj[rowsCount-i%rowsCount-1].push(this[i]);
             }
         }
         return obj;
}

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */