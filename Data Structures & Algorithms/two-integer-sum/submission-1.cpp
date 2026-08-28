class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int,int> m ;

  vector<int> res;
   for(int i =0; i< nums.size();i++){
    int complacent = target-nums[i];

    if(m.find(complacent) != m.end()){
      
      cout << "Index found "<< m[complacent] <<" "<< i<<endl;
      
    return {m[complacent], i};
    }
    m[nums[i]] = i;
   }

   
  return res;
    }
};
