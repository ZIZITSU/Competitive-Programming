class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

        int n = s.size();
        int finale=0;
 
        for(int i=0; i<n; i++){
            map<char, int> freq;
            freq[s[i]] = 1;
            int count=1;

            for(int j=i+1; j<n; j++){
        
                if(freq[s[j]]==0){
                    freq[s[j]]++;
                    count++;
                }
                else{
                    break;
                }
            }
            
            if(finale<count){
                        finale = count;
                    }
    }

        return finale;
    }
};