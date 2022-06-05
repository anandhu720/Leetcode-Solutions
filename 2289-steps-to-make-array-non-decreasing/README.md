<h2><a href="https://leetcode.com/problems/steps-to-make-array-non-decreasing/">2289. Steps to Make Array Non-decreasing</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>. In one step, <strong style="user-select: auto;">remove</strong> all elements <code style="user-select: auto;">nums[i]</code> where <code style="user-select: auto;">nums[i - 1] &gt; nums[i]</code> for all <code style="user-select: auto;">0 &lt; i &lt; nums.length</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of steps performed until </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> becomes a <strong style="user-select: auto;">non-decreasing</strong> array</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,3,4,4,7,3,6,11,8,5,11]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The following are the steps performed:
- Step 1: [5,<strong style="user-select: auto;"><u style="user-select: auto;">3</u></strong>,4,4,7,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,6,11,<u style="user-select: auto;"><strong style="user-select: auto;">8</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">5</strong></u>,11] becomes [5,4,4,7,6,11,11]
- Step 2: [5,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,4,7,<u style="user-select: auto;"><strong style="user-select: auto;">6</strong></u>,11,11] becomes [5,4,7,11,11]
- Step 3: [5,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,7,11,11] becomes [5,7,11,11]
[5,7,11,11] is a non-decreasing array. Therefore, we return 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,5,7,7,13]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> nums is already a non-decreasing array. Therefore, we return 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>