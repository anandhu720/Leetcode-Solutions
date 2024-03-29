# 22. Merge two BST 's
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two BSTs, return elements of both BSTs in <strong style="user-select: auto;">sorted </strong>form.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
BST1:
       </strong>5
&nbsp;    /   \
&nbsp;   3     6
&nbsp;  / \
&nbsp; 2   4  <strong style="user-select: auto;">
</strong><strong style="user-select: auto;">BST2:
&nbsp;       </strong>2
&nbsp;     /   \
&nbsp;    1     3
&nbsp;           \
&nbsp;            7
&nbsp;           /
&nbsp;          6
<strong style="user-select: auto;">Output: </strong>1 2 2 3 3 4 5 6 6 7<strong style="user-select: auto;">
Explanation: 
</strong>After merging and sorting the
two BST we get 1 2 2 3 3 4 5 6 6 7.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
BST1:
&nbsp;      </strong>12
&nbsp;    /   
&nbsp;   9
&nbsp;  / \ &nbsp;  
&nbsp; 6   11<strong style="user-select: auto;">
</strong><strong style="user-select: auto;">BST2:
&nbsp;     </strong>8
&nbsp;   /  \
&nbsp;  5    10
&nbsp; /
&nbsp;2
<strong style="user-select: auto;">Output: </strong>2 5 6 8 9 10 11 12<strong style="user-select: auto;">
Explanation: 
</strong>After merging and sorting the
two BST we get 2 5 6 8 9 10 11 12.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;"> merge() </strong>which takes roots of both the BSTs as its input and returns an array of integers denoting the node values of both the BSTs in a sorted order.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(M+N) where M and N are the sizes if the two BSTs.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of BST1 + Height of BST2).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ Number of Nodes ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>