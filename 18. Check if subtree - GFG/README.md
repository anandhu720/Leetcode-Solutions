# 18. Check if subtree
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two binary trees with head reference as <strong style="user-select: auto;">T</strong><strong style="user-select: auto;"> </strong>and <strong style="user-select: auto;">S</strong> having at most <strong style="user-select: auto;">N</strong> nodes. The&nbsp;task is to check if S is present as subtree in T.<br style="user-select: auto;">
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>T:&nbsp; &nbsp; &nbsp;&nbsp;1&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; S:&nbsp; &nbsp;3
 &nbsp; &nbsp; &nbsp;/&nbsp; &nbsp;\&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   /
 &nbsp; &nbsp; 2&nbsp; &nbsp; &nbsp;3&nbsp; &nbsp; &nbsp; &nbsp;  &nbsp;4
 &nbsp; /&nbsp; \&nbsp; &nbsp; /
&nbsp; N&nbsp; &nbsp; N&nbsp; 4
<strong style="user-select: auto;">Output: </strong>1 
<strong style="user-select: auto;">Explanation:</strong> S is present in T<strong style="user-select: auto;">
</strong>
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>T:&nbsp; &nbsp; &nbsp; 26&nbsp; &nbsp; &nbsp;   &nbsp;S: &nbsp; 26
 &nbsp; &nbsp; &nbsp;&nbsp;/&nbsp; &nbsp;\&nbsp; &nbsp;      &nbsp; /&nbsp; \
 &nbsp; &nbsp; 10&nbsp; &nbsp; &nbsp;N&nbsp; &nbsp;     10&nbsp; &nbsp;&nbsp;N
 &nbsp; /&nbsp; &nbsp; \&nbsp; &nbsp; &nbsp; &nbsp;    /&nbsp;&nbsp;\
 &nbsp;&nbsp;20&nbsp; &nbsp; 30&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;20&nbsp; 30
 &nbsp;/&nbsp; \&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   /&nbsp; \
 40&nbsp; &nbsp;60&nbsp; &nbsp; &nbsp; &nbsp;  40&nbsp;&nbsp;60
<strong style="user-select: auto;">Output: </strong>1 
<strong style="user-select: auto;">Explanation: </strong>
S and T are both same. Hence, 
it can be said that S is a subtree 
of T.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the <strong style="user-select: auto;">function isSubtree()&nbsp;</strong>that takes root&nbsp;node of S and T as parameters<strong style="user-select: auto;"> </strong>and <strong style="user-select: auto;">returns 1</strong> if&nbsp;S is a subtree of T else <strong style="user-select: auto;">0</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>The nodes can&nbsp;have the duplicate values.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Value of nodes &lt;= 10<sup style="user-select: auto;">4</sup></span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>