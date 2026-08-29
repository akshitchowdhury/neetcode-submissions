class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
  int res = -1;
  map<int,int> m;
    
  for(int n : nums){

    m[n]++;
    
  }

    for (auto &[key, val] : m){ cout << key << ":" << val << " ";
      
      res = max(key,res);
    }
    return res;
    }
};