class Solution {
public:
    int findLength(int i, int j, string &s) {
        while(i>=0 && j<s.length() && s[i]==s[j])
        {
            i--;
            j++;
        }
        return j-i-1;
        }
    string longestPalindrome(string s) {
        if(s.empty())
        return "";
        int start=0, end=0;
        for(int i=0;i<s.length();i++)
        {
            int len1=findLength(i, i, s);
            int len2=findLength(i, i+1, s);
            int len=max(len1, len2);
            if(len>end-start+1)
            {
                start=i-(len-1)/2;
                end=i+len/2;
            }
        }
        return s.substr(start, end-start+1);
    }
};