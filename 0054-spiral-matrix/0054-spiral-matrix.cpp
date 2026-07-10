class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size() - 1 , n = mat[0].size() - 1 ; 
        int strow = 0 , stcol = 0 ;     // starting rows and columns 
        int endrow = m  , endcol = n ;
        vector<int> ans ; 

        while(strow <= endrow && stcol <= endcol){

        // Top boundary 
        for(int j = stcol ; j <= endcol ; j++){
            ans.push_back(mat[strow][j]); 
        }
        // Right boundary 
        for(int j = strow + 1 ; j<= endrow ; j++){
            ans.push_back(mat[j][endcol]) ; 
        }
        // Bottom Boundary 
        for(int j = endcol - 1 ; j>= stcol ; j-- ){
            if(strow == endrow){
                break ;              // corner case for odd matrix
            }
            ans.push_back(mat[endrow][j]) ; 
        }
        //left boundary 
        for(int j = endrow - 1 ; j >= strow + 1 ; j-- ){
            if(stcol == endcol){
                break ;                            // corner case for odd matrix
            }                                    
            ans.push_back(mat[j][stcol]) ; 
        }
        strow++ , stcol++ , endrow-- , endcol-- ;
        }
        return ans ; 
    }
};