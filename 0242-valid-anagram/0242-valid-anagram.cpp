class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
       if(s.size()!=t.size())return false;
        vector<int>freq(27);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
         for(int i=0;i<freq.size();i++){
            cout<<freq[i]<<" ";
            if(freq[i]==0)continue;else return false;
        }
        return true;
    }
};