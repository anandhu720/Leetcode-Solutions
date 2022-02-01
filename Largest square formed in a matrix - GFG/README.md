# Largest square formed in a matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary matrix <strong style="user-select: auto;">mat</strong>&nbsp;of size <strong style="user-select: auto;">n</strong> * <strong style="user-select: auto;">m</strong>, find out the maximum size square sub-matrix with all 1s.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, m = 2
mat = {{1, 1}, 
&nbsp;      {1, 1}}
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explaination:</strong> The maximum size of the square
sub-matrix is 2. The matrix itself is the 
maximum sized sub-matrix in this case.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, m = 2
mat = {{0, 0}, 
&nbsp;      {0, 0}}
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explaination:</strong> There is no 1 in the matrix.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">maxSquare()</strong> which takes n, m and mat as input parameters and returns the size of the maximum square sub-matrix of given matrix.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n*m)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n, m ≤ 50<br style="user-select: auto;">
0 ≤ mat[i][j] ≤ 1&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>