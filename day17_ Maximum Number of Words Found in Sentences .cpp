//A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

//You are given an array of strings sentences, where each sentences[i] represents a single sentence.

//Return the maximum number of words that appear in a single sentence.


//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/?fbclid=IwAR13rrRw8NN90YzELjFqhzab_8DbKsbYDC1d7ljTEycdDxWG3pr8q0YnZhU


int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int temp =0;
        int count =0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<sentences[i].size();j++){
               if(sentences[i][j]==' ')count++;
           }
           v.push_back(count);
           count =0;

        }
        return *max_element(v.begin(),v.end())+1;
        
    }

 
