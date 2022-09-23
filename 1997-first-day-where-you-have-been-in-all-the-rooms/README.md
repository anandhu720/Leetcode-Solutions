<h2><a href="https://leetcode.com/problems/first-day-where-you-have-been-in-all-the-rooms/">1997. First Day Where You Have Been in All the Rooms</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> rooms you need to visit, labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. Each day is labeled, starting from <code style="user-select: auto;">0</code>. You will go in and visit one room a day.</p>

<p style="user-select: auto;">Initially on day <code style="user-select: auto;">0</code>, you visit room <code style="user-select: auto;">0</code>. The <strong style="user-select: auto;">order</strong> you visit the rooms for the coming days is determined by the following <strong style="user-select: auto;">rules</strong> and a given <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">nextVisit</code> of length <code style="user-select: auto;">n</code>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Assuming that on a day, you visit room <code style="user-select: auto;">i</code>,</li>
	<li style="user-select: auto;">if you have been in room <code style="user-select: auto;">i</code> an <strong style="user-select: auto;">odd</strong> number of times (<strong style="user-select: auto;">including</strong> the current visit), on the <strong style="user-select: auto;">next</strong> day you will visit a room with a <strong style="user-select: auto;">lower or equal room number</strong> specified by <code style="user-select: auto;">nextVisit[i]</code> where <code style="user-select: auto;">0 &lt;= nextVisit[i] &lt;= i</code>;</li>
	<li style="user-select: auto;">if you have been in room <code style="user-select: auto;">i</code> an <strong style="user-select: auto;">even</strong> number of times (<strong style="user-select: auto;">including</strong> the current visit), on the <strong style="user-select: auto;">next</strong> day you will visit room <code style="user-select: auto;">(i + 1) mod n</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the label of the <strong style="user-select: auto;">first</strong> day where you have been in <strong style="user-select: auto;">all</strong> the rooms</em>. It can be shown that such a day exists. Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nextVisit = [0,0]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
- On day 0, you visit room 0. The total times you have been in room 0 is 1, which is odd.
&nbsp; On the next day you will visit room nextVisit[0] = 0
- On day 1, you visit room 0, The total times you have been in room 0 is 2, which is even.
&nbsp; On the next day you will visit room (0 + 1) mod 2 = 1
- On day 2, you visit room 1. This is the first day where you have been in all the rooms.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nextVisit = [0,0,2]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong>
Your room visiting order for each day is: [0,0,1,0,0,1,2,...].
Day 6 is the first day where you have been in all the rooms.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nextVisit = [0,1,2,0]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong>
Your room visiting order for each day is: [0,0,1,1,2,2,3,...].
Day 6 is the first day where you have been in all the rooms.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nextVisit.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nextVisit[i] &lt;= i</code></li>
</ul>
</div>