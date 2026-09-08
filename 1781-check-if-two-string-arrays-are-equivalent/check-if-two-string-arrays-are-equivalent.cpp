class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word;
        string word3;
        for(int i=0;i<word1.size();i++)
        {
            word+=word1[i];
        }
         for(int i=0;i<word2.size();i++)
        {
            word3+=word2[i];
        }
        int i=0;
        if(word.size()!=word3.size()) return false;
        while(i<word.size())
        {
            if(word[i]!=word3[i]) return false;
            i++;
        }
        return true;
    }
};