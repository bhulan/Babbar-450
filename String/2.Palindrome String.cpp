
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string s1=S;
	    reverse(S.begin(),S.end());
	    if(S==s1)
	    return 1;
	    else
	    return 0;
	}

};
