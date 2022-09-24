<h2><a href="https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/">1269. Number of Ways to Stay in the Same Place After Some Steps</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a pointer at index <code style="user-select: auto;">0</code> in an array of size <code style="user-select: auto;">arrLen</code>. At each step, you can move 1 position to the left, 1 position to the right in the array, or stay in the same place (The pointer should not be placed outside the array at any time).</p>

<p style="user-select: auto;">Given two integers <code style="user-select: auto;">steps</code> and <code style="user-select: auto;">arrLen</code>, return the number of ways such that your pointer still at index <code style="user-select: auto;">0</code> after <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">steps</code> steps. Since the answer may be too large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> steps = 3, arrLen = 2
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation: </strong>There are 4 differents ways to stay at index 0 after 3 steps.
Right, Left, Stay
Stay, Right, Left
Right, Stay, Left
Stay, Stay, Stay
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> steps = 2, arrLen = 4
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> There are 2 differents ways to stay at index 0 after 2 steps
Right, Left
Stay, Stay
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> steps = 4, arrLen = 2
<strong style="user-select: auto;">Output:</strong> 8
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= steps &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arrLen &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>