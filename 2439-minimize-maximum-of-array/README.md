<h2><a href="https://leetcode.com/problems/minimize-maximum-of-array/">2439. Minimize Maximum of Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">nums</code> comprising of <code style="user-select: auto;">n</code> non-negative integers.</p>

<p style="user-select: auto;">In one operation, you must:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose an integer <code style="user-select: auto;">i</code> such that <code style="user-select: auto;">1 &lt;= i &lt; n</code> and <code style="user-select: auto;">nums[i] &gt; 0</code>.</li>
	<li style="user-select: auto;">Decrease <code style="user-select: auto;">nums[i]</code> by 1.</li>
	<li style="user-select: auto;">Increase <code style="user-select: auto;">nums[i - 1]</code> by 1.</li>
</ul>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">minimum</strong> possible value of the <strong style="user-select: auto;">maximum</strong> integer of </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> after performing <strong style="user-select: auto;">any</strong> number of operations</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,7,1,6]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong>
One set of optimal operations is as follows:
1. Choose i = 1, and nums becomes [4,6,1,6].
2. Choose i = 3, and nums becomes [4,6,2,5].
3. Choose i = 1, and nums becomes [5,5,2,5].
The maximum integer of nums is 5. It can be shown that the maximum number cannot be less than 5.
Therefore, we return 5.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [10,1]
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong>
It is optimal to leave nums as is, and since 10 is the maximum value, we return 10.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>