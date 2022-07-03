# 18. Max sum subarray by removing at most one element
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given array <strong style="user-select: auto;">A </strong>of size<strong style="user-select: auto;"> n</strong>. You need to find the maximum-sum sub-array with the condition that you are allowed to skip at most one element.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 5
A[] = {1,2,3,-4,5}
<strong style="user-select: auto;">Output: </strong>11<strong style="user-select: auto;">
Explanation: </strong>We can get maximum sum
subarray by skipping -4.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 8
A[] = {-2,-3,4,-1,-2,1,5,-3}
<strong style="user-select: auto;">Output: </strong>9<strong style="user-select: auto;">
Explanation: </strong>We can get maximum sum
subarray by skipping -2 as [4,-1,1,5]
sums to 9, which is the maximum
achievable sum.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your task is to complete the function <strong style="user-select: auto;">maxSumSubarray</strong> that take array and size as parameters and returns the maximum sum.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 100<br style="user-select: auto;">
-10<sup style="user-select: auto;">3</sup> &lt;= A<sub style="user-select: auto;">i</sub>&lt;= 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>