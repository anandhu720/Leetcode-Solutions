# 3. Range Longest Correct Bracket Subsequence Queries
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a bracket sequence or in other words a string S of length&nbsp;N&nbsp;and queries&nbsp;Q, consisting of characters&nbsp;‘(‘&nbsp;and&nbsp;‘)’. Find the length of the maximum correct bracket subsequence of sequence for a given query range from L to R(L and R inclusive).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><em style="user-select: auto;"><strong style="user-select: auto;">Note: </strong>A correct bracket sequence is the one that has matched bracket pairs or which contains another nested correct bracket sequence.</em></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>S = ())(())(())( , Q = 2
Queries = {(3,6), (0,11)}
<strong style="user-select: auto;">Output:
</strong>4
10<strong style="user-select: auto;">
Explanation: </strong>For query 1, Longest Correct
Bracket Subsequence is (()).Hence length=4
For query 2, Longest Correct Bracket
Subsequence is ()(())(()). Hence length=10</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete&nbsp;<strong style="user-select: auto;">getLongestSequence()</strong> function and return&nbsp;the maximum length of the correct bracket subsequence of the sequence. The segment tree array has been prebuilt and provided to you.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Q*Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;=&nbsp;N, Q&nbsp;&lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
0 &lt;=&nbsp;L&nbsp;&lt;=&nbsp;R&nbsp;&lt;= N-1</span></p>
 <p style="user-select: auto;"></p>
            </div>