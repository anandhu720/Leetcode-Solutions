<h2><a href="https://leetcode.com/problems/uncrossed-lines/">1035. Uncrossed Lines</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code>. We write the integers of <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> (in the order they are given) on two separate horizontal lines.</p>

<p style="user-select: auto;">We may draw connecting lines: a straight line connecting two numbers <code style="user-select: auto;">nums1[i]</code> and <code style="user-select: auto;">nums2[j]</code> such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">nums1[i] == nums2[j]</code>, and</li>
	<li style="user-select: auto;">the line we draw does not intersect any other connecting (non-horizontal) line.</li>
</ul>

<p style="user-select: auto;">Note that a connecting line cannot intersect even at the endpoints (i.e., each number can only belong to one connecting line).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum number of connecting lines we can draw in this way</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/04/26/142.png" style="width: 400px; height: 286px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,4,2], nums2 = [1,2,4]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We can draw 2 uncrossed lines as in the diagram.
We cannot draw 3 uncrossed lines, because the line from nums1[1] = 4 to nums2[2] = 4 will intersect the line from nums1[2]=2 to nums2[1]=2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [2,5,1,2,5], nums2 = [10,5,2,1,5,2]
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,3,7,1,7,5], nums2 = [1,9,2,5,1]
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1.length, nums2.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1[i], nums2[j] &lt;= 2000</code></li>
</ul>
</div>