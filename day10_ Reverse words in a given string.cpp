//Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?fbclid=IwAR38ccy8UtwISEH_yLAeeREC7P2uopqbx9onr0VQv8stqNppXfTTNH1rUes

string reverseWords(string S) 
    { 
        // code here 
        string st ="";
        vector<string>ans;
        for(int i=0;i<S.size();i++){
            char ch =  S[i];
            if(ch != '.'){
                st +=ch;
            }
            else if(S[i] == '.'){
                ans.push_back(st);
                ans.push_back(".");
                st = "";
            }
        }
        ans.push_back(st);
        reverse(ans.begin(),ans.end());
        string answer = "";
        
        for(int i=0;i<ans.size();i++){
            answer+=ans[i];
        }
        
        return answer;
        
    } 
