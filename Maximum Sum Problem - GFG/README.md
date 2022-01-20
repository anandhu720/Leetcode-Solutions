# Maximum Sum Problem
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A number <strong style="user-select: auto;">n </strong>can be broken&nbsp;into&nbsp;three parts<strong style="user-select: auto;"> n/2, n/3 and n/4&nbsp;</strong>(consider only <strong style="user-select: auto;">integer </strong>part). Each number obtained in this process can be divided further recursively.&nbsp;Find the <strong style="user-select: auto;">maximum sum </strong>that can be obtained by&nbsp;summing up the divided parts&nbsp;together.<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>The maximum sum may&nbsp;be obtained without&nbsp;dividing n also.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n = 12
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation</strong>:</span>&nbsp;<span style="font-size: 18px; user-select: auto;">B</span><span style="font-size: 18px; user-select: auto;">reak n = 12 in three parts
{12/2, 12/3, 12/4} = {6, 4, 3},&nbsp;now current
sum is = (6 + 4 + 3) = 13. Further breaking 6,
4 and 3 into parts will produce sum less than
or equal to 6, 4 and 3 respectively.</span><span style="font-size: 18px; user-select: auto;">
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">â€‹<strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
n = 24
<strong style="user-select: auto;">Output:</strong> 27
<strong style="user-select: auto;">Explanation</strong>: Break n = 24 in three parts
{24/2, 24/3, 24/4} = {12, 8, 6}, now current
sum is = (12 + 8 + 6) = 26 . But recursively
breaking 12 would produce value 13.
So our maximum sum is 13 + 8 + 6 = 27.
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">maxSum()&nbsp;</strong>which accepts an integer n and returns the maximum sum.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
0 &lt;= n &lt;= 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>