class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        vector<int> ps(n, 0);      // Prefix sum array
        ps[0] = nums[0];
        for (int i = 1; i < n; i++) {
            ps[i] = ps[i-1] + nums[i];
        }

        unordered_map<int,int> m;   // prefix sum -> frequency
        for (int j = 0; j < n; j++) {
            if (ps[j] == k) {
                count++;
            }
            int value = ps[j] - k;
            if (m.find(value) != m.end()) {
                count += m[value];
            }
            m[ps[j]]++;
        }
        return count;
    }
};