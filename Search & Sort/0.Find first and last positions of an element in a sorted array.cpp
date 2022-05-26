class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        string s3=s1+s1;
        if(s1.length()==s2.length()){
            if(s3.find(s2)!=string::npos){
                 return  true;
            }
         
        }
        return false;
    }
};
