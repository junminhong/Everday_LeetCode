//
// Created by 洪鈞閔 on 2020/4/19.
//

#include "PalindromeNumber.h"
bool Solution::isPalindrome(int x) {
    int tmp = x, index = 0;
    long result = 0;
    while(tmp > 0){
        tmp /= 10;
        index++;
    }
    tmp = x;
    while(tmp > 0){
        result += (tmp % 10) * pow(10, --index);
        tmp /= 10;
    }
    if(result > INT_MAX | x < INT_MIN)
        return false;
    else if(result == x)
        return true;
    else
        return false;
}
int main(int argc, char* argv[]){
    cout << Solution().isPalindrome(1231) << endl;
    return 0;
}
