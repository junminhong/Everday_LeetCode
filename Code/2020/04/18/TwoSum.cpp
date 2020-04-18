//
// Created by 洪鈞閔 on 2020/3/3.
//

#include "TwoSum.h"

vector<int> Solution::twoSum(vector<int> &nums, int target) {
    vector<int> resault(2);
    bool isOk = false; //用來判斷是否完成的標籤，這邊其實可以直接retunr即可
    for(int i = 0; i < nums.size(); i++){ //進入雙層迴圈
        for(int j = 0; j < nums.size(); j++){
            if(i == j)
                break; //不要重複元素使用兩次
            else
                if((nums[i] + nums[j]) == target){
                    cout << i << j << endl; 
                    resault[0] = j; //找到答案就分別存入一個vector裡面然後回傳
                    resault[1] = i;
                    isOk = true;
                    break;
                }
        }
        if(isOk)
            break;
    }
    return resault;
}

int main(int argc, const char *argv[]){
    vector<int> nums = {2, 3, 6, 7};
    vector<int> resault = Solution().twoSum(nums, 9);
    for(int index = 0; index < resault.size(); index++)
        cout << resault[index] << endl;
    return 0;
}

