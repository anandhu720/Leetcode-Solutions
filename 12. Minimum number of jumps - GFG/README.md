# 12. Minimum number of jumps
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of integers where each element represents the max number of steps that can be made forward from that element. The task is to find the minimum number of jumps to reach the end of the array (starting from the first element).&nbsp;If an element is <strong style="user-select: auto;">0</strong>, then cannot move through that element.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 11
a[] = {1,3,5,8,9,2,6,7,6,8,9}
<strong style="user-select: auto;">Output: </strong>3<strong style="user-select: auto;">
Explanation: </strong>First jump from 1st element,
and we jump to 2nd element with value 3.
Now, from here we jump to 5h element with
value 9. and from here we will jump to
last.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
a[] = {1,4,3,2,6,7}
<strong style="user-select: auto;">Output: </strong>2</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function&nbsp;<strong style="user-select: auto;">minimumJump()</strong>&nbsp;which takes an array and N (number of elements) as input parameters&nbsp;and returns the answer(if no answer possible return -1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space</strong>: O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= a<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>