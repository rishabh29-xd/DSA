class Solution {
public:
    void getperms(vector<int> &nums, vector<vector<int>> &ans, int index){
        if (index == nums.size()){
            ans.push_back(nums);
            return; 
        }
        for(int i = index; i < nums.size(); i++){
            swap(nums[i], nums[index]);         // index place => ith element choice 
            getperms(nums, ans, index + 1);
            swap(nums[i], nums[index]);         // backtracking
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; 
        getperms(nums, ans, 0);
        return ans; 
    }
};