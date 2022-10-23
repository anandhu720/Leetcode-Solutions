<h2><a href="https://leetcode.com/problems/minimum-cost-to-make-array-equal/">2448. Minimum Cost to Make Array Equal</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two <strong style="user-select: auto;">0-indexed</strong> arrays <code style="user-select: auto;">nums</code> and <code style="user-select: auto;">cost</code> consisting each of <code style="user-select: auto;">n</code> <strong style="user-select: auto;">positive</strong> integers.</p>

<p style="user-select: auto;">You can do the following operation <strong style="user-select: auto;">any</strong> number of times:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Increase or decrease <strong style="user-select: auto;">any</strong> element of the array <code style="user-select: auto;">nums</code> by <code style="user-select: auto;">1</code>.</li>
</ul>

<p style="user-select: auto;">The cost of doing one operation on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> element is <code style="user-select: auto;">cost[i]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> total cost such that all the elements of the array </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> become <strong style="user-select: auto;">equal</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,5,2], cost = [2,3,1,14]
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> We can make all the elements equal to 2 in the following way:
- Increase the 0<sup style="user-select: auto;">th</sup> element one time. The cost is 2.
- Decrease the 1<sup style="user-select: auto;"><span style="font-size: 10.8333px; user-select: auto;">st</span></sup> element one time. The cost is 3.
- Decrease the 2<sup style="user-select: auto;">nd</sup> element three times. The cost is 1 + 1 + 1 = 3.
The total cost is 2 + 3 + 3 = 8.
It can be shown that we cannot make the array equal with a smaller cost.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,2,2,2,2], cost = [4,2,8,1,3]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> All the elements are already equal, so no operations are needed.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length == cost.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], cost[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>