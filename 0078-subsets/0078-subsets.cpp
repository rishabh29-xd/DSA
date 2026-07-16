class Solution {
public:

    void printsubset(vector<int> &arr,vector<int> &ans ,int i , vector<vector<int>> &allsubsets){

    if(i == arr.size()){
        allsubsets.push_back({ans}) ; 
        return; 
    }

    // Including in subset 
    ans.push_back(arr[i]) ;
    printsubset(arr, ans , i + 1 , allsubsets) ; 

    ans.pop_back() ;    // Backtracking 
    // Excluding in Subset 
    printsubset(arr, ans , i+1 , allsubsets);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans ; 
        vector<vector<int>> getallsubsets ;
        printsubset(nums, ans ,0 , getallsubsets);
        return getallsubsets ; 
    }
};