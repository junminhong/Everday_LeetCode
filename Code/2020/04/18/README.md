# TwoSum

# 題目如下：

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

看不英文是吧，沒關係我也看不太懂 所以我每題都會用中文來講解。

首先要先了解到這個題目是要我們從一個整數陣列中，找出兩個數字相加會等於目標。

重點來了要知道你不會使用到兩個元素兩次，然後你只會得到一組答案，要先知道重點解題時才會縮小範圍。

# 解題思路：

我利用雙層迴圈的方式，讓陣列從頭到尾掃過一遍，去找到兩個元素是等於我們的目標值，找到之後就可以回傳解答了。

**如果文字表達不清，可直接觀看源碼**