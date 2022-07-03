# 6. Range LCM Queries
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array&nbsp;of size <strong style="user-select: auto;">N&nbsp;</strong>and<strong style="user-select: auto;">&nbsp;Q</strong>&nbsp;queries. Solve the queries to find LCM for the given range alongside the queries to update the array values.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> 0-based indexing is used.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 6, Q = 3
arr[] = {2,3,4,6,8,16}
Queries: getLCM(0,2)
&nbsp;        updateValue(3,8)
&nbsp;        getLCM(2,5)
<strong style="user-select: auto;">Output:
</strong>12
16<strong style="user-select: auto;">
Explanation: </strong>There are 3 queries:&nbsp;
Query 1 :&nbsp; lcm(2, 3, 4) = 12
Query 2&nbsp;:&nbsp; 6&nbsp;changes to 8
Query 3&nbsp;:&nbsp; lcm(4, 8, 8, 16) = 16</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete <strong style="user-select: auto;">updateValue()</strong> and <strong style="user-select: auto;">getLCM()</strong> function. The <strong style="user-select: auto;">segment tree array has been prebuilt for you</strong>. You only need to use it to complete the queries.<br style="user-select: auto;">
<strong style="user-select: auto;">getLCM()&nbsp;</strong>returns the LCM of elements in range [L,R].<br style="user-select: auto;">
<strong style="user-select: auto;">updateValue()&nbsp;</strong>processes the point update query.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Q*Log(N)*Log(N) ).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">N</strong> &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">Q</strong> &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= <strong style="user-select: auto;">L, R, index</strong> &lt;= N-1<br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">arr[i], value&nbsp;</strong>&lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>