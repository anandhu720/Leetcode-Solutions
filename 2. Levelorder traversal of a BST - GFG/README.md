# 2. Levelorder traversal of a BST
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><em style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Levelorder traversal means traversing through the tree level by level, from left to right.</span></em><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Given a BST, find its level-order traversal.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>      5
&nbsp;   /   \
&nbsp;  2     7
&nbsp;  \      \
&nbsp;   3      8
<strong style="user-select: auto;">Output: </strong>5 2 7 3 8</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;  &nbsp;30
 &nbsp; /
&nbsp;10
 &nbsp; \ 
&nbsp;  20
<strong style="user-select: auto;">Output: </strong>30 10 20
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Complete the function&nbsp;</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">levelOrder()</strong></span><span style="font-size: 18px; user-select: auto;">&nbsp;that takes the root of the BST as input parameter and returns a list of integers containing the level-order traversal of the BST.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N), where N = number of nodes in BST.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Value of a node<sub style="user-select: auto;">&nbsp;</sub>&lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>