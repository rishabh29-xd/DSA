class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0 ;
        for(int i = 0 ; i< chars.size();){
            int count = 0 ;
            char ch = chars[i] ;  // a 
            while(i < chars.size() && chars[i] == ch ){
                count++;
                i++; 
            }
            if(count == 1 ){
                chars[index++] = ch ; 
            }
            else{
                chars[index++] = ch ;
                string str = to_string(count);
                for(char digit : str){
                    chars[index++] = digit ; 
                }
            }
        }
        chars.resize(index);
        return index ; 
    }
};