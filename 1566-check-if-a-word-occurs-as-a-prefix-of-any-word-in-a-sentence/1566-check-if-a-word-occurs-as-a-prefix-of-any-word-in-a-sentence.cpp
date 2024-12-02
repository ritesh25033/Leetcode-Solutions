class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        string word;
    // Split the sentence into words
        for(int i=0;i<sentence.size();i++){
                word+=sentence[i];
                if(sentence[i]==' '){
                    words.push_back(word);
                    word="";
                }
        }
    words.push_back(word);
    // Check for prefix
    for (int i = 0; i < words.size(); i++) {
        if (words[i].substr(0, searchWord.size()) == searchWord) {
            return i + 1; 
        }
    }
    
    return -1;
}
};