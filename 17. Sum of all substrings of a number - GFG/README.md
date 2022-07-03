# 17. Sum of all substrings of a number
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer&nbsp;S&nbsp;represented as a string, the task is to get the sum of all possible sub-strings of this string.<br style="user-select: auto;">
As the answer will be large, print it modulo 10^9+7.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>S = 1234
<strong style="user-select: auto;">Output: </strong>1670<strong style="user-select: auto;">
Explanation: </strong>Sum = 1 + 2 + 3 + 4 + 12 +
23 + 34 + 123 + 234 + 1234&nbsp;= 1670</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>S = 421
<strong style="user-select: auto;">Output: </strong>491<strong style="user-select: auto;">
Explanation: </strong>Sum = 4 + 2 + 1 + 42 + 21</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You only need to complete the function <strong style="user-select: auto;">sumSubstrings</strong>&nbsp;that takes S as an&nbsp;argument&nbsp;and&nbsp;returns&nbsp;the answer&nbsp;modulo 1000000007.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= |S| &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>