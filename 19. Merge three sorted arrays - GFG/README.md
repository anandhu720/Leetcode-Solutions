# 19. Merge three sorted arrays
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given three sorted arrays <strong style="user-select: auto;">A</strong>, <strong style="user-select: auto;">B</strong> and <strong style="user-select: auto;">C</strong> of size <strong style="user-select: auto;">N</strong>, <strong style="user-select: auto;">M</strong> and <strong style="user-select: auto;">P</strong> respectively. The task is to merge them into a single array which must be sorted in increasing order.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
N = 4, A[] = [1 2 3 4] 
M = 5, B[] = [1 2 3 4 5] 
P = 6, C[] = [1 2 3 4 5 6]
<strong style="user-select: auto;">Output</strong>: 1 1 1 2 2 2 3 3 3 4 4 4 5 5 6
<strong style="user-select: auto;">Explanation</strong>: Merging these three sorted 
arrays, we have: 
1 1 1 2 2 2 3 3 3 4 4 4 5 5 6.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
N = 2, A[] = [1 2]
M = 3, B[] = [2 3 4] 
P = 4, C[] = [4 5 6 7]
<strong style="user-select: auto;">Output</strong>: 1 2 2 3 4 4 5 6 7
<strong style="user-select: auto;">Explanation</strong>: Merging three sorted arrays, 
we have: 1 2 2 3 4 4 5 6 7.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. You only need to complete the function<strong style="user-select: auto;"> mergeThree()&nbsp;</strong>that takes <strong style="user-select: auto;">A,B,C as parameters</strong>. The function <strong style="user-select: auto;">returns </strong>an <strong style="user-select: auto;">array </strong>or <strong style="user-select: auto;">vector</strong>.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N + M + P)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N + M + P) for the resultant array only.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N, M, P &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= A[i], B[i], C[i] &lt;= 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>