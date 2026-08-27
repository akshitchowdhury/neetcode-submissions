class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int,int> m ;

  for(int i=0 ; i<nums.size();i++){
    m[target-nums[i]] = i;
  }

  vector<int> res;
   for(int num : nums){
    if(m.count(num)){
      // cout<< "Found" << num << m[num] << endl;
      res.push_back(m[num]);
    }
   }

    sort(res.begin(),res.end());

   
  return res;
    }
};
