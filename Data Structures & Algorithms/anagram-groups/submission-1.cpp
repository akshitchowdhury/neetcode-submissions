class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> wordMap;

for(string w : strs){

  string newWord = w;
  sort(newWord.begin(),newWord.end());
  wordMap[newWord].push_back(w);
}

vector<vector<string>> res;
 for (const auto& [key, group] : wordMap) {
        // cout << key << ": ";
        res.push_back(group);
        
    }
return res;
    }
};
