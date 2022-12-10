#include<stdio.h>
class Solution {
public:
    bool isPalindrome(int x) {
        double num=x, value=0, rev=0;
        if(x<0)
        {
           return false;
        }
        else
        {
            while(x!=0)
            {
            value=x%10;
            x/=10;
            rev=rev*10+value;
            }
            if(num==rev)
            return true;
            else
            return false;
        }
    }
};
