<h2><a href="https://leetcode.com/problems/palindrome-partitioning-iii/">1278. Palindrome Partitioning III</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> containing lowercase letters and an integer <code style="user-select: auto;">k</code>. You need to :</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">First, change some characters of <code style="user-select: auto;">s</code> to other lowercase English letters.</li>
	<li style="user-select: auto;">Then divide <code style="user-select: auto;">s</code> into <code style="user-select: auto;">k</code> non-empty disjoint substrings such that each substring is a palindrome.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimal number of characters that you need to change to divide the string</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abc", k = 2
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>&nbsp;You can split the string into "ab" and "c", and change 1 character in "ab" to make it palindrome.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aabbc", k = 3
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>&nbsp;You can split the string into "aa", "bb" and "c", all of them are palindrome.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "leetcode", k = 8
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= s.length &lt;= 100</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> only contains lowercase English letters.</li>
</ul>
</div>