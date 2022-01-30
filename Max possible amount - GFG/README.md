# Max possible amount
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a row of <strong style="user-select: auto;">n</strong> coins of values <strong style="user-select: auto;">arr[1],</strong> <strong style="user-select: auto;">arr[2], </strong>... <strong style="user-select: auto;">arr[n]</strong>, where <strong style="user-select: auto;">n</strong> is even. Geek plays a game against an opponent by alternating turns.&nbsp;In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and&nbsp;receives the value of the coin. Determine the <strong style="user-select: auto;">maximum</strong> <strong style="user-select: auto;">possible amount </strong>geek can get if he moves first.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> Both of them play optimally</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 4, arr[] = {5, 3, 7, 10}
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation</strong>: </span>
<span style="font-size: 18px; user-select: auto;">Geek chooses 10.
Opponent chooses 7.
Geek chooses 5.
Opponent chooses 3.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 4, arr[] = {8, 15, 3, 7}
<strong style="user-select: auto;">Output: </strong>22
<strong style="user-select: auto;">Explanation</strong>: 
Geek chooses 7.
Opponent chooses 8.
Geek chooses 15.
Opponent chooses 3.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;"><code style="user-select: auto;">maxAmount</code>()&nbsp;</strong>which takes <strong style="user-select: auto;">N</strong>&nbsp; and array <strong style="user-select: auto;">arr</strong> as input parameter and returns the maximum value geek can get.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(<strong style="user-select: auto;">N<sup style="user-select: auto;">2</sup></strong>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(<strong style="user-select: auto;">N<sup style="user-select: auto;">2</sup></strong>)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 ≤ N ≤ 10<sup style="user-select: auto;">3</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ arr[i] ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>