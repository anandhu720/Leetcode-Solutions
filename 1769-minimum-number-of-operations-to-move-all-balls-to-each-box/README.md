<h2><a href="https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/">1769. Minimum Number of Operations to Move All Balls to Each Box</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> boxes. You are given a binary string <code style="user-select: auto;">boxes</code> of length <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">boxes[i]</code> is <code style="user-select: auto;">'0'</code> if the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> box is <strong style="user-select: auto;">empty</strong>, and <code style="user-select: auto;">'1'</code> if it contains <strong style="user-select: auto;">one</strong> ball.</p>

<p style="user-select: auto;">In one operation, you can move <strong style="user-select: auto;">one</strong> ball from a box to an adjacent box. Box <code style="user-select: auto;">i</code> is adjacent to box <code style="user-select: auto;">j</code> if <code style="user-select: auto;">abs(i - j) == 1</code>. Note that after doing so, there may be more than one ball in some boxes.</p>

<p style="user-select: auto;">Return an array <code style="user-select: auto;">answer</code> of size <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">answer[i]</code> is the <strong style="user-select: auto;">minimum</strong> number of operations needed to move all the balls to the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> box.</p>

<p style="user-select: auto;">Each <code style="user-select: auto;">answer[i]</code> is calculated considering the <strong style="user-select: auto;">initial</strong> state of the boxes.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> boxes = "110"
<strong style="user-select: auto;">Output:</strong> [1,1,3]
<strong style="user-select: auto;">Explanation:</strong> The answer for each box is as follows:
1) First box: you will have to move one ball from the second box to the first box in one operation.
2) Second box: you will have to move one ball from the first box to the second box in one operation.
3) Third box: you will have to move one ball from the first box to the third box in two operations, and move one ball from the second box to the third box in one operation.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> boxes = "001011"
<strong style="user-select: auto;">Output:</strong> [11,8,5,4,3,4]</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == boxes.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">boxes[i]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>