# 14. Count only Repeated
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr</strong>[] of <strong style="user-select: auto;">N</strong> positive integers, where elements are consecutive (sorted). Also, there is a single element which is repeating <strong style="user-select: auto;">X</strong> (any variable) number of times. Now, the task is to find the element which is repeated and number of times it is repeated.<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>If there's no repeating element, Return {-1,-1}.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
arr[] = {1,2,3,3,4}
<strong style="user-select: auto;">Output: </strong>3 2<strong style="user-select: auto;">
Explanation: </strong>In the given array, 3 is 
occuring two times.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
arr[] = {2,3,4,5,5}
<strong style="user-select: auto;">Output: </strong>5 2<strong style="user-select: auto;">
Explanation: </strong>In the given array, 5 is 
occuring two times.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
arr[] = {1,2,3}
<strong style="user-select: auto;">Output: </strong>-1 -1<strong style="user-select: auto;">
Explanation: </strong>In the given array, there's no
repeating element, and thus the given Output.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete&nbsp;<strong style="user-select: auto;">findRepeating&nbsp;</strong>function and return pair of element which is repeated and the number of times it is repeated. The printing is done by the driver code.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">7</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">15</sup></span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong>: O(1)</span></p>
 <p style="user-select: auto;"></p>
            </div>