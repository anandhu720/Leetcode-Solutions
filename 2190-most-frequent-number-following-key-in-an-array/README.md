<h2><a href="https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/">2190. Most Frequent Number Following Key In an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>.<strong style="user-select: auto;"> </strong>You are also given an integer <code style="user-select: auto;">key</code>, which is present in <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">For every unique integer <code style="user-select: auto;">target</code> in <code style="user-select: auto;">nums</code>, <strong style="user-select: auto;">count</strong> the number of times <code style="user-select: auto;">target</code> immediately follows an occurrence of <code style="user-select: auto;">key</code> in <code style="user-select: auto;">nums</code>. In other words, count the number of indices <code style="user-select: auto;">i</code> such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i &lt;= nums.length - 2</code>,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i] == key</code> and,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i + 1] == target</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the </em><code style="user-select: auto;">target</code><em style="user-select: auto;"> with the <strong style="user-select: auto;">maximum</strong> count</em>. The test cases will be generated such that the <code style="user-select: auto;">target</code> with maximum count is unique.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,100,200,1,100], key = 1
<strong style="user-select: auto;">Output:</strong> 100
<strong style="user-select: auto;">Explanation:</strong> For target = 100, there are 2 occurrences at indices 1 and 4 which follow an occurrence of key.
No other integers follow an occurrence of key, so we return 100.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,2,2,2,3], key = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> For target = 2, there are 3 occurrences at indices 1, 2, and 3 which follow an occurrence of key.
For target = 3, there is only one occurrence at index 4 which follows an occurrence of key.
target = 2 has the maximum number of occurrences following an occurrence of key, so we return 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 1000</code></li>
	<li style="user-select: auto;">The test cases will be generated such that the answer is unique.</li>
</ul>
</div>