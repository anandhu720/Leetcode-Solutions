<h2><a href="https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/">1685. Sum of Absolute Differences in a Sorted Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> sorted in <strong style="user-select: auto;">non-decreasing</strong> order.</p>

<p style="user-select: auto;">Build and return <em style="user-select: auto;">an integer array </em><code style="user-select: auto;">result</code><em style="user-select: auto;"> with the same length as </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> such that </em><code style="user-select: auto;">result[i]</code><em style="user-select: auto;"> is equal to the <strong style="user-select: auto;">summation of absolute differences</strong> between </em><code style="user-select: auto;">nums[i]</code><em style="user-select: auto;"> and all the other elements in the array.</em></p>

<p style="user-select: auto;">In other words, <code style="user-select: auto;">result[i]</code> is equal to <code style="user-select: auto;">sum(|nums[i]-nums[j]|)</code> where <code style="user-select: auto;">0 &lt;= j &lt; nums.length</code> and <code style="user-select: auto;">j != i</code> (<strong style="user-select: auto;">0-indexed</strong>).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,3,5]
<strong style="user-select: auto;">Output:</strong> [4,3,5]
<strong style="user-select: auto;">Explanation:</strong> Assuming the arrays are 0-indexed, then
result[0] = |2-2| + |2-3| + |2-5| = 0 + 1 + 3 = 4,
result[1] = |3-2| + |3-3| + |3-5| = 1 + 0 + 2 = 3,
result[2] = |5-2| + |5-3| + |5-5| = 3 + 2 + 0 = 5.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,4,6,8,10]
<strong style="user-select: auto;">Output:</strong> [24,15,13,15,21]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= nums[i + 1] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>