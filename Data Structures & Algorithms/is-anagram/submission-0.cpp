class Solution {
public:
    bool isAnagram(string s, string t) {
        
  map<char,int> sMap;
  map<char,int> tMap;

  for(char w : s){
    sMap[w]++;
  }
  for(char w : t){
    tMap[w]++;
  }
  
  if(sMap==tMap){
    cout<< "Anagram detected"<<endl;
    return true;
  }

    return false;
    }
};
