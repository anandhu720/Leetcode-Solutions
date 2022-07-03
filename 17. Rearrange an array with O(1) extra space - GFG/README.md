# 17. Rearrange an array with O(1) extra space
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array&nbsp;<strong style="user-select: auto;">arr[]</strong>&nbsp;of size <strong style="user-select: auto;">N</strong> where every element is in the range from&nbsp;<strong style="user-select: auto;">0&nbsp;to&nbsp;n-1</strong>. Rearrange the given array so that&nbsp;<strong style="user-select: auto;">arr[i]&nbsp;</strong>becomes&nbsp;<strong style="user-select: auto;">arr[arr[i]]</strong>.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
arr[] = {1,0}
<strong style="user-select: auto;">Output: </strong>0 1<strong style="user-select: auto;">
Explanation: 
</strong>arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
arr[] = {4,0,2,1,3}
<strong style="user-select: auto;">Output: </strong>3 4 2 0 1<strong style="user-select: auto;">
Explanation: 
</strong>arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything.&nbsp;The task is to complete the function <strong style="user-select: auto;">arrange</strong>() which takes arr and N as input parameters and rearranges the elements in the array in-place.<strong style="user-select: auto;">&nbsp;</strong></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">7</sup><br style="user-select: auto;">
0 &lt;= Arr[i] &lt; N</span></p>
 <p style="user-select: auto;"></p>
            </div>