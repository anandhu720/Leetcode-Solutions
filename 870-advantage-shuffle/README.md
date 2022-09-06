<h2><a href="https://leetcode.com/problems/advantage-shuffle/">870. Advantage Shuffle</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> both of the same length. The <strong style="user-select: auto;">advantage</strong> of <code style="user-select: auto;">nums1</code> with respect to <code style="user-select: auto;">nums2</code> is the number of indices <code style="user-select: auto;">i</code> for which <code style="user-select: auto;">nums1[i] &gt; nums2[i]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">any permutation of </em><code style="user-select: auto;">nums1</code><em style="user-select: auto;"> that maximizes its <strong style="user-select: auto;">advantage</strong> with respect to </em><code style="user-select: auto;">nums2</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [2,7,11,15], nums2 = [1,10,4,11]
<strong style="user-select: auto;">Output:</strong> [2,11,7,15]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [12,24,8,32], nums2 = [13,25,32,11]
<strong style="user-select: auto;">Output:</strong> [24,32,8,12]
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums2.length == nums1.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums1[i], nums2[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>