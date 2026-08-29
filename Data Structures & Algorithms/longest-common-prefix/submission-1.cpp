class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());

        string first = strs.front();
        string last = strs.back();

        string res = "";

        for(size_t i= 0 ; i<min(first.size(), last.size());i++){
            if(first[i]!=last[i]){
                break;
            }
            res.push_back(first[i]);
        }

    return res;
    }

};