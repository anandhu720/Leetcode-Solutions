# 10. Pair Sum in BST
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a&nbsp;BST and a number<strong style="user-select: auto;"> X</strong>. The task is to check if any pair exists in BST or not&nbsp;whose sum is equal to X.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>      8
&nbsp;   /   \
&nbsp;  3     9
&nbsp; / \
&nbsp;1   5
X = 4
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>For the given input, there
exist a pair whose sum is, i.e, (3,1).</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>      0
&nbsp;      \
&nbsp;       1
&nbsp;        \ 
&nbsp;         3
&nbsp;       /  \
&nbsp;      2    7
&nbsp;            \
&nbsp;             8
X = 6
<strong style="user-select: auto;">Output: </strong>0<strong style="user-select: auto;">
Explanation: </strong>For the given input , there
exists no such pair whose sum is 6.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
&nbsp;Just write your code for the boolean function <strong style="user-select: auto;">findPair</strong>() to check if a pair with given sum X exists in BST or not. The function returns <strong style="user-select: auto;">true </strong>or <strong style="user-select: auto;">false</strong>.&nbsp;The printing is done by the driver's code.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Height of the BST)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Value of the nodes&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>