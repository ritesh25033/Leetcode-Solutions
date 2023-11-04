/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var v  = init;
    function increment(){
        return ++v;
    }
      function decrement(){
        return --v;
    }
      function reset(){
         return v=init
    }
    
        return {increment,decrement,reset};
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */