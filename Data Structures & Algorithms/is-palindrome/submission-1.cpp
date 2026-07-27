class Solution {
public:
    bool isPalindrome(string s) 
    {
        //USING TWO POINTERS
        int len=s.length();
        
        int left=0, right=len-1;
        while(left<right)
        {
            while(left< right && !isalnum(s[left]))
            {
                left++;
            }
            while(right>left && !isalnum(s[right]))
            {
                right--;
            }
            if(tolower(s[left]) != tolower(s[right]))
            return false;

            left++;
            right--;

        }
        return true;


    }
};
