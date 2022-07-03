# 2. Range Min Max Queries
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array&nbsp;of size <strong style="user-select: auto;">N&nbsp;</strong>and<strong style="user-select: auto;">&nbsp;Q</strong>&nbsp;queries. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">getMinMax(L,R): </strong>return the minimum and maximum in the given range [L,R]<br style="user-select: auto;">
<strong style="user-select: auto;">updateValue(index,value): </strong>update &nbsp;arr[index] to value.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> 0-based indexing is used.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 6, Q = 3
arr[] = {11,3,7,5,9,1}
Queries = getMinMax(0,2)
&nbsp;         updateValue(3,17)
&nbsp;         getMinMax(0,5)
<strong style="user-select: auto;">Output:
</strong>3 11
1 17<strong style="user-select: auto;">
Explanation: </strong>There are 3 queries:&nbsp;
Query 1 : Min(0, 1, 2) = 3,
&nbsp;         Max(0, 1, 2) = 11
Query 2&nbsp;: 5&nbsp;changes to 17
Query 3&nbsp;: Min(0, 1, 2, 3, 4, 5) = 1,
&nbsp;         Max(0, 1, 2, 3, 4, 5) = 17
</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete <strong style="user-select: auto;">updateValue()&nbsp;</strong>and <strong style="user-select: auto;">getMinMax()&nbsp;</strong>function. The <strong style="user-select: auto;">segment tree has been prebuilt </strong>and provided to you.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Q*Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10</span><sup style="user-select: auto;"><span style="font-size: 15px; user-select: auto;">5</span></sup><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= Q &lt;= 10</span><sup style="user-select: auto;">5</sup><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">0 &lt;= L, R, index &lt;= N-1</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= arr[i], value&nbsp;&lt;= 10</span><sup style="user-select: auto;">5</sup></p>
 <p style="user-select: auto;"></p>
            </div>