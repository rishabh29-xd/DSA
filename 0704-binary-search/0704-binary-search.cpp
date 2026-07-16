class Solution {
public:
    int binsearch(vector<int>& nums,int start, int end , int target) {
        if(start<=end){
            int mid = start + (end-start)/2 ; 
        if(nums[mid] == target){
            return mid ; 
        }
        else if(nums[mid] <= target){
            return binsearch(nums , mid + 1 , end , target) ; 
        }
        else{
            return binsearch(nums , start , mid -1 , target);
        }
        }
        return -1 ;  
    }
    int search(vector<int>& nums,int target){
        return binsearch(nums , 0 , nums.size() - 1 , target);
    }
};