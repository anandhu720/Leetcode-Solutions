# Length of longest subarray
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A[] </strong>of size <strong style="user-select: auto;">N</strong>, return length of the longest subarray of non- negative integers.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: </strong>Subarray here means a continuous part of the array.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>
N = 9
A[] = {2, 3, 4, -1, -2, 1, 5, 6, 3}
<strong style="user-select: auto;">Output : </strong>
4
<strong style="user-select: auto;">Explanation :</strong>
The subarray [ 1, 5, 6, 3] has longest length 4 and
contains no negative integers</span></pre>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>
N = 10
A[] = {1, 0, 0, 1, -1, -1, 0, 0, 1, 0}
<strong style="user-select: auto;">Output : </strong>
4
<strong style="user-select: auto;">Explanation :</strong>
Subarrays [1, 0, 0, 1] and [0, 0, 1, 0] have
equal lengths but sum of first one is greater
so that will be the output.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">longestSubarray()</strong>&nbsp;which takes the array <strong style="user-select: auto;">A[]</strong> and its size <strong style="user-select: auto;">N</strong><strong style="user-select: auto;"> </strong>as inputs and returns the length of the longest subarray of non-negative integers.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">5&nbsp;</sup>&lt;= A[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>