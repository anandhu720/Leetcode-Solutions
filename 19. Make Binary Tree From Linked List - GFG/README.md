# 19. Make Binary Tree From Linked List
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Linked List Representation of Complete Binary Tree. The task is to construct the Binary tree.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note : </strong>The&nbsp;complete binary tree is represented as a linked list&nbsp;in a way where if root node is stored at position&nbsp;i, its left, and right children are stored at position&nbsp;<strong style="user-select: auto;">2*i+1</strong>, <strong style="user-select: auto;">2*i+2</strong> respectively.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><img alt="" src="http://d1hyf4ir1gqw6c.cloudfront.net/wp-content/uploads/LinkedListToBST.png" style="border-style: solid; border-width: 3px; height: 237px; margin-left: 0px; margin-right: 0px; width: 450px; user-select: auto;" class="img-responsive"><br style="user-select: auto;">
<strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
K = 1-&gt;2-&gt;3-&gt;4-&gt;5
<strong style="user-select: auto;">Output: </strong>1 2 3 4 5<strong style="user-select: auto;">
Explanation: </strong>The tree would look like
&nbsp; &nbsp;   1
  &nbsp; /&nbsp;  \
 &nbsp; 2&nbsp;  &nbsp; 3
 /&nbsp;&nbsp;\
4&nbsp; &nbsp;5
Now, the level order traversal of
the above tree is 1 2 3 4 5.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
K = 5-&gt;4-&gt;3-&gt;2-&gt;1
<strong style="user-select: auto;">Output: </strong>5 4 3 2 1<strong style="user-select: auto;">
Explanation: </strong>The tree would look like</span>
<span style="font-size: 18px; user-select: auto;">&nbsp; &nbsp;  5
&nbsp; &nbsp;/&nbsp; \
 &nbsp;4&nbsp; &nbsp; 3
 /&nbsp;\
2&nbsp; &nbsp; 1
Now, the level order traversal of
the above tree is 5 4 3 2 1.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">convert</strong>() which takes head of linked list and <strong style="user-select: auto;">root </strong>of the tree as the reference. The driver code prints the level order.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: </strong>H is the height of the tree and this space is used implicitly for recursion stack.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= K<sub style="user-select: auto;">i</sub>&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>