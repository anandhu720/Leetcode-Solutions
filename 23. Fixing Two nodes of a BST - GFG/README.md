# 23. Fixing Two nodes of a BST
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given the <strong style="user-select: auto;">root</strong> of a binary search tree(BST), where exactly t</span><span style="font-size: 18px; user-select: auto;">wo nodes were&nbsp;swapped by mistake. Fix (or correct) the BST by swapping them back. Do not change the structure of the tree.</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> It is guaranteed that&nbsp;the given input will form BST, except for 2 nodes that will be wrong. All changes must be reflected in the original linked list.</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>       10
&nbsp;    /    \
&nbsp;   5      8
&nbsp;  / \
&nbsp; 2   20
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation:
 </strong><img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20190528095934/FixNodes.jpg" style="height: 252px; width: 374px; user-select: auto;" class="img-responsive"></span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
&nbsp;        </strong>11
&nbsp;      /    \
&nbsp;     3      17
&nbsp;      \    /
&nbsp;       4  10
<strong style="user-select: auto;">Output: </strong>1 
<strong style="user-select: auto;">Explanation:</strong> 
By swapping nodes 11 and 10, the BST 
can be fixed.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to take any input. Just complete the function <strong style="user-select: auto;">correctBst()&nbsp;</strong>that takes root node as <strong style="user-select: auto;">parameter</strong>. The function should not return anything,&nbsp;all the changes must be done in the existing tree only.&nbsp;BST will then be checked by driver code and 0 or 1 will be printed.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(n)</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ Number of nodes ≤ 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>