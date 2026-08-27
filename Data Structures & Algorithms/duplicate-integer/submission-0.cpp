class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m ;

        for(int i=0; i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto &[key,val]: m){
            if (val>1){
                return true;
            }
        }

        return false;
    }
};