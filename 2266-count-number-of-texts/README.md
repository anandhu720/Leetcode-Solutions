<h2><a href="https://leetcode.com/problems/count-number-of-texts/">2266. Count Number of Texts</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Alice is texting Bob using her phone. The <strong style="user-select: auto;">mapping</strong> of digits to letters is shown in the figure below.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png" style="width: 200px; height: 162px; user-select: auto;">
<p style="user-select: auto;">In order to <strong style="user-select: auto;">add</strong> a letter, Alice has to <strong style="user-select: auto;">press</strong> the key of the corresponding digit <code style="user-select: auto;">i</code> times, where <code style="user-select: auto;">i</code> is the position of the letter in the key.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, to add the letter <code style="user-select: auto;">'s'</code>, Alice has to press <code style="user-select: auto;">'7'</code> four times. Similarly, to add the letter <code style="user-select: auto;">'k'</code>, Alice has to press <code style="user-select: auto;">'5'</code> twice.</li>
	<li style="user-select: auto;">Note that the digits <code style="user-select: auto;">'0'</code> and <code style="user-select: auto;">'1'</code> do not map to any letters, so Alice <strong style="user-select: auto;">does not</strong> use them.</li>
</ul>

<p style="user-select: auto;">However, due to an error in transmission, Bob did not receive Alice's text message but received a <strong style="user-select: auto;">string of pressed keys</strong> instead.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, when Alice sent the message <code style="user-select: auto;">"bob"</code>, Bob received the string <code style="user-select: auto;">"2266622"</code>.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">pressedKeys</code> representing the string received by Bob, return <em style="user-select: auto;">the <strong style="user-select: auto;">total number of possible text messages</strong> Alice could have sent</em>.</p>

<p style="user-select: auto;">Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pressedKeys = "22233"
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong>
The possible text messages Alice could have sent are:
"aaadd", "abdd", "badd", "cdd", "aaae", "abe", "bae", and "ce".
Since there are 8 possible messages, we return 8.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pressedKeys = "222222222222222222222222222222222222"
<strong style="user-select: auto;">Output:</strong> 82876089
<strong style="user-select: auto;">Explanation:</strong>
There are 2082876103 possible text messages Alice could have sent.
Since we need to return the answer modulo 10<sup style="user-select: auto;">9</sup> + 7, we return 2082876103 % (10<sup style="user-select: auto;">9</sup> + 7) = 82876089.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= pressedKeys.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pressedKeys</code> only consists of digits from <code style="user-select: auto;">'2'</code> - <code style="user-select: auto;">'9'</code>.</li>
</ul>
</div>