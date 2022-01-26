# Anti Diagonal Traversal of Matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Give a N*N square <strong style="user-select: auto;">matrix</strong>, return an array of its anti-diagonals. Look at the example for more details.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 2
matrix[][] = {{1,2},
              {3,4}}
<strong style="user-select: auto;">Output:</strong>
1 2 3 4
<strong style="user-select: auto;">Explanation:</strong>
Matrix is as below:
1 2
3 4
Printing it in anti-diagonal form will lead
to the output as 1 2 3 4</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 3
matrix[][] = {{1,2,3},

              {4,5,6},

              {7,8,9}}
<strong style="user-select: auto;">Output:</strong>
1 2 4 3 5 7 6 8 9
<strong style="user-select: auto;">Explanation: </strong>
Matrix is as below:
1 2 3
4 5 6
7 8 9
Printing it in anti-diagonal form will lead
to the output as 1 2 4 3 5 7 6 8 9 </span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">antiDiagonal</strong><strong style="user-select: auto;">Pattern()</strong> that takes matrix as input parameter and returns a list of integers in order of the values visited in the anti-Diagonal&nbsp;pattern.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N * N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N * N) for the resultant list only.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 100<br style="user-select: auto;">
1 &lt;= mat[i][j] &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>