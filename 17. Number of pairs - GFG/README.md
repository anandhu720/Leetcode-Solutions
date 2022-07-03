# 17. Number of pairs
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two arrays <strong style="user-select: auto;">X</strong> and <strong style="user-select: auto;">Y</strong> of positive integers, find the number of pairs such that&nbsp;<strong style="user-select: auto;">x<sup style="user-select: auto;">y</sup> &gt; y<sup style="user-select: auto;">x</sup></strong>&nbsp;<strong style="user-select: auto;">(raised to power of)</strong> where x is an element from X and y is an element from Y.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
M = 3, X[] = [2 1 6] 
N = 2, Y[] = [1 5]
<strong style="user-select: auto;">Output</strong>: 3
<strong style="user-select: auto;">Explanation</strong>: 
The pairs which follow x<sup style="user-select: auto;">y</sup> &gt; y<sup style="user-select: auto;">x</sup> are 
as such: 2<sup style="user-select: auto;">1</sup> &gt; 1<sup style="user-select: auto;">2</sup>,&nbsp; 2<sup style="user-select: auto;">5</sup> &gt; 5<sup style="user-select: auto;">2</sup> and 6<sup style="user-select: auto;">1</sup> &gt; 1<sup style="user-select: auto;">6 .</sup></span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
M = 4, X[] = [2 3 4 5]
N = 3, Y[] = [1 2 3]
<strong style="user-select: auto;">Output</strong>: 5
<strong style="user-select: auto;">Explanation</strong>: 
The pairs for the given input are 
2<sup style="user-select: auto;">1 </sup>&gt; 1<sup style="user-select: auto;">2</sup> , 3<sup style="user-select: auto;">1</sup> &gt; 1<sup style="user-select: auto;">3 </sup>, 3<sup style="user-select: auto;">2</sup> &gt; 2<sup style="user-select: auto;">3</sup> , 4<sup style="user-select: auto;">1</sup> &gt; 1<sup style="user-select: auto;">4</sup> , 
5<sup style="user-select: auto;">1</sup> &gt; 1<sup style="user-select: auto;">5&nbsp;</sup>.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. You only need to complete the function<strong style="user-select: auto;"> countPairs()&nbsp;</strong>that takes <strong style="user-select: auto;">X, Y, M, N</strong> as <strong style="user-select: auto;">parameters </strong>and returns the total number of pairs.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O((N + M)log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ M, N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ X[i], Y[i]&nbsp;≤ 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>