Link-https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int y = 0, z = x;
        
        while(x > 0){
            y = y * 10 + x % 10;
            x /= 10;
        }
        return (y == z)?true:false;
    }
};
