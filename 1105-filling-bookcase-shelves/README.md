<h2><a href="https://leetcode.com/problems/filling-bookcase-shelves/">1105. Filling Bookcase Shelves</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">books</code> where <code style="user-select: auto;">books[i] = [thickness<sub style="user-select: auto;">i</sub>, height<sub style="user-select: auto;">i</sub>]</code> indicates the thickness and height of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> book. You are also given an integer <code style="user-select: auto;">shelfWidth</code>.</p>

<p style="user-select: auto;">We want to place these books in order onto bookcase shelves that have a total width <code style="user-select: auto;">shelfWidth</code>.</p>

<p style="user-select: auto;">We choose some of the books to place on this shelf such that the sum of their thickness is less than or equal to <code style="user-select: auto;">shelfWidth</code>, then build another level of the shelf of the bookcase so that the total height of the bookcase has increased by the maximum height of the books we just put down. We repeat this process until there are no more books to place.</p>

<p style="user-select: auto;">Note that at each step of the above process, the order of the books we place is the same order as the given sequence of books.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if we have an ordered list of <code style="user-select: auto;">5</code> books, we might place the first and second book onto the first shelf, the third book on the second shelf, and the fourth and fifth book on the last shelf.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum possible height that the total bookshelf can be after placing shelves in this manner</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/06/24/shelves.png" style="height: 500px; width: 337px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> books = [[1,1],[2,3],[2,3],[1,1],[1,1],[1,1],[1,2]], shelf_width = 4
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong>
The sum of the heights of the 3 shelves is 1 + 3 + 2 = 6.
Notice that book number 2 does not have to be on the first shelf.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> books = [[1,3],[2,4],[3,2]], shelfWidth = 6
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= books.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= thickness<sub style="user-select: auto;">i</sub> &lt;= shelfWidth &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= height<sub style="user-select: auto;">i</sub> &lt;= 1000</code></li>
</ul>
</div>