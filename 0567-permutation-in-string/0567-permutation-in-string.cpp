class Solution {
public:
    
    bool isFreqsame(int freq1[] , int freq2[]){

        for(int i = 0 ; i<26 ; i++){
            if(freq1[i] != freq2[i]){
                return false ; 
            }
        }
        return true ; 
    }

    bool checkInclusion(string s1, string s2) {
        
        int freq[26] = {0} ; 
        for(int i = 0 ; i<s1.length() ; i++){
            freq[s1[i] - 'a']++ ;
        }

        int windowsize = s1.length() ;
        for(int i = 0 ; i<s2.length() ; i++){
        int index = i , windowindex = 0 ;
        int windowfreq[26] = {0} ;

        while(windowindex < windowsize && index < s2.length()){
            windowfreq[s2[index] - 'a']++ ; 
            windowindex++ ; 
            index++;
        }   
        if(isFreqsame(freq ,windowfreq)){
            return true ; 
        }
        }
        return false ; 
    }
};