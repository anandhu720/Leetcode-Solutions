<h2><a href="https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/">2342. Max Sum of a Pair With Equal Sum of Digits</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">nums</code> consisting of <strong style="user-select: auto;">positive</strong> integers. You can choose two indices <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code>, such that <code style="user-select: auto;">i != j</code>, and the sum of digits of the number <code style="user-select: auto;">nums[i]</code> is equal to that of <code style="user-select: auto;">nums[j]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> value of </em><code style="user-select: auto;">nums[i] + nums[j]</code><em style="user-select: auto;"> that you can obtain over all possible indices </em><code style="user-select: auto;">i</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">j</code><em style="user-select: auto;"> that satisfy the conditions.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [18,43,36,13,7]
<strong style="user-select: auto;">Output:</strong> 54
<strong style="user-select: auto;">Explanation:</strong> The pairs (i, j) that satisfy the conditions are:
- (0, 2), both numbers have a sum of digits equal to 9, and their sum is 18 + 36 = 54.
- (1, 4), both numbers have a sum of digits equal to 7, and their sum is 43 + 7 = 50.
So the maximum sum that we can obtain is 54.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [10,12,19,14]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There are no two numbers that satisfy the conditions, so we return -1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>