<h2><a href="https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/">1282. Group the People Given the Group Size They Belong To</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> people&nbsp;that are split into some unknown number of groups. Each person is labeled with a&nbsp;<strong style="user-select: auto;">unique ID</strong>&nbsp;from&nbsp;<code style="user-select: auto;">0</code>&nbsp;to&nbsp;<code style="user-select: auto;">n - 1</code>.</p>

<p style="user-select: auto;">You are given an integer array&nbsp;<code style="user-select: auto;">groupSizes</code>, where <code style="user-select: auto;">groupSizes[i]</code>&nbsp;is the size of the group that person&nbsp;<code style="user-select: auto;">i</code>&nbsp;is in. For example, if&nbsp;<code style="user-select: auto;">groupSizes[1] = 3</code>, then&nbsp;person&nbsp;<code style="user-select: auto;">1</code>&nbsp;must be in a&nbsp;group of size&nbsp;<code style="user-select: auto;">3</code>.</p>

<p style="user-select: auto;">Return&nbsp;<em style="user-select: auto;">a list of groups&nbsp;such that&nbsp;each person&nbsp;<code style="user-select: auto;">i</code>&nbsp;is in a group of size&nbsp;<code style="user-select: auto;">groupSizes[i]</code></em>.</p>

<p style="user-select: auto;">Each person should&nbsp;appear in&nbsp;<strong style="user-select: auto;">exactly one group</strong>,&nbsp;and every person must be in a group. If there are&nbsp;multiple answers, <strong style="user-select: auto;">return any of them</strong>. It is <strong style="user-select: auto;">guaranteed</strong> that there will be <strong style="user-select: auto;">at least one</strong> valid solution for the given input.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> groupSizes = [3,3,3,3,3,1,3]
<strong style="user-select: auto;">Output:</strong> [[5],[0,1,2],[3,4,6]]
<b style="user-select: auto;">Explanation:</b> 
The first group is [5]. The size is 1, and groupSizes[5] = 1.
The second group is [0,1,2]. The size is 3, and groupSizes[0] = groupSizes[1] = groupSizes[2] = 3.
The third group is [3,4,6]. The size is 3, and groupSizes[3] = groupSizes[4] = groupSizes[6] = 3.
Other possible solutions are [[2,1,6],[5],[0,4,3]] and [[5],[0,6,2],[4,3,1]].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> groupSizes = [2,1,3,3,3,2]
<strong style="user-select: auto;">Output:</strong> [[1],[0,5],[2,3,4]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">groupSizes.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n&nbsp;&lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;=&nbsp;groupSizes[i] &lt;= n</code></li>
</ul>
</div>