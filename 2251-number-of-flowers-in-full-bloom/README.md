<h2><a href="https://leetcode.com/problems/number-of-flowers-in-full-bloom/">2251. Number of Flowers in Full Bloom</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">flowers</code>, where <code style="user-select: auto;">flowers[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>]</code> means the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> flower will be in <strong style="user-select: auto;">full bloom</strong> from <code style="user-select: auto;">start<sub style="user-select: auto;">i</sub></code> to <code style="user-select: auto;">end<sub style="user-select: auto;">i</sub></code> (<strong style="user-select: auto;">inclusive</strong>). You are also given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">persons</code> of size <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">persons[i]</code> is the time that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> person will arrive to see the flowers.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an integer array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;"> of size </em><code style="user-select: auto;">n</code><em style="user-select: auto;">, where </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is the <strong style="user-select: auto;">number</strong> of flowers that are in full bloom when the </em><code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> person arrives.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/02/ex1new.jpg" style="width: 550px; height: 216px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> flowers = [[1,6],[3,7],[9,12],[4,13]], persons = [2,3,7,11]
<strong style="user-select: auto;">Output:</strong> [1,2,2,2]
<strong style="user-select: auto;">Explanation: </strong>The figure above shows the times when the flowers are in full bloom and when the people arrive.
For each person, we return the number of flowers in full bloom during their arrival.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/02/ex2new.jpg" style="width: 450px; height: 195px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> flowers = [[1,10],[3,3]], persons = [3,3,2]
<strong style="user-select: auto;">Output:</strong> [2,2,1]
<strong style="user-select: auto;">Explanation:</strong> The figure above shows the times when the flowers are in full bloom and when the people arrive.
For each person, we return the number of flowers in full bloom during their arrival.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= flowers.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">flowers[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= start<sub style="user-select: auto;">i</sub> &lt;= end<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= persons.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= persons[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>