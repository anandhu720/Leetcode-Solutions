# Maximum Connected group
## Hard
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an <strong style="user-select: auto;">n x n</strong> binary grid. A grid is said to be binary if every value in grid is either <strong style="user-select: auto;">1 or 0.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You can change a<strong style="user-select: auto;">t most one</strong> cell in grid from <strong style="user-select: auto;">0 to 1</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You need to find the largest group of connected&nbsp; <strong style="user-select: auto;">1's</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Two cells are said to be connected if both are <strong style="user-select: auto;">adjacent</strong> to each other and both have same value.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
2<br style="user-select: auto;">
1 1<br style="user-select: auto;">
0 1<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
4<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Explanation:</strong><br style="user-select: auto;">
By changing cell (2,1) ,we can obtain a connected group of 4&nbsp;1's<br style="user-select: auto;">
1 1<br style="user-select: auto;">
<strong style="user-select: auto;">1</strong> 1</span></div>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
3<br style="user-select: auto;">
1 0 1<br style="user-select: auto;">
1 0 1<br style="user-select: auto;">
1 0 1<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
7<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Explanation:</strong><br style="user-select: auto;">
By changing cell (3,2) ,we can obtain a connected group of 7 1's<br style="user-select: auto;">
1 0 1<br style="user-select: auto;">
1 0 1<br style="user-select: auto;">
1 <strong style="user-select: auto;">1</strong> 1</span></div>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function <strong style="user-select: auto;">MaxConnection()</strong> which takes an integer n denoting no. of rows and columns&nbsp;of the grid and a matrix grid[][] denoting the grid and return the maximum group of connected group of 1s.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= n&lt;= 500<br style="user-select: auto;">
0 &lt;= grid[i][j]&nbsp;&lt;= 1</span><br style="user-select: auto;">
&nbsp;</p>
</div>