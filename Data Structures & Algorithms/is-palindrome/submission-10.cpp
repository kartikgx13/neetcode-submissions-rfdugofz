class Solution {
public:
    bool isPalindrome(string s) {
        //defining 2 pointers left and right starting at the extreme ends of the input string
        int left = 0;
        int right = s.length() - 1; //0-based indexing

        while(left < right){
            //skipping non alpha numeric characters starting from left
            while(left < right && !isalnum(s[left])) left++;

            while(left < right && !isalnum(s[right])) right--;

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
