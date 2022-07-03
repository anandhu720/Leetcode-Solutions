# 20. Closer to sort
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr</strong>[](0-based indexing) of <strong style="user-select: auto;">N</strong> integers which is <strong style="user-select: auto;">closer sorted </strong>(defined below)<strong style="user-select: auto;"> </strong>and an element <strong style="user-select: auto;">x</strong>. The task is to find the index of element <strong style="user-select: auto;">x</strong> if it is present. If not present, then print -1.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Closer Sorted</strong>: The first array is sorted, but after sorting some elements are moved to either of the adjacent positions, i.e, maybe to the <strong style="user-select: auto;">arr[i+1]</strong> or <strong style="user-select: auto;">arr[i-1]</strong>.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 5, A[] = [3 2 10 4 40], x = 2
<strong style="user-select: auto;">Output</strong>: 1
<strong style="user-select: auto;">Explanation</strong>: 2 is present at index 1 
(0-based indexing) in the given array.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 4, A[] = [2 1 4 3], x = 5
<strong style="user-select: auto;">Output</strong>: -1
<strong style="user-select: auto;">Explanation</strong>: 
5 is not in the array so the output will 
be -1.
</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. You only need to complete the <strong style="user-select: auto;">function </strong>closer() that <strong style="user-select: auto;">arr, N, and x as parameters </strong>and <strong style="user-select: auto;">returns </strong>the index. If the element is not present, return <strong style="user-select: auto;">-1</strong>.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= arr[i],x &lt;= 10</span><sup style="user-select: auto;"><span style="font-size: 15px; user-select: auto;">9</span></sup><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>You may assume that the array does not contain any duplicate elements.&nbsp;</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>