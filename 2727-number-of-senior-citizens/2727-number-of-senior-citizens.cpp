class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(int i=0;i<details.size();i++){ 
          int num1=details[i][11]-'0';
          int num2=details[i][12]-'0';
          int num = num1*10+num2;
          if(num>60)cnt++;
        }
        return cnt;
    }
};