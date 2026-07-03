class Solution {
public:
    int maxArea(vector<int>& ht) { //2 pointer approach 
        int Maxwater = 0 ;
        int n = ht.size();
        int i = 0;
        int j = n-1 ;
        while(i<j){
            int width = j - i ; 
            int height = min(ht[i],ht[j]);
            int area = width * height ;
            Maxwater = max(Maxwater , area);

            ht[i] < ht[j] ? i++ : j-- ;

        }
        return Maxwater;
        
    }
};