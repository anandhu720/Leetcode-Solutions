<h2><a href="https://leetcode.com/problems/splitting-a-string-into-descending-consecutive-values/">1849. Splitting a String Into Descending Consecutive Values</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> that consists of only digits.</p>

<p style="user-select: auto;">Check if we can split <code style="user-select: auto;">s</code> into <strong style="user-select: auto;">two or more non-empty substrings</strong> such that the <strong style="user-select: auto;">numerical values</strong> of the substrings are in <strong style="user-select: auto;">descending order</strong> and the <strong style="user-select: auto;">difference</strong> between numerical values of every two <strong style="user-select: auto;">adjacent</strong> <strong style="user-select: auto;">substrings</strong> is equal to <code style="user-select: auto;">1</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the string <code style="user-select: auto;">s = "0090089"</code> can be split into <code style="user-select: auto;">["0090", "089"]</code> with numerical values <code style="user-select: auto;">[90,89]</code>. The values are in descending order and adjacent values differ by <code style="user-select: auto;">1</code>, so this way is valid.</li>
	<li style="user-select: auto;">Another example, the string <code style="user-select: auto;">s = "001"</code> can be split into <code style="user-select: auto;">["0", "01"]</code>, <code style="user-select: auto;">["00", "1"]</code>, or <code style="user-select: auto;">["0", "0", "1"]</code>. However all the ways are invalid because they have numerical values <code style="user-select: auto;">[0,1]</code>, <code style="user-select: auto;">[0,1]</code>, and <code style="user-select: auto;">[0,0,1]</code> respectively, all of which are not in descending order.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it is possible to split</em> <code style="user-select: auto;">s</code>​​​​​​ <em style="user-select: auto;">as described above</em><em style="user-select: auto;">, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise.</em></p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters in a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1234"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no valid way to split s.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "050043"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> s can be split into ["05", "004", "3"] with numerical values [5,4,3].
The values are in descending order with adjacent values differing by 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "9080701"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no valid way to split s.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> only consists of digits.</li>
</ul>
</div>