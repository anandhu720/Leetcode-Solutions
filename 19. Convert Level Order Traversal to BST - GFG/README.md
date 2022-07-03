# 19. Convert Level Order Traversal to BST
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of size <strong style="user-select: auto;">N</strong> containing level order traversal of a <strong style="user-select: auto;">BST</strong>. The task is to complete the function <strong style="user-select: auto;">constructBst()</strong>, that construct the BST (Binary Search Tree) from its given level order traversal.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 9
BST[] = {7,4,12,3,6,8,1,5,10}
<strong style="user-select: auto;">Output: </strong>7 4 3 1 6 5 12 8 10<strong style="user-select: auto;">
Explanation: </strong>After constructing BST, the
preorder traversal of BST is
7 4 3 1 6 5 12 8 10.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
BST[] = {1,3,4,6,7,8}
<strong style="user-select: auto;">Output: </strong>1 3 4 6 7 8<strong style="user-select: auto;">
Explanation: </strong>After constructing BST, the
preorder traversal of BST is 1 3 4 6 7 8.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Your task is to complete the function <strong style="user-select: auto;">constructBst</strong>() which has two arguments, first as the array containing level order traversal of BST and next argument as the length of array which return the root of the newly constructed BST. The preorder traversal of the tree is printed by the driver's code.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>