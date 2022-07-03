# 9. Print BST elements in given range
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Search Tree<strong style="user-select: auto;">&nbsp;</strong>and a range <strong style="user-select: auto;">[low, high]</strong>. Find all&nbsp;the numbers&nbsp;in the BST that lie in the given range.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> Element greater than or equal to root go to the right side.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;17
 &nbsp; &nbsp; /&nbsp; &nbsp; \
 &nbsp; &nbsp;4&nbsp; &nbsp; &nbsp;18
 &nbsp;/&nbsp; &nbsp;\
 2&nbsp; &nbsp; &nbsp;9&nbsp;
l = 4, h = 24
<strong style="user-select: auto;">Output: </strong>4 9 17 18&nbsp;</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;16
 &nbsp; &nbsp; /&nbsp; &nbsp; \
 &nbsp; &nbsp;7&nbsp; &nbsp; &nbsp;20
 &nbsp;/&nbsp; &nbsp;\
 1&nbsp; &nbsp;&nbsp;10
l = 13, h = 23
<strong style="user-select: auto;">Output: </strong>16 20<strong style="user-select: auto;">&nbsp;
</strong></span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">printNearNodes()</strong>&nbsp;which takes the root Node of the BST and the range elements low and high as inputs and returns an array that contains the BST elements in the given range low to high (inclusive) in <strong style="user-select: auto;">non-decreasing&nbsp;</strong>order.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(Height of the BST).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ Number of nodes ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ l ≤ h ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>