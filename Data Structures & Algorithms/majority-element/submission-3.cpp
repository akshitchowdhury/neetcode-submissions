class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
  int res = -1;
  map<int,int> m;
    
  for(int n : nums){

    m[n]++;
    
  }

    for (auto &[key, val] : m){ cout << key << ":" << val << " ";
      if (val>(nums.size()/2)){
        res = key;
      }
    }
    return res;
    }
};