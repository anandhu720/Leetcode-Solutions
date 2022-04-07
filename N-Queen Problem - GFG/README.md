# N-Queen Problem
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The n-queens puzzle is the problem of placing <strong style="user-select: auto;">n</strong> queens on a&nbsp;(<strong style="user-select: auto;">n×n)</strong> chessboard such that no two queens can&nbsp;attack each other.<br style="user-select: auto;">
Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens’ placement, where the solutions are&nbsp;a permutation of [1,2,3..n] in increasing order, here&nbsp;the number in the <em style="user-select: auto;">ith</em>&nbsp;place denotes&nbsp;that the <em style="user-select: auto;">ith</em>-column queen is&nbsp;placed in the row with that number. For eg below figure represents a chessboard [3 1 4 2].<br style="user-select: auto;">
<br style="user-select: auto;">
<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/ratinmaze_filled11-1.png" style="height: 201px; width: 231px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
1
<strong style="user-select: auto;">Output:</strong>
[1]
<strong style="user-select: auto;">Explaination:</strong>
Only one queen can be placed 
in the single cell available.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
4
<strong style="user-select: auto;">Output:</strong>
[2 4 1 3 ] [3 1 4 2 ]
<strong style="user-select: auto;">Explaination:</strong>
These are the 2 possible solutions.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">nQueen()</strong> which takes n as input parameter and returns a list containing all the possible chessboard configurations in sorted order. Return an empty list if no solution exists.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n!)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n<sup style="user-select: auto;">2</sup>)&nbsp;</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n ≤ 10&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>