<h2><a href="https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/">2147. Number of Ways to Divide a Long Corridor</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Along a long library corridor, there is a line of seats and decorative plants. You are given a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">corridor</code> of length <code style="user-select: auto;">n</code> consisting of letters <code style="user-select: auto;">'S'</code> and <code style="user-select: auto;">'P'</code> where each <code style="user-select: auto;">'S'</code> represents a seat and each <code style="user-select: auto;">'P'</code> represents a plant.</p>

<p style="user-select: auto;">One room divider has <strong style="user-select: auto;">already</strong> been installed to the left of index <code style="user-select: auto;">0</code>, and <strong style="user-select: auto;">another</strong> to the right of index <code style="user-select: auto;">n - 1</code>. Additional room dividers can be installed. For each position between indices <code style="user-select: auto;">i - 1</code> and <code style="user-select: auto;">i</code> (<code style="user-select: auto;">1 &lt;= i &lt;= n - 1</code>), at most one divider can be installed.</p>

<p style="user-select: auto;">Divide the corridor into non-overlapping sections, where each section has <strong style="user-select: auto;">exactly two seats</strong> with any number of plants. There may be multiple ways to perform the division. Two ways are <strong style="user-select: auto;">different</strong> if there is a position with a room divider installed in the first way but not in the second way.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of ways to divide the corridor</em>. Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>. If there is no way, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/04/1.png" style="width: 410px; height: 199px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> corridor = "SSPPSPS"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> There are 3 different ways to divide the corridor.
The black bars in the above image indicate the two room dividers already installed.
Note that in each of the ways, <strong style="user-select: auto;">each</strong> section has exactly <strong style="user-select: auto;">two</strong> seats.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/04/2.png" style="width: 357px; height: 68px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> corridor = "PPSPSP"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> There is only 1 way to divide the corridor, by not installing any additional dividers.
Installing any would create some section that does not have exactly two seats.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/12/3.png" style="width: 115px; height: 68px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> corridor = "S"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There is no way to divide the corridor because there will always be a section that does not have exactly two seats.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == corridor.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">corridor[i]</code> is either <code style="user-select: auto;">'S'</code> or <code style="user-select: auto;">'P'</code>.</li>
</ul>
</div>