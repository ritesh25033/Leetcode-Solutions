/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    // console.log(s.split(''));
    // const s1=s.split('').sort().join();
    // const t1=t.split('').sort().join();
    // return s1===t1;
    if(s.length!=t.length)return false;
    const mp = new Map();
    for(let i=0;i<s.length;i++){
        let n=mp.get(s[i])||0;
        mp.set(s[i],n+1);
        let m=mp.get(t[i])||0;
        mp.set(t[i],m-1);
    }
    for(const [key,value] of mp){
        if(value==0)continue;else return false;
    }
     return true;
};