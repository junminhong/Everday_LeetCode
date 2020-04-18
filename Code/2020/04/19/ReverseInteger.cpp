//
// Created by 洪鈞閔 on 2020/3/12.
//

#include "ReverseInteger.h"

int Solution::reverse(int x) {
    if(x > INT_MAX | x < INT_MIN)
        return 0;
    cerr << INT_MIN << endl;
    string tmp = "";
    bool isNegativeNumber = false;
    if(x < 0) {
        x = ~x + 1;
        isNegativeNumber = true;
    }
    while(x > 0){
        tmp = tmp + to_string(x % 10);
        x /= 10;
    }
    long resault = atol(tmp.c_str());
    if(isNegativeNumber)
        resault = ~resault + 1;
    if(resault > INT_MAX | resault < INT_MIN)
        return 0;
    else
        return resault;
}

int main(int argc, char *argv[]){
    cerr << Solution().reverse(-2147483648) << endl;
    return 0;
}