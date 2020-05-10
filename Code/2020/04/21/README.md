# Roman to Integer

# 題目如下：

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:

```
Input: "III"
Output: 3
```
Example 2:

```
Input: "IV"
Output: 4
```
Example 3:

```
Input: "IX"
Output: 9
```
Example 4:

```
Input: "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
```
Example 5:

```
Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

這題就是要透過題目給你的羅馬數字表去轉換成一個阿拉伯數字

# 解題思路：

基本上這題我是先將羅馬數字表儲存成一個map，然後在透過迴圈將字串拆成一個一個的字元在丟進去羅馬數字表裡面轉換成對應的阿拉伯數字，然後去判斷是否比前面大如果是就是減反之則加。

**如果文字表達不清，可直接觀看源碼(如果你看得懂的話哈哈)**

