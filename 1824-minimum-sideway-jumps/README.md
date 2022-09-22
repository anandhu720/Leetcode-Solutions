<h2><a href="https://leetcode.com/problems/minimum-sideway-jumps/">1824. Minimum Sideway Jumps</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a <strong style="user-select: auto;">3 lane road</strong> of length <code style="user-select: auto;">n</code> that consists of <code style="user-select: auto;">n + 1</code> <strong style="user-select: auto;">points</strong> labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n</code>. A frog <strong style="user-select: auto;">starts</strong> at point <code style="user-select: auto;">0</code> in the <strong style="user-select: auto;">second </strong>lane<strong style="user-select: auto;"> </strong>and wants to jump to point <code style="user-select: auto;">n</code>. However, there could be obstacles along the way.</p>

<p style="user-select: auto;">You are given an array <code style="user-select: auto;">obstacles</code> of length <code style="user-select: auto;">n + 1</code> where each <code style="user-select: auto;">obstacles[i]</code> (<strong style="user-select: auto;">ranging from 0 to 3</strong>) describes an obstacle on the lane <code style="user-select: auto;">obstacles[i]</code> at point <code style="user-select: auto;">i</code>. If <code style="user-select: auto;">obstacles[i] == 0</code>, there are no obstacles at point <code style="user-select: auto;">i</code>. There will be <strong style="user-select: auto;">at most one</strong> obstacle in the 3 lanes at each point.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">obstacles[2] == 1</code>, then there is an obstacle on lane 1 at point 2.</li>
</ul>

<p style="user-select: auto;">The frog can only travel from point <code style="user-select: auto;">i</code> to point <code style="user-select: auto;">i + 1</code> on the same lane if there is not an obstacle on the lane at point <code style="user-select: auto;">i + 1</code>. To avoid obstacles, the frog can also perform a <strong style="user-select: auto;">side jump</strong> to jump to <strong style="user-select: auto;">another</strong> lane (even if they are not adjacent) at the <strong style="user-select: auto;">same</strong> point if there is no obstacle on the new lane.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the frog can jump from lane 3 at point 3 to lane 1 at point 3.</li>
</ul>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">minimum number of side jumps</strong> the frog needs to reach <strong style="user-select: auto;">any lane</strong> at point n starting from lane <code style="user-select: auto;">2</code> at point 0.</em></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> There will be no obstacles on points <code style="user-select: auto;">0</code> and <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/25/ic234-q3-ex1.png" style="width: 500px; height: 244px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> obstacles = [0,1,2,3,0]
<strong style="user-select: auto;">Output:</strong> 2 
<strong style="user-select: auto;">Explanation:</strong> The optimal solution is shown by the arrows above. There are 2 side jumps (red arrows).
Note that the frog can jump over obstacles only when making side jumps (as shown at point 2).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/25/ic234-q3-ex2.png" style="width: 500px; height: 196px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> obstacles = [0,1,1,3,3,0]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are no obstacles on lane 2. No side jumps are required.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/25/ic234-q3-ex3.png" style="width: 500px; height: 196px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> obstacles = [0,2,1,0,3,0]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The optimal solution is shown by the arrows above. There are 2 side jumps.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">obstacles.length == n + 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= obstacles[i] &lt;= 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">obstacles[0] == obstacles[n] == 0</code></li>
</ul>
</div>