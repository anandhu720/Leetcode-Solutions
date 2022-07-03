# 4. Range GCD Queries
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array <strong style="user-select: auto;">arr </strong>of size <strong style="user-select: auto;">N, </strong>and<strong style="user-select: auto;">&nbsp;Q</strong>&nbsp;queries.&nbsp; You have to find GCD of the elements in the given range alongside updating the value of the array as per query.</span><br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong><span style="font-size: 18px; user-select: auto;"> 0-based indexing is used.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 6, Q = 3
arr[] = {2,3,4,6,8,16}
Queries = findRangeGCD(0,2)
&nbsp;         updateValue(3,8)
&nbsp;         findRangeGCD(2,5)
<strong style="user-select: auto;">Output:
</strong>1
4<strong style="user-select: auto;">
Explanation: </strong>There are 3 queries:&nbsp;
Query 1 : gcd(2, 3, 4) = 1
Query 2&nbsp;: 6&nbsp;changes to 8
Query 3&nbsp;: gcd(4, 8, 8, 16) = 4</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete<strong style="user-select: auto;">&nbsp;findRangeGcd</strong> and <strong style="user-select: auto;">updateValue </strong>function<strong style="user-select: auto;">.<br style="user-select: auto;">
findRangeGcd: </strong>This function takes L, R, st (segment tree array), and n(size of arr) as arguments and returns the range GCD.<br style="user-select: auto;">
<strong style="user-select: auto;">updateValue:&nbsp; </strong>This function takes index, new_val, arr, st (segment tree array), and n(size of arr) as arguments and updates arr[index] to new_val.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Q*Log(N)*Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Q &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= L, R, index &lt;= N-1<br style="user-select: auto;">
1 &lt;= arr[i], value<strong style="user-select: auto;">&nbsp;</strong>&lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>