# Solve the Sudoku
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an&nbsp;incomplete Sudoku&nbsp;configuration in terms of a 9 x 9 &nbsp;2-D square matrix (grid[][]), the task to find a solved Sudoku. For simplicity, you may assume&nbsp;that there will be only one unique solution.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Sample Sudoku for you to get the logic for its solution:</strong><br style="user-select: auto;">
<br style="user-select: auto;">
<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/sudoku.png" style="height: 247px; width: 286px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">grid[][] = 
[[3 0 6 5 0 8 4 0 0],
[5 2 0 0 0 0 0 0 0],
[0 8 7 0 0 0 0 3 1 ],</span>
<span style="font-size: 18px; user-select: auto;">[0 0 3 0 1 0 0 8 0],
[9 0 0 8 6 3 0 0 5],
[0 5 0 0 9 0 6 0 0],
[1 3 0 0 0 0 2 5 0],
[0 0 0 0 0 0 0 7 4],
[0 0 5 2 0 6 3 0 0]]
<strong style="user-select: auto;">Output:
</strong>3 1 6 5 7 8 4 9 2
5 2 9 1 3 4 7 6 8
4 8 7 6 2 9 5 3 1
2 6 3 4 1 5 9 8 7
9 7 4 8 6 3 1 2 5
8 5 1 7 9 2 6 4 3
1 3 8 9 4 7 2 5 6
6 9 2 3 5 1 8 7 4
7 4 5 2 8 6 3 1 9
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You need to complete the two functions:<br style="user-select: auto;">
<strong style="user-select: auto;">SolveSudoku()</strong>: Takes a grid as its argument and returns true if a solution is possible and false if it is not.<br style="user-select: auto;">
<strong style="user-select: auto;">printGrid()</strong>: Takes a grid as its argument and prints the 81 numbers of the solved Sudoku in a single line with space separation.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(9<sup style="user-select: auto;">N*N</sup>).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N*N).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
0 ≤ grid[i][j] ≤ 9</span></p>
 <p style="user-select: auto;"></p>
            </div>