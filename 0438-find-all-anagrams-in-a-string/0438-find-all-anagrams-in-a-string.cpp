class Solution {
public:
  bool allZero(vector<int>&counter){
    for(auto it : counter){
        if(it!=0) return false;
    }
    return true;
  }
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        vector<int>counter(26,0); //traverse s acc. to p
        //count the freq. of each char in p
        for(int i =0 ; i< p.size() ; i++){
            counter[p[i]-'a']++;
        }
         int i = 0,j=0;
         while(j<s.size()){
            counter[s[j]-'a']--; //Decrement the count for the char at index 'j
            if(j-i+1 == p.size()){
                if(allZero(counter)){ //an anagram is found
                    result.push_back(i); //Add the starting index 'i' to the result
                }
                counter[s[i]-'a']++; //Restore the count for the char at index 'i' as we slide the window
                i++;
            }
            j++;
         }
         return result;
    }
};