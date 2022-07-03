# 14. Kadane's Algorithm - I
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><em style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Kadane's algorithm comes into picture when we want to find the maximum possible sum in an array when summing the contiguous elements of the array.</span></em></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array.&nbsp;Find the<strong style="user-select: auto;"> maximum possible sum</strong> of contiguous elements of the array ending at each position in the array. Also, return the overall maximum that we can achieve.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
arr[] = {5,-2,-3,32,-5,65}
<strong style="user-select: auto;">Output: </strong>5 3 0 32 27 92
        92<strong style="user-select: auto;">
Explanation: </strong>Maximum sum at each index is
5, 3, 0, 32, 27, 92. And, maximum sum for
contiguous array is 92.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
arr[] = {-9,-8,8,3,-4}
<strong style="user-select: auto;">Output: </strong>-9 -8 8 11 7
&nbsp;        11</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. You don't need to take any input. Just complete the function <strong style="user-select: auto;">maximumSum()&nbsp;</strong>that takes the integer array and its size as inputs and prints the maximum contiguous subarray sum ending at each position in the array. Also, return the overall maximum.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= sizeOfArray &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">3</sup> &lt;= A<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">3</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>