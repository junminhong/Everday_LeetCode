# Palindrome Number

# 題目如下：

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

```
Input: 121
Output: true
```
Example 2:

```
Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```
Example 3:

```
Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```
Follow up:

Coud you solve it without converting the integer to a string?

簡單來說這題就是要找出測資給你一個字串你要去判斷這個字串的是不是迴文，並回傳true or false。

然後這個有一個挑戰性出現了，你可以不把這些整數轉成文字處理就得到結果嗎～？

迴文：正讀和反讀都可以讀通的句子

[想了解更多迴文可點我](https://zh.wikipedia.org/wiki/%E5%9B%9E%E6%96%87)

# 解題思路：

我是先將找出這個整數是幾位，要找出整數有幾位可以用簡單的方法。

譬如：n / 10  , index++ 迴圈跑完index多少就代表整數有幾位了。

接著將測資利用/10的方法慢慢的將個位數取出去乘上10^(index - 1)次方就會得到一個reverse過後的測資，然後再去判斷reverse過後的測資和原本的測資是否一樣即可，並回傳true or false。

例如：

121 / 10 = 1

12 / 10 = 2

1 / 10 = 1

1 * 10 ^ 2 = 100

2 * 10 ^ 1 = 20

1 * 10 ^ 0 = 1

100 + 20 +1 = 121 < 這就是reverse過後的測資

記住一個重點reverse過的測資都有可能會超出int的範圍，所以請用long去存放reverse過的測資，不然會出錯哦～～

**如果文字表達不清，可直接觀看源碼(如果你看得懂的話哈哈)**

