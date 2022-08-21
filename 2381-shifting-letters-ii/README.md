<h2><a href="https://leetcode.com/problems/shifting-letters-ii/">2381. Shifting Letters II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> of lowercase English letters and a 2D integer array <code style="user-select: auto;">shifts</code> where <code style="user-select: auto;">shifts[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>, direction<sub style="user-select: auto;">i</sub>]</code>. For every <code style="user-select: auto;">i</code>, <strong style="user-select: auto;">shift</strong> the characters in <code style="user-select: auto;">s</code> from the index <code style="user-select: auto;">start<sub style="user-select: auto;">i</sub></code> to the index <code style="user-select: auto;">end<sub style="user-select: auto;">i</sub></code> (<strong style="user-select: auto;">inclusive</strong>) forward if <code style="user-select: auto;">direction<sub style="user-select: auto;">i</sub> = 1</code>, or shift the characters backward if <code style="user-select: auto;">direction<sub style="user-select: auto;">i</sub> = 0</code>.</p>

<p style="user-select: auto;">Shifting a character <strong style="user-select: auto;">forward</strong> means replacing it with the <strong style="user-select: auto;">next</strong> letter in the alphabet (wrapping around so that <code style="user-select: auto;">'z'</code> becomes <code style="user-select: auto;">'a'</code>). Similarly, shifting a character <strong style="user-select: auto;">backward</strong> means replacing it with the <strong style="user-select: auto;">previous</strong> letter in the alphabet (wrapping around so that <code style="user-select: auto;">'a'</code> becomes <code style="user-select: auto;">'z'</code>).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the final string after all such shifts to </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> are applied</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abc", shifts = [[0,1,0],[1,2,1],[0,2,1]]
<strong style="user-select: auto;">Output:</strong> "ace"
<strong style="user-select: auto;">Explanation:</strong> Firstly, shift the characters from index 0 to index 1 backward. Now s = "zac".
Secondly, shift the characters from index 1 to index 2 forward. Now s = "zbd".
Finally, shift the characters from index 0 to index 2 forward. Now s = "ace".</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "dztz", shifts = [[0,0,0],[1,1,1]]
<strong style="user-select: auto;">Output:</strong> "catz"
<strong style="user-select: auto;">Explanation:</strong> Firstly, shift the characters from index 0 to index 0 backward. Now s = "cztz".
Finally, shift the characters from index 1 to index 1 forward. Now s = "catz".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length, shifts.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">shifts[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">i</sub> &lt;= end<sub style="user-select: auto;">i</sub> &lt; s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= direction<sub style="user-select: auto;">i</sub> &lt;= 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
</ul>
</div>