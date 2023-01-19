
//https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/?fbclid=IwAR0BWtjfPwDhjHrQJgwtMHVvUG2SND4L9080cUW6C6Pt0-HsGxRfO4E5N5Y

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int t = mp[s[0]];
        for(auto i:mp){
            if(i.second != t)return false;
        }
        return true;
    }
};
