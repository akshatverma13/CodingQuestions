class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
    long reversenum=0;
    while(x>0)
    {
        int lastdigit=x%10;
        reversenum=(reversenum*10)+lastdigit;
        x=x/10;
    }
    // cout<<reversenum;
    if(reversenum==y){
        return true;

        
    }
    else(reversenum!=y);
    {
        return false;
    }
        
        
    }
};
