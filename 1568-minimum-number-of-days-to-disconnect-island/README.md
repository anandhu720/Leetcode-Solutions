<h2><a href="https://leetcode.com/problems/minimum-number-of-days-to-disconnect-island/">1568. Minimum Number of Days to Disconnect Island</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> binary grid <code style="user-select: auto;">grid</code> where <code style="user-select: auto;">1</code> represents land and <code style="user-select: auto;">0</code> represents water. An <strong style="user-select: auto;">island</strong> is a maximal <strong style="user-select: auto;">4-directionally</strong> (horizontal or vertical) connected group of <code style="user-select: auto;">1</code>'s.</p>

<p style="user-select: auto;">The grid is said to be <strong style="user-select: auto;">connected</strong> if we have <strong style="user-select: auto;">exactly one island</strong>, otherwise is said <strong style="user-select: auto;">disconnected</strong>.</p>

<p style="user-select: auto;">In one day, we are allowed to change <strong style="user-select: auto;">any </strong>single land cell <code style="user-select: auto;">(1)</code> into a water cell <code style="user-select: auto;">(0)</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of days to disconnect the grid</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/24/land1.jpg" style="width: 500px; height: 169px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,1,1,0],[0,1,1,0],[0,0,0,0]]

<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We need at least 2 days to get a disconnected grid.
Change land grid[1][1] and grid[0][2] to water and get 2 disconnected island.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/24/land2.jpg" style="width: 404px; height: 85px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,1]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Grid of full water is also disconnected ([[1,1]] -&gt; [[0,0]]), 0 islands.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>