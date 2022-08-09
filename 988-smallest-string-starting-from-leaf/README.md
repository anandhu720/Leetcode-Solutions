<h2><a href="https://leetcode.com/problems/smallest-string-starting-from-leaf/">988. Smallest String Starting From Leaf</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the <code style="user-select: auto;">root</code> of a binary tree where each node has a value in the range <code style="user-select: auto;">[0, 25]</code> representing the letters <code style="user-select: auto;">'a'</code> to <code style="user-select: auto;">'z'</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">lexicographically smallest</strong> string that starts at a leaf of this tree and ends at the root</em>.</p>

<p style="user-select: auto;">As a reminder, any shorter prefix of a string is <strong style="user-select: auto;">lexicographically smaller</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"ab"</code> is lexicographically smaller than <code style="user-select: auto;">"aba"</code>.</li>
</ul>

<p style="user-select: auto;">A leaf of a node is a node that has no children.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/30/tree1.png" style="width: 534px; height: 358px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [0,1,2,3,4,3,4]
<strong style="user-select: auto;">Output:</strong> "dba"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/30/tree2.png" style="width: 534px; height: 358px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [25,1,3,1,3,0,2]
<strong style="user-select: auto;">Output:</strong> "adz"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/02/01/tree3.png" style="height: 490px; width: 468px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [2,2,1,null,1,0,null,0]
<strong style="user-select: auto;">Output:</strong> "abc"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 8500]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 25</code></li>
</ul>
</div>