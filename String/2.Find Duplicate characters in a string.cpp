class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]]>=2)
            return s[i];
        }
        return '#';
    }
};
