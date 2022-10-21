<h2><a href="https://leetcode.com/problems/maximum-score-words-formed-by-letters/">1255. Maximum Score Words Formed by Letters</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a list of <code style="user-select: auto;">words</code>, list of&nbsp; single&nbsp;<code style="user-select: auto;">letters</code> (might be repeating)&nbsp;and <code style="user-select: auto;">score</code>&nbsp;of every character.</p>

<p style="user-select: auto;">Return the maximum score of <strong style="user-select: auto;">any</strong> valid set of words formed by using the given letters (<code style="user-select: auto;">words[i]</code> cannot be used two&nbsp;or more times).</p>

<p style="user-select: auto;">It is not necessary to use all characters in <code style="user-select: auto;">letters</code> and each letter can only be used once. Score of letters&nbsp;<code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'b'</code>, <code style="user-select: auto;">'c'</code>, ... ,<code style="user-select: auto;">'z'</code> is given by&nbsp;<code style="user-select: auto;">score[0]</code>, <code style="user-select: auto;">score[1]</code>, ... , <code style="user-select: auto;">score[25]</code> respectively.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["dog","cat","dad","good"], letters = ["a","a","c","d","d","d","g","o","o"], score = [1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0]
<strong style="user-select: auto;">Output:</strong> 23
<strong style="user-select: auto;">Explanation:</strong>
Score  a=1, c=9, d=5, g=3, o=2
Given letters, we can form the words "dad" (5+1+5) and "good" (3+2+2+5) with a score of 23.
Words "dad" and "dog" only get a score of 21.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["xxxz","ax","bx","cx"], letters = ["z","a","b","c","x","x","x"], score = [4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10]
<strong style="user-select: auto;">Output:</strong> 27
<strong style="user-select: auto;">Explanation:</strong>
Score  a=4, b=4, c=4, x=5, z=10
Given letters, we can form the words "ax" (4+5), "bx" (4+5) and "cx" (4+5) with a score of 27.
Word "xxxz" only get a score of 25.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["leetcode"], letters = ["l","e","t","c","o","d"], score = [0,0,1,1,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
Letter "e" can only be used once.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 14</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 15</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= letters.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">letters[i].length == 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">score.length ==&nbsp;26</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= score[i] &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code>, <code style="user-select: auto;">letters[i]</code>&nbsp;contains only lower case English letters.</li>
</ul>
</div>