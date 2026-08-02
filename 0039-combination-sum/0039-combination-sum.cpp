class Solution {
public:

    set<vector<int>> s ; 
    void getAllcombin(vector<int> &arr , vector<int>& combin , int i , vector<vector<int>>& ans , int target ){
        int n = arr.size() ; 
        if(i == n || target < 0 ){
            return ; 
        }                                           // Base Case
        if(target == 0){
            if(s.find(combin) == s.end()){
            s.insert(combin) ;  
            ans.push_back(combin) ;
            }
            return ; 
    }
        combin.push_back(arr[i]) ; 
        getAllcombin(arr , combin , i + 1 , ans , target - arr[i]) ;   // single inclusion
        getAllcombin(arr , combin , i , ans , target - arr[i])  ;       // multiple inclusion 
        combin.pop_back() ; 
        getAllcombin(arr , combin , i + 1 , ans , target) ;                // exclusion 
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<int> combin ; 
        vector<vector<int>> ans ;
        getAllcombin(candidates , combin , 0 , ans , target) ;
        return ans ; 
    }
};