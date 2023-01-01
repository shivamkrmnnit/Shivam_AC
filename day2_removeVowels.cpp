 //Given a string, remove the vowels from the string.
//https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1?fbclid=IwAR3xNCLXHsBTAorpIoIr404fpTcjKG9yqU7NdBbtxaF0VGCV_0cbQwr5HaI



for(int i=0; i<S.size(); i++)
	    {
	        if(S[i] == 'a' || S[i] == 'o' || S[i] == 'e' || S[i] == 'i' || S[i] == 'u')
	        {
	            continue;
	        }
	        else{
	            cout<<S[i];
	        }
	    }
