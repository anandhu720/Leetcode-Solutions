# Interleaved Strings
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given strings <strong style="user-select: auto;">A</strong>, <strong style="user-select: auto;">B</strong>, and <strong style="user-select: auto;">C</strong>, find whether <strong style="user-select: auto;">C</strong> is formed by an interleaving of <strong style="user-select: auto;">A</strong>&nbsp;and <strong style="user-select: auto;">B</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">An interleaving of two strings S&nbsp;and T&nbsp;is a configuration such&nbsp;that it creates a new string Y from the concatenation substrings of A and B and |Y| = |A + B| = |C|</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For example:</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A = "XYZ"</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">B = "ABC"</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">so we can make multiple interleaving string Y like, XYZABC, XAYBCZ, AXBYZC, XYAZBC and many more so here your task is to check whether you can create a string Y which can be equal to C.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Specifically, you just need to create substrings of string A and create substrings&nbsp;B and concatenate&nbsp;them and check whether it is equal to C or not.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: </span><strong style="user-select: auto;">a + b</strong><span style="font-size: 18px; user-select: auto;"> is the concatenation of strings a and b.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Return <strong style="user-select: auto;">true</strong>&nbsp;if <strong style="user-select: auto;">C</strong></span>&nbsp;<span style="font-size: 18px; user-select: auto;">is formed by an interleaving of <strong style="user-select: auto;">A</strong>&nbsp;and <strong style="user-select: auto;">B</strong>, else return <strong style="user-select: auto;">false.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>A = YX, B = X, C =&nbsp;XXY
<strong style="user-select: auto;">Output: </strong>0<strong style="user-select: auto;">
Explanation: </strong>XXY is not interleaving
of YX and X
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>A = XY, B = X, C = XXY
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>XXY is interleaving of
XY and X.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">isInterleave() </strong>which takes three strings A, B and C as input and returns true if C is an interleaving of A and B else returns false. (1 is printed by the driver code if the returned value is true, otherwise 0.)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N * M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N * M)<br style="user-select: auto;">
here, N = length of A, and M = length of B</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ length of&nbsp;A, B&nbsp;≤ 100<br style="user-select: auto;">
1 ≤ length of&nbsp;C ≤ 200</span></p>
 <p style="user-select: auto;"></p>
            </div>