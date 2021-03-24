class Solution {
private:
    string toLowerCase(string str) {
        transform(str.begin(),str.end(),str.begin(),::tolower);
        return str;
    }
    string removeVowels(string str) {
        string res;
        for(int i=0;i<str.length();i++) {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') res.push_back('*');
            else res.push_back(str[i]);
        }
        return res;
    }    
public:
    vector<string> spellchecker(vector<string>& wordList, vector<string>& queries) {
        unordered_map<string,int> mp1;
        unordered_map<string,string> mp2,mp3;
        int nWords=wordList.size(), nQueries=queries.size();
        for(int i=0;i<nWords;i++) {
            mp1[wordList[i]]++;
            string lowerCaseWord=toLowerCase(wordList[i]);
            if(mp2.find(lowerCaseWord)==mp2.end())
                mp2[lowerCaseWord]=wordList[i];
            string removedVowelWord=removeVowels(lowerCaseWord);
            if(mp3.find(removedVowelWord)==mp3.end()) 
                mp3[removedVowelWord]=wordList[i];
        }
        vector<string> res;
        for(int i=0;i<nQueries;i++) {
            if(mp1.find(queries[i])!=mp1.end()) res.push_back(queries[i]);
            else {
                string lowerCaseWord=toLowerCase(queries[i]);
                if(mp2.find(lowerCaseWord)!=mp2.end()) res.push_back(mp2[lowerCaseWord]);
                else {
                    string withoutVowelsWord=removeVowels(lowerCaseWord);
                    if(mp3.find(withoutVowelsWord)!=mp3.end()) res.push_back(mp3[withoutVowelsWord]);
                    else res.push_back("");
                }
            }
        }
        return res;
    }
};