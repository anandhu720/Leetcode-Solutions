# 11. Modular Multiplicative Inverse
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two integers<strong style="user-select: auto;"> ‘a’ </strong>and<strong style="user-select: auto;"> ‘m</strong>’. The task is to find the smallest modular multiplicative inverse of <strong style="user-select: auto;">‘a’</strong> under modulo<strong style="user-select: auto;"> ‘m’</strong>.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>a = 3
m = 11
<strong style="user-select: auto;">Output: </strong>4
<strong style="user-select: auto;">Explanation: </strong>Since (4*3) mod 11 = 1, 4 
is modulo inverse of 3. One might think,
15 also as a valid output as "(15*3)
mod 11"  is also 1, but 15 is not in 
ring {0, 1, 2, ... 10}, so not valid.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>a = 10
m = 17
<strong style="user-select: auto;">Output: </strong>12
<strong style="user-select: auto;">Explanation: </strong>Since (12*10) mod 17 = 1,
12 is the modulo inverse of 10.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function</span><strong style="user-select: auto;"> </strong><span style="font-size: 18px; user-select: auto;"> <strong style="user-select: auto;">function modInverse()&nbsp;</strong>that takes <strong style="user-select: auto;">a and m as input parameters </strong>and <strong style="user-select: auto;">returns </strong>modular multiplicative inverse of <strong style="user-select: auto;">‘a’</strong> under modulo<strong style="user-select: auto;"> ‘m’</strong>. If the modular multiplicative inverse doesn't exist&nbsp;<strong style="user-select: auto;">return -1.</strong></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= a&nbsp;&lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= m &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>