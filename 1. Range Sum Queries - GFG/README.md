# 1. Range Sum Queries
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array <strong style="user-select: auto;">arr</strong>[] of size <strong style="user-select: auto;">N&nbsp;</strong>and<strong style="user-select: auto;">&nbsp;Q</strong>&nbsp;queries.&nbsp;</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">getSum(L,R):&nbsp;</strong>&nbsp;return the sum of range [L,R]<br style="user-select: auto;">
<strong style="user-select: auto;">updateValue(index,value):</strong>&nbsp;update arr[index] to value.<br style="user-select: auto;">
<br style="user-select: auto;">
You need to calculate the answer for Type-1 queries and do the update in the segment tree for Type-2 queries.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> 0-based indexing is used.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6, Q = 3
arr[] = {1,3,5,7,9,11}
Queries = getSum(0,2)
          updateValue(3,17)
          getSum(0,5)
<strong style="user-select: auto;">Output:
</strong>9
46</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
Explanation: </strong>There are 3 queries:&nbsp;
Query 1:&nbsp;1 + 3 + 5 = 9
Query 2:&nbsp;7 changes to 17
Query 3:&nbsp;1 + 3 + 5 + 17 + 9 + 11= 46</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the <strong style="user-select: auto;">updateValue()</strong> and <strong style="user-select: auto;">getSum()</strong> function. The formed segment tree is already provided&nbsp;in both the function as a function argument.<br style="user-select: auto;">
<strong style="user-select: auto;">updateValue()&nbsp;</strong>processes Type-2 query and does the required update in the segment tree.<br style="user-select: auto;">
<strong style="user-select: auto;">getSum()&nbsp;</strong>returns the answer for Type-1 query.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Q*Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">N</strong> &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">Q</strong> &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= <strong style="user-select: auto;">L, R, index</strong> &lt;= N-1<br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">arr[i], value&nbsp;</strong>&lt;= 10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:<br style="user-select: auto;">
Input:</strong><br style="user-select: auto;">
1<br style="user-select: auto;">
6 3<br style="user-select: auto;">
1 3 5 7 9 11<br style="user-select: auto;">
G 0 2<br style="user-select: auto;">
U 3 17<br style="user-select: auto;">
G 0 5</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
9<br style="user-select: auto;">
46</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:<br style="user-select: auto;">
Testcase 1:</strong> There are 3 queries:&nbsp;<br style="user-select: auto;">
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Query 1 :&nbsp; 1 + 3 + 5 = 9<br style="user-select: auto;">
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Query 2&nbsp;:&nbsp; 7 changes to 17<br style="user-select: auto;">
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Query 3&nbsp;:&nbsp; 1 + 3 + 5 + 17 + 9 + 11= 46</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>