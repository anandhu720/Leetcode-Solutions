# 1. Inorder traversal of a BST
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><em style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Inorder traversal means traversing through the tree in a Left, Node, Right manner. We first traverse left, then print the current node, and then traverse right. This is done recursively for each node.</span></em><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Given a BST, find its in-order traversal.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;5
&nbsp; &nbsp; /&nbsp; &nbsp; \
 &nbsp; 2&nbsp; &nbsp; &nbsp;&nbsp;7
 &nbsp; &nbsp;\&nbsp; &nbsp; &nbsp;  \
  &nbsp; 3&nbsp; &nbsp; &nbsp; &nbsp; 8
<strong style="user-select: auto;">Output: </strong>2 3 5 7 8
</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp; &nbsp; &nbsp;30
 &nbsp; &nbsp;&nbsp;/
 &nbsp; 10
 &nbsp; &nbsp; \
 &nbsp;  &nbsp;20
<strong style="user-select: auto;">Output: </strong>10 20 30
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">inOrder()&nbsp;</strong>that takes the root of the BST as input parameter and returns a list of integers containing the in-order traversal of the BST.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N), where N = Number of nodes in BST<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 100<br style="user-select: auto;">
1 &lt;= Value of a node<sub style="user-select: auto;">&nbsp;</sub>&lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>