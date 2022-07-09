<h2><a href="https://leetcode.com/problems/remove-stones-to-minimize-the-total/">1962. Remove Stones to Minimize the Total</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">piles</code>, where <code style="user-select: auto;">piles[i]</code> represents the number of stones in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> pile, and an integer <code style="user-select: auto;">k</code>. You should apply the following operation <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">k</code> times:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose any <code style="user-select: auto;">piles[i]</code> and <strong style="user-select: auto;">remove</strong> <code style="user-select: auto;">floor(piles[i] / 2)</code> stones from it.</li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Notice</strong> that you can apply the operation on the <strong style="user-select: auto;">same</strong> pile more than once.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> possible total number of stones remaining after applying the </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> operations</em>.</p>

<p style="user-select: auto;"><code style="user-select: auto;">floor(x)</code> is the <b style="user-select: auto;">greatest</b> integer that is <strong style="user-select: auto;">smaller</strong> than or <strong style="user-select: auto;">equal</strong> to <code style="user-select: auto;">x</code> (i.e., rounds <code style="user-select: auto;">x</code> down).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [5,4,9], k = 2
<strong style="user-select: auto;">Output:</strong> 12
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Steps of a possible scenario are:
- Apply the operation on pile 2. The resulting piles are [5,4,<u style="user-select: auto;">5</u>].
- Apply the operation on pile 0. The resulting piles are [<u style="user-select: auto;">3</u>,4,5].
The total number of stones in [3,4,5] is 12.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [4,3,6,7], k = 3
<strong style="user-select: auto;">Output:</strong> 12
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Steps of a possible scenario are:
- Apply the operation on pile 2. The resulting piles are [4,3,<u style="user-select: auto;">3</u>,7].
- Apply the operation on pile 3. The resulting piles are [4,3,3,<u style="user-select: auto;">4</u>].
- Apply the operation on pile 0. The resulting piles are [<u style="user-select: auto;">2</u>,3,3,4].
The total number of stones in [2,3,3,4] is 12.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= piles.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= piles[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>