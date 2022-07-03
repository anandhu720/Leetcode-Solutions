# 1. Largest number in K swaps
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a number <strong style="user-select: auto;">K </strong>and string <strong style="user-select: auto;">str </strong>of digits denoting a positive integer, build the largest number possible by performing swap operations on the digits of <strong style="user-select: auto;">str </strong>at most&nbsp;<strong style="user-select: auto;">K </strong>times.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 4
str = "1234567"
<strong style="user-select: auto;">Output:</strong>
7654321<strong style="user-select: auto;">
Explanation:
</strong>Three swaps can make the
input 1234567 to 7654321, swapping 1
with 7, 2 with 6 and finally 3 with 5</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 3
str = "3435335"
<strong style="user-select: auto;">Output:
</strong>5543333
<strong style="user-select: auto;">Explanation:
</strong>Three swaps can make the input
3435335 to 5543333, swapping 3 
with 5, 4 with 5 and finally 3 with 4</span> 
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong><br style="user-select: auto;">
You don't have to read input or print anything. Your task is&nbsp;to complete the function <strong style="user-select: auto;">findMaximumNum()&nbsp;</strong>which takes the string and an integer as input and returns a string containing the largest number formed by perfoming the swap operation at most k times.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(n!/(n-k)!) , where n = length of input string<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(n)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong>:<br style="user-select: auto;">
1 ≤&nbsp;|str|<strong style="user-select: auto;"> </strong>≤ 30<br style="user-select: auto;">
1 ≤&nbsp;K<strong style="user-select: auto;"> </strong>≤ 10</span></p>
 <p style="user-select: auto;"></p>
            </div>