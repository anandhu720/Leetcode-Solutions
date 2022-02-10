<h2><a href="https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/">1967. Number of Strings That Appear as Substrings in Word</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of strings <code style="user-select: auto;">patterns</code> and a string <code style="user-select: auto;">word</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">number</strong> of strings in </em><code style="user-select: auto;">patterns</code><em style="user-select: auto;"> that exist as a <strong style="user-select: auto;">substring</strong> in </em><code style="user-select: auto;">word</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> patterns = ["a","abc","bc","d"], word = "abc"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
- "a" appears as a substring in "<u style="user-select: auto;">a</u>bc".
- "abc" appears as a substring in "<u style="user-select: auto;">abc</u>".
- "bc" appears as a substring in "a<u style="user-select: auto;">bc</u>".
- "d" does not appear as a substring in "abc".
3 of the strings in patterns appear as a substring in word.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> patterns = ["a","b","c"], word = "aaaaabbbbb"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
- "a" appears as a substring in "a<u style="user-select: auto;">a</u>aaabbbbb".
- "b" appears as a substring in "aaaaabbbb<u style="user-select: auto;">b</u>".
- "c" does not appear as a substring in "aaaaabbbbb".
2 of the strings in patterns appear as a substring in word.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> patterns = ["a","a","a"], word = "ab"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Each of the patterns appears as a substring in word "<u style="user-select: auto;">a</u>b".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= patterns.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= patterns[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">patterns[i]</code> and <code style="user-select: auto;">word</code> consist of lowercase English letters.</li>
</ul>
</div>