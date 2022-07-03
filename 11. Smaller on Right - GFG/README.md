# 11. Smaller on Right
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr</strong>[] of <strong style="user-select: auto;">N</strong> elements. The task is to count maximum number&nbsp;of distinct smaller elements on right side of any array element. For example, in {10, 6, 9, 7, 20, 19, 21, 18, 17, 16}, the result is 4.&nbsp; Note that 20 has maximum 4 smaller elements on right side. Other elements have less count, for example 10 has 3 smaller elements on right side.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the array and next line contains array elements.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
For each testcase, print the maximum count of smaller elements on right side. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= T &lt;= 100<br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:<br style="user-select: auto;">
Input:</strong><br style="user-select: auto;">
4<br style="user-select: auto;">
10<br style="user-select: auto;">
10 6 9 7 20 19 21 18 17 16<br style="user-select: auto;">
5<br style="user-select: auto;">
5 4 3 2 1<br style="user-select: auto;">
5<br style="user-select: auto;">
1 2 3 4 5</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">5<br style="user-select: auto;">
1 2 3 2 1</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
4<br style="user-select: auto;">
4<br style="user-select: auto;">
0<br style="user-select: auto;">
2</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Testcase 1:</strong> Number of smaller elements on right side of every element (from left to right) in the array are 3 0 1 0 4 3 3 2 1 and 0 respecitvely. Maximum of all these counts is 4.<br style="user-select: auto;">
<strong style="user-select: auto;">Testcase 2:</strong> Number of smaller elements on right side of every element (from left to right) in the array are 4 3 2 1 and 0 respecitvely. Maximum of all these counts is 4.</span></p>
 <p style="user-select: auto;"></p>
            </div>