# 2. Rat Maze With Multiple Jumps
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A Maze is given as <strong style="user-select: auto;">N*N</strong>&nbsp;matrix of blocks where source block is the upper left most block i.e., <strong style="user-select: auto;">maze[0][0]</strong> and destination block is lower rightmost block i.e., <strong style="user-select: auto;">maze[N-1][N-1]</strong>. Find if it is possible for the rat to reach from the source block to the destination block. The number of steps rat can jump from (i, j) is represented by maze[i][j].</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong><br style="user-select: auto;">
If multiple solutions exist, the shortest earliest hop will be accepted. For the same hop distance at any point, forward will be preferred over downward.<br style="user-select: auto;">
In the maze matrix, 0 means the block is the dead end and non-zero number means the block can be used in the path from source to destination. The non-zero value of mat[i][j] indicates number of maximum jumps rat can make from cell mat[i][j].</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
maze[][] = {{2,1,0,0},{3,0,0,1},
{0,1,0,1},{0,0,0,1}}
<strong style="user-select: auto;">Output:
</strong>1 0 0 0
1 0 0 1
0 0 0 1
0 0 0 1<strong style="user-select: auto;">
Explanation: </strong>Rat started with m[0][0] and
can jump up to 2 steps right/down. First
check m[0][1] as it is 1, next check
m[0][2], this won't lead to the solution.
Then check m[1][0], as this is 3(non-zero)
so we can make 3 jumps to reach m[1][3].
From m[1][3] we can move downwards taking
1 jump each time to reach destination at
m[3][3]. </span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
maze[][] = {{2,1,0,0}{2,0,0,1},
{0,1,0,1},{0,0,0,1}}
<strong style="user-select: auto;">Output: </strong>-1<strong style="user-select: auto;">
Explanation: </strong>As no path exists, so -1.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task</strong>:<br style="user-select: auto;">
You don't need to read input or print anything. Your task is to&nbsp;complete the function <strong style="user-select: auto;">solve()</strong> which takes the Maze and its dimensions N as inputs and prints the valid path if it exists. If it does not exist, print -1<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>In the valid path, for each block, if you are visiting the block then you should print 1 for it else 0.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N<sup style="user-select: auto;">N</sup>).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N) if we don't consider the solution matrix for this.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 &lt;= n &lt;= 50<br style="user-select: auto;">
0 &lt;= maze[i][j] &lt;= 20</span></p>
 <p style="user-select: auto;"></p>
            </div>