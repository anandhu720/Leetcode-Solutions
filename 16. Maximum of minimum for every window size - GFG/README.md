# 16. Maximum of minimum for every window size
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer array. The task is to find the maximum of the minimum of every window size in the array.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> Window size varies from 1 to the size of the Array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 7
arr[] = {10,20,30,50,10,70,30}
<strong style="user-select: auto;">Output: </strong>70 30 20 10 10 10 10&nbsp;<strong style="user-select: auto;">
Explanation: 
</strong>1.First element in output
indicates maximum of minimums of all
</span><span style="font-size: 18px; user-select: auto;">windows of size 1.
</span><span style="font-size: 18px; user-select: auto;">2.Minimums of windows of size 1 are {10},
 {20}, {30}, {50},{10}, </span><span style="font-size: 18px; user-select: auto;">{70} and {30}. 
&nbsp;Maximum of these minimums is 70. </span>
<span style="font-size: 18px; user-select: auto;">3. Second element in output indicates
maximum of minimums of all </span><span style="font-size: 18px; user-select: auto;">windows of
size 2. 
</span><span style="font-size: 18px; user-select: auto;">4. Minimums of windows of size 2
are {10}, {20}, {30}, {10}, {10}, </span><span style="font-size: 18px; user-select: auto;">and
{30}.
5. Maximum of these minimums is 30 </span>
<span style="font-size: 18px; user-select: auto;">Third element in output indicates
maximum of minimums of all </span><span style="font-size: 18px; user-select: auto;">windows of
size 3. 
6. </span><span style="font-size: 18px; user-select: auto;">Minimums of windows of size 3
are {10}, {20}, {10}, {10} and {10}.
</span><span style="font-size: 18px; user-select: auto;">7.Maximum of these minimums is 20. </span>
<span style="font-size: 18px; user-select: auto;">Similarly other elements of output are
computed.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
arr[] = {10,20,30}
<strong style="user-select: auto;">Output: </strong>30 20 10<strong style="user-select: auto;">
Explanation: </strong>First element in output
indicates maximum of minimums of all
</span><span style="font-size: 18px; user-select: auto;">windows of size 1.Minimums of windows
of size 1 are {10} , {20} , {30}.
Maximum of these minimums are 30 and
similarly other outputs can be computed</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function&nbsp;<strong style="user-select: auto;">maxOfMin</strong>() which takes the array arr[] and its size N as inputs and finds the maximum of minimum of every window size and returns an array containing the result.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complxity</strong> : O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>