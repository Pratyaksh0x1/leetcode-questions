/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    let f = {
    toBe: function(val2){
        if(val===val2){
            return true;
        }else {
            throw new Error("Not Equal");
        }
    },
    notToBe:function(val2){
        if(val!==val2){
            return true;
        }else{
            throw new Error("Equal");
        }
    }
};
return f;
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */