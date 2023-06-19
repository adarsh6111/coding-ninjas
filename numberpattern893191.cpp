#include <bits/stdc++.h> 
vector<string> numberPattern(int n)
{
	//type your code here
	vector<string> ans;
	int flag=1;
	string s="";
	 for(int i=1;i<=n;i++){ 
		 flag=i;             
        for(int j=1;j<=i;j++)  {           
            s+=to_string(flag);
            flag++;
            
        }  
		ans.push_back(s);
		s = "";
        
    }
	return ans;
}
