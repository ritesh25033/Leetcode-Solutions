class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        string s="";
        while(true){
            int sum=0;
            s=to_string(n);
            for(int i=0;i<s.size();i++){
                int num=(s[i]-'0');
                sum+=(num*num);
            }
            n=sum;
              if(st.find(n)!=st.end()){
                return false;
            }
             st.insert(sum);
            if(n==1)return true;
        }
    }
};