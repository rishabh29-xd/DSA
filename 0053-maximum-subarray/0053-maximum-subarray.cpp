class Solution {
public:
    int maxSubArray(vector<int>& vec) {
        int maxsum = INT_MIN ; 
        int currentsum = 0 ; 
        for (int start = 0 ; start<vec.size(); start++){
            currentsum+= vec[start] ; 
            maxsum = max(currentsum , maxsum);
            if(currentsum < 0){
                currentsum = 0 ;
            }
            
        }
        return maxsum;
    }
};