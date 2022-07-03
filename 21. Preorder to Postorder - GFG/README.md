# 21. Preorder to Postorder
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array arr[] of N nodes representing preorder traversal of BST. The task is to print its postorder traversal.<br style="user-select: auto;">
In Pre-Order traversal,&nbsp;<strong style="user-select: auto;">the root node is visited before the left child and right child nodes</strong>.<br style="user-select: auto;">
Post-order traversal is&nbsp;<strong style="user-select: auto;">one of the multiple methods to traverse a tree</strong>.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 5
arr[]  = {40,30,35,80,100}
<strong style="user-select: auto;">Output: </strong>35 30 100 80 40<strong style="user-select: auto;">
Explanation:</strong>&nbsp;PreOrder: 40 30 35 80 100
InOrder: 30 35 40 80 100
Therefore, the BST will be:
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 40
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; &nbsp;&nbsp; &nbsp;\
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;30&nbsp; &nbsp; &nbsp; &nbsp;80
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;\&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;\&nbsp; &nbsp;
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;35&nbsp; &nbsp; &nbsp; 100
Hence, the postOrder traversal will
be: 35 30 100 80 40</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 8
arr[]  = {40,30,32,35,80,90,100,120}
<strong style="user-select: auto;">Output: </strong>35 32 30 120 100 90 80 40</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You need to complete the given function and<strong style="user-select: auto;"> return the root </strong>of the tree. The driver code will then use this root to print the post order traversal.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>