# 18. Median of Two sorted arrays
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two sorted arrays of sizes <strong style="user-select: auto;">N</strong> and <strong style="user-select: auto;">M</strong> respectively. The task is to find the median of the two arrays when they get merged.<br style="user-select: auto;">
If&nbsp;there are even number of elements in the resulting array,&nbsp;find the floor of the average of two medians.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5, M = 6 
arr[] = {1,2,3,4,5}
brr[] = {3,4,5,6,7,8}
<strong style="user-select: auto;">Output: </strong>4<strong style="user-select: auto;">
Explanation: </strong>After merging two arrays, 
elements will be as 1 2 3 3 4 4 5 5 6 7 8
So, median is 4.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2, M = 3 
arr[] = {1,2}
brr[] = {2,3,4}
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation: </strong>After merging two arrays, 
elements will be as 1 2 2 3 4. So, 
median is 2.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Complete&nbsp;<strong style="user-select: auto;">findMedian()&nbsp;</strong>function which takes the two arrays and n and m as input parameters&nbsp;and returns&nbsp;their median. If&nbsp;there are total even elements,&nbsp;return floor of average of middle two elements.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(log(max(m,n)))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N, M &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= arr[i], brr[i] &lt;= 10<sup style="user-select: auto;">7</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>