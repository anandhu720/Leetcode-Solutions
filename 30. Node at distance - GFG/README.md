# 30. Node at distance
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree and a positive integer <strong style="user-select: auto;">k</strong>. The task is to count&nbsp;all distinct nodes that are distance k from a leaf node.&nbsp;A node is at k distance from a leaf if it is present k levels above the leaf and also, is a direct ancestor of this leaf node. If k is more than the height of Binary Tree, then nothing should be counted.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>        1
&nbsp;     /   \
&nbsp;    2     3
&nbsp;  /  \   /  \
&nbsp; 4   5  6    7
&nbsp;         \ 
&nbsp;         8
K = 2
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation: </strong>There are only two unique
nodes that are at a distance of 2 units
from the leaf node.&nbsp;(node 3 for leaf
with value 8 and node 1 for leaves with
values 4, 5 and 7)
Note that node 2
isn't considered for leaf with value
8 because it isn't a direct ancestor
of node 8.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>          1
&nbsp;        /
&nbsp;       3
&nbsp;      /
&nbsp;     5
&nbsp;   /  \
&nbsp;  7    8
         \
&nbsp;         9
K = 4
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>Only one node is there
which is at a distance of 4 units
from the leaf node.(node 1 for leaf
with value 9)&nbsp;</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't have to read&nbsp;input or print anything. Complete the function <strong style="user-select: auto;">printKDistantfromLeaf()&nbsp;</strong>that takes <strong style="user-select: auto;">root node </strong>and<strong style="user-select: auto;"> k </strong>as inputs and <strong style="user-select: auto;">returns </strong>the number of nodes that are at distance k from a leaf node. Any such node should be counted only once. For example, if a node is at a distance k from 2 or more leaf nodes, then it would add only 1 to our count.</span></p>

<p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(Height of the Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>The <strong style="user-select: auto;">Input/Output </strong>format and <strong style="user-select: auto;">Example </strong>are given are used for the system's internal purpose, and should be used by a user for <strong style="user-select: auto;">Expected Output </strong>only. As it is a function problem, hence a user should not read any input from the stdin/console. The task is to complete the function specified, and not to write the full code.</p>
 <p style="user-select: auto;"></p>
            </div>