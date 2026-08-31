class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<int> res;
        for (int n : nums) {
            m[n]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto const& [val, freq] : m) {
            pq.push({freq, val});
        }

        for (int i = 0; i < k; ++i) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};
