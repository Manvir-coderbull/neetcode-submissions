class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        int l1=s.length();
        int l2= t.length();
        if(l1!=l2)
        return false;

        for(int i=0;i<l1;i++)
        {
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        return mpp1==mpp2;
        
    }
};
