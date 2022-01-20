# Count ways to N'th Stair(Order does not matter)
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There are<strong style="user-select: auto;"> N</strong> stairs, and a person standing at the bottom wants to reach the top. The person can climb either <strong style="user-select: auto;">1 stair or 2 stairs at a time</strong>. Count the number of ways, the person can reach the top (<strong style="user-select: auto;">order does not matter</strong>).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong><br style="user-select: auto;">
Order does not matter means for n = 4 {1 2 1},{2 1 1},{1 1 2} are considered same.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N =<strong style="user-select: auto;"> </strong>4
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Three ways to reach at 4th stair.
They are {1, 1, 1, 1}, {1, 1, 2}, {2, 2}.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 5
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation: </strong>Three ways to reach at 5th stair.
They are {1, 1, 1, 1, 1}, {1, 1, 2, 1} and
{1, 2, 2}.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong style="user-select: auto;">nthStair()</strong>&nbsp;which takes N as input parameter and returns the total number of ways to reach at Nth stair.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(N)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>