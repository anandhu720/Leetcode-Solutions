# 12. Floor in BST
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary search tree and a value X,&nbsp; the task is to complete the function which will return the floor of x.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: </strong>Floor(X) is an element that is either equal to X or immediately smaller to X. If no such element exits return -1. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>       8
&nbsp;    /  \
&nbsp;   5    9
&nbsp;  / \    \
&nbsp; 2   6   10
X = 3
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation: </strong>Floor of 3 in the given BST
is 2</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>       3
&nbsp;    /   \
&nbsp;   2     5
&nbsp;       /  \
&nbsp;      4    7
&nbsp;     /
&nbsp;    3
X = 1
<strong style="user-select: auto;">Output: </strong>-1<strong style="user-select: auto;">
Explanation: </strong>No smaller element exits</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong><br style="user-select: auto;">
You don't need to worry about the insert function, just complete the function <strong style="user-select: auto;">floor</strong>() which should return the floor of X.&nbsp;If no such element exits return -1.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Height of the BST)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= X, Value of Node &lt;= 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>