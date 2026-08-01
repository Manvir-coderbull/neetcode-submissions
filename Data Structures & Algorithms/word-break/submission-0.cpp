class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        int n=s.size();
        vector<bool> dp(n+1, false);
        dp[0]=true;//empty string can always be segmented

        int maxLen=0;
        for(string word:wordDict)
        maxLen=max(maxLen, (int) word.size());
        
        for(int i=0;i<n;i++)
        {
            if(!dp[i])
            continue;

            for(int len=1; len<=maxLen && i+len<=n;len++)
            {
                if(dict.count(s.substr(i,len))){
                    dp[i+len]=true;
                }
            }
        }
        return dp[n];

    }
};