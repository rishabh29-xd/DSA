class Solution {
public:
    int arrangeCoins(int n) {
        long long st = 1 , end = n ; 
        while(st<= end){
            long long mid = st + (end - st)/ 2 ; 
            long long coins = mid * (mid + 1)/2;

            if (coins == n){
                return mid ; 
            } 
            else if (coins < n){ 
                st = mid + 1 ; 
            }
            else{
                end = mid - 1 ; 
            }
        }
        return end ; 
    }
};