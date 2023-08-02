class Solution {
public:
    int getSum(int a, int b) {
        // return b==0? a:getSum(a^b, (a&b)<<1);
        // b used as carry
        //  int sum = a;
        // while (b != 0)
        // {
        //     sum = a ^ b;//calculate sum of a and b without thinking the carry 
        //     b = (a & b) << 1;//calculate the carry
        //     a = sum;//add sum(without carry) and carry
        // }
        
        // return sum;
        if(a > b)
    {
        int tmp = a;
        
        a = b;
        b = tmp;
    }
    if(a <= 0 && b <= 0)  while(b++ < 0) a--;
    else while(b-- > 0) a++; 
    return a;
    }
};