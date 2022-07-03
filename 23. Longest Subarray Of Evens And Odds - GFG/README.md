# 23. Longest Subarray Of Evens And Odds
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array of size n. Find the<strong style="user-select: auto;"> maximum possible length </strong>of a subarray such that its elements are arranged alternately either as<strong style="user-select: auto;"> even and odd</strong> or<strong style="user-select: auto;"> odd and even</strong> .</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 5
a[] = {10,12,14,7,8}
<strong style="user-select: auto;">Output: </strong>3<strong style="user-select: auto;">
Explanation: </strong>The max length of subarray
is 3 and the subarray is {14 7 8}. Here 
the array starts as an even element and 
has odd and even elements alternately.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 2
a[] = {4,6}
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>The array contains {4 6}. 
So, we can only choose 1 element as 
that will be the max length subarray.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
&nbsp;You don't need to take any input. Just complete the function <strong style="user-select: auto;">maxEvenOdd()&nbsp;</strong>that returns the maximum length.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= A<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>