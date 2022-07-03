# 16. Kth smallest element
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr</strong>[] of <strong style="user-select: auto;">N</strong> positive integers and a number <strong style="user-select: auto;">K</strong>. The task is to find the k<sup style="user-select: auto;">th</sup> smallest element in the array.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
<strong style="user-select: auto;">N</strong> = 5, <strong style="user-select: auto;">K</strong> = 3
<strong style="user-select: auto;">arr[]</strong> = {3,5,4,2,9}

<strong style="user-select: auto;">Output</strong>: 
4

<strong style="user-select: auto;">Explanation</strong>: 
Third smallest element in the array is 4.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
<strong style="user-select: auto;">N</strong> = 5, <strong style="user-select: auto;">k</strong> = 5
<strong style="user-select: auto;">arr[]</strong> = {4,3,7,6,5}

<strong style="user-select: auto;">Output</strong>: 
7

<strong style="user-select: auto;">Explanation</strong>: 
Fifth smallest element in the array is 7.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You&nbsp; don't need to read inputs or print anything. Complete the&nbsp;method&nbsp;<strong style="user-select: auto;">kthSmallest()</strong> which takes array <strong style="user-select: auto;">arr[]</strong>, size of the array <strong style="user-select: auto;">n</strong> and value <strong style="user-select: auto;">k</strong> as input parameters and returns&nbsp;kth smallest element.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= K &lt;= N<br style="user-select: auto;">
Array do not contains duplicates.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(NlogK)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong>: O(K)</span></p>
 <p style="user-select: auto;"></p>
            </div>