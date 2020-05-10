//
// Created by 洪鈞閔 on 2020/4/19.
//

#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        // if samll number in front of big number subtract
        // if III = 1+1+1 = 3
        // if IV = 1- 5 = 4
        map<char, int> romanNumber;
        romanNumber.insert(pair<char, int>('I', 1));
        romanNumber.insert(pair<char, int>('V', 5));
        romanNumber.insert(pair<char, int>('X', 10));
        romanNumber.insert(pair<char, int>('L', 50));
        romanNumber.insert(pair<char, int>('C', 100));
        romanNumber.insert(pair<char, int>('D', 500));
        romanNumber.insert(pair<char, int>('M', 1000));
        int total = 0;
        for(int index = 1; index <= s.size(); index++){
            if(romanNumber[s[index]] <= romanNumber[s[index - 1]])
                total += romanNumber[s[index - 1]];
            else
                total -= romanNumber[s[index - 1]];
        } 
        return total;
	}
};
int main(int argc, char* argv[]){
    cout << Solution().romanToInt("DCXXI") << endl;
    return 0;
}
