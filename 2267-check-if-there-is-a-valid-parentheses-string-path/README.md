<h2><a href="https://leetcode.com/problems/check-if-there-is-a-valid-parentheses-string-path/">2267.  Check if There Is a Valid Parentheses String Path</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A parentheses string is a <strong style="user-select: auto;">non-empty</strong> string consisting only of <code style="user-select: auto;">'('</code> and <code style="user-select: auto;">')'</code>. It is <strong style="user-select: auto;">valid</strong> if <strong style="user-select: auto;">any</strong> of the following conditions is <strong style="user-select: auto;">true</strong>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">It is <code style="user-select: auto;">()</code>.</li>
	<li style="user-select: auto;">It can be written as <code style="user-select: auto;">AB</code> (<code style="user-select: auto;">A</code> concatenated with <code style="user-select: auto;">B</code>), where <code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> are valid parentheses strings.</li>
	<li style="user-select: auto;">It can be written as <code style="user-select: auto;">(A)</code>, where <code style="user-select: auto;">A</code> is a valid parentheses string.</li>
</ul>

<p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> matrix of parentheses <code style="user-select: auto;">grid</code>. A <strong style="user-select: auto;">valid parentheses string path</strong> in the grid is a path satisfying <strong style="user-select: auto;">all</strong> of the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The path starts from the upper left cell <code style="user-select: auto;">(0, 0)</code>.</li>
	<li style="user-select: auto;">The path ends at the bottom-right cell <code style="user-select: auto;">(m - 1, n - 1)</code>.</li>
	<li style="user-select: auto;">The path only ever moves <strong style="user-select: auto;">down</strong> or <strong style="user-select: auto;">right</strong>.</li>
	<li style="user-select: auto;">The resulting parentheses string formed by the path is <strong style="user-select: auto;">valid</strong>.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if there exists a <strong style="user-select: auto;">valid parentheses string path</strong> in the grid.</em> Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/15/example1drawio.png" style="width: 521px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [["(","(","("],[")","(",")"],["(","(",")"],["(","(",")"]]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The above diagram shows two possible paths that form valid parentheses strings.
The first path shown results in the valid parentheses string "()(())".
The second path shown results in the valid parentheses string "((()))".
Note that there may be other valid parentheses string paths.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/15/example2drawio.png" style="width: 165px; height: 165px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[")",")"],["(","("]]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The two possible paths form the parentheses strings "))(" and ")((". Since neither of them are valid parentheses strings, we return false.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">'('</code> or <code style="user-select: auto;">')'</code>.</li>
</ul>
</div>