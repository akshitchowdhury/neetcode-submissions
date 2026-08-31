class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<int> res;
        for (int n : nums) {
            m[n]++;
        }

        int count = 0;
        for (auto it = m.rbegin(); it != m.rend(); ++it) {
            // std::cout << it->first << ":" << it->second << " ";
            if (count == k) break;
            res.push_back(it->first);
            count++;
        }

        return res;
    }
};
