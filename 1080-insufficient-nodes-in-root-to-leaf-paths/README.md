<h2><a href="https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/">1080. Insufficient Nodes in Root to Leaf Paths</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree and an integer <code style="user-select: auto;">limit</code>, delete all <strong style="user-select: auto;">insufficient nodes</strong> in the tree simultaneously, and return <em style="user-select: auto;">the root of the resulting binary tree</em>.</p>

<p style="user-select: auto;">A node is <strong style="user-select: auto;">insufficient</strong> if every root to <strong style="user-select: auto;">leaf</strong> path intersecting this node has a sum strictly less than <code style="user-select: auto;">limit</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">leaf</strong> is a node with no children.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/06/05/insufficient-11.png" style="width: 500px; height: 207px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3,4,-99,-99,7,8,9,-99,-99,12,13,-99,14], limit = 1
<strong style="user-select: auto;">Output:</strong> [1,2,3,4,null,null,7,8,9,null,14]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/06/05/insufficient-3.png" style="width: 400px; height: 274px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [5,4,8,11,null,17,4,7,1,null,null,5,3], limit = 22
<strong style="user-select: auto;">Output:</strong> [5,4,8,11,null,17,4,7,null,null,null,5]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/06/11/screen-shot-2019-06-11-at-83301-pm.png" style="width: 250px; height: 199px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,-3,-5,null,4,null], limit = -1
<strong style="user-select: auto;">Output:</strong> [1,null,-3,4]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 5000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= limit &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>