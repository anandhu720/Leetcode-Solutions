# 7. K Most occurring elements
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr</strong>[] of <strong style="user-select: auto;">N </strong>integers in which elements may be repeating several times. Also, a positive number <strong style="user-select: auto;">K</strong> is given and the task is to find sum of total frequencies of K most occurring elements</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: </span></strong><span style="font-size: 18px; user-select: auto;">The value of K is guaranteed to be less than or equal to the number of distinct elements in arr.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 8
arr[] = {3,1,4,4,5,2,6,1}
K = 2
<strong style="user-select: auto;">Output: </strong>4<strong style="user-select: auto;">
Explanation: </strong>Since, 4 and 1 are 2 most
occurring elements in the array with
their frequencies as 2, 2. So total
frequency is 2 + 2 = 4.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 8
arr[] = {3,3,3,4,1,1,6,1}
K = 2
<strong style="user-select: auto;">Output: </strong>6<strong style="user-select: auto;">
Explanation: </strong>Since, 3 and 1 are most
occurring elements in the array with
frequencies 3, 3 respectively. So,
total frequency is 6.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">kMostFrequent()&nbsp;</strong>whic returns the frequencies of K most occuring elements.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= K &lt;= N<br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity </strong>: O(N log N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space:&nbsp;</strong>O(N)</span></p>
 <p style="user-select: auto;"></p>
            </div>