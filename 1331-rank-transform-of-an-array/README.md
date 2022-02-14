<h2><a href="https://leetcode.com/problems/rank-transform-of-an-array/">1331. Rank Transform of an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers&nbsp;<code style="user-select: auto;">arr</code>, replace each element with its rank.</p>

<p style="user-select: auto;">The rank represents how large the element is. The rank has the following rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Rank is an integer starting from 1.</li>
	<li style="user-select: auto;">The larger the element, the larger the rank. If two elements are equal, their rank must be the same.</li>
	<li style="user-select: auto;">Rank should be as small as possible.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [40,10,20,30]
<strong style="user-select: auto;">Output:</strong> [4,1,2,3]
<strong style="user-select: auto;">Explanation</strong>: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [100,100,100]
<strong style="user-select: auto;">Output:</strong> [1,1,1]
<strong style="user-select: auto;">Explanation</strong>: Same elements share the same rank.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [37,12,28,9,100,56,80,5,12]
<strong style="user-select: auto;">Output:</strong> [5,3,4,2,8,6,7,1,3]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup>&nbsp;&lt;= arr[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>