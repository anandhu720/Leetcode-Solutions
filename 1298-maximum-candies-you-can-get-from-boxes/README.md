<h2><a href="https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes/">1298. Maximum Candies You Can Get from Boxes</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> boxes labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. You are given four arrays: <code style="user-select: auto;">status</code>, <code style="user-select: auto;">candies</code>, <code style="user-select: auto;">keys</code>, and <code style="user-select: auto;">containedBoxes</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">status[i]</code> is <code style="user-select: auto;">1</code> if the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> box is open and <code style="user-select: auto;">0</code> if the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> box is closed,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">candies[i]</code> is the number of candies in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> box,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">keys[i]</code> is a list of the labels of the boxes you can open after opening the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> box.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">containedBoxes[i]</code> is a list of the boxes you found inside the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> box.</li>
</ul>

<p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">initialBoxes</code> that contains the labels of the boxes you initially have. You can take all the candies in <strong style="user-select: auto;">any open box</strong> and you can use the keys in it to open new boxes and you also can use the boxes you find in it.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum number of candies you can get following the rules above</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> status = [1,0,1,0], candies = [7,5,4,100], keys = [[],[],[1],[]], containedBoxes = [[1,2],[3],[],[]], initialBoxes = [0]
<strong style="user-select: auto;">Output:</strong> 16
<strong style="user-select: auto;">Explanation:</strong> You will be initially given box 0. You will find 7 candies in it and boxes 1 and 2.
Box 1 is closed and you do not have a key for it so you will open box 2. You will find 4 candies and a key to box 1 in box 2.
In box 1, you will find 5 candies and box 3 but you will not find a key to box 3 so box 3 will remain closed.
Total number of candies collected = 7 + 4 + 5 = 16 candy.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> status = [1,0,0,0,0,0], candies = [1,1,1,1,1,1], keys = [[1,2,3,4,5],[],[],[],[],[]], containedBoxes = [[1,2,3,4,5],[],[],[],[],[]], initialBoxes = [0]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> You have initially box 0. Opening it you can find boxes 1,2,3,4 and 5 and their keys.
The total number of candies will be 6.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == status.length == candies.length == keys.length == containedBoxes.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">status[i]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= candies[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= keys[i].length &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= keys[i][j] &lt; n</code></li>
	<li style="user-select: auto;">All values of <code style="user-select: auto;">keys[i]</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= containedBoxes[i].length &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= containedBoxes[i][j] &lt; n</code></li>
	<li style="user-select: auto;">All values of <code style="user-select: auto;">containedBoxes[i]</code> are unique.</li>
	<li style="user-select: auto;">Each box is contained in one box at most.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= initialBoxes.length &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= initialBoxes[i] &lt; n</code></li>
</ul>
</div>