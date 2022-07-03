# 15. Rotten Oranges
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a grid&nbsp;of dimension <strong style="user-select: auto;">nxm</strong>&nbsp;where each cell in the grid&nbsp;can have values 0, 1 or 2 which has the following meaning:</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">0 </strong>: Empty cell </span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">1</strong> : Cells have fresh oranges </span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">2</strong> : Cells have rotten oranges </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">We have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (<strong style="user-select: auto;">up</strong>, <strong style="user-select: auto;">down</strong>, <strong style="user-select: auto;">left</strong> and <strong style="user-select: auto;">right</strong>) in unit time.&nbsp;</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{0,1,2},{0,1,2},{2,1,1}}
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>The grid is-
0 1 2
0 1 2
2 1 1
Oranges at positions (0,2), (1,2), (2,0)
will rot oranges at (0,1), (1,1), (2,2) and 
(2,1) in unit time.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{2,2,0,1}}
<strong style="user-select: auto;">Output: </strong>-1
<strong style="user-select: auto;">Explanation: </strong>The grid is-
2 2 0 1
Oranges at (0,0) and (0,1) can't rot orange at
(0,3).</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything, Your task is to complete the function&nbsp;<strong style="user-select: auto;">orangesRotting()&nbsp;</strong>which takes grid as input parameter and returns the minimum time to rot all the fresh oranges. If not possible returns -1.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n, m ≤ 500</span></p>
 <p style="user-select: auto;"></p>
            </div>