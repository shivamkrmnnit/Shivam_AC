//You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.

//Return the number of strings in words that are a prefix of s.

//A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequence of characters within a string.

 
//link - https://leetcode.com/problems/count-prefixes-of-a-given-string/?fbclid=IwAR1rPveQV3D4k9Odg9ENu2I-Lu3tqQdAk-NtAjMrazyoThhfR44M5Kd0aPs

int countPrefixes(vector<string>& words, string s) {
        int n = words.size();
        int flag =0;
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j] == s[j]){
                    flag = 1;
                }
                else {flag =0;break;}
            }
            if(flag == 1)count++;
        }
        return count;
    }
