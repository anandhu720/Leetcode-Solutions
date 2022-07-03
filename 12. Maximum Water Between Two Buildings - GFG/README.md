# 12. Maximum Water Between Two Buildings
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer array representing&nbsp;the heights of N buildings, the task is to delete N-2 buildings such that the water that can be trapped between the remaining two building is maximum.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>The total water trapped between two buildings is gap between them (number of buildings removed) multiplied by height of the smaller building. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
height[] = {2,1,3,4,6,5}
<strong style="user-select: auto;">Output: </strong>8<strong style="user-select: auto;">
Explanation: </strong>The heights are 2 1 3 4 6 5.
So we choose the following buildings
<strong style="user-select: auto;">2,</strong><strong style="user-select: auto;">5&nbsp; </strong>and remove others. Now gap between 
two buildings is equal to 4, and the
height of smaller one is 2. So answer is
2 * gap = 2*4 = 8. There is
no answer greater than this.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
height[] = {2,1}
<strong style="user-select: auto;">Output: </strong>0<strong style="user-select: auto;">
Explanation: </strong>The heights are 2 1.
But there is no other buildings to be 
removed so total removed= 0.&nbsp; 
Now the height of smaller one is 2.
So answer is 2 * removed buildings = 2*0
= 0.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You need to<strong style="user-select: auto;"> complete the function maxWater</strong> that takes height array and size N as <strong style="user-select: auto;">parameters </strong>and <strong style="user-select: auto;">returns </strong>the max water that can be stored. The printing is done by the driver code.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= height<sub style="user-select: auto;">i </sub>&lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>