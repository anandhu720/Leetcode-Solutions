# Min Cost Climbing Stairs
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of integers <strong style="user-select: auto;">cost[]</strong> of length <strong style="user-select: auto;">N</strong>, where&nbsp;<strong style="user-select: auto;">cost[i]</strong>&nbsp;is the cost of the i<sup style="user-select: auto;">th</sup>&nbsp;step on a staircase.&nbsp;Once&nbsp;the cost is paid, you can either climb one or two steps.<br style="user-select: auto;">
You can either start from the step with index 0, or the step with index 1.<br style="user-select: auto;">
Return the minimum cost to reach the top of the floor.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
cost[] = {10, 15, 20}
<strong style="user-select: auto;">Output:
</strong>15<strong style="user-select: auto;">
Explanation:
<img alt="" src="https://media.geeksforgeeks.org/img-practice/746_1-1629788354.png" style="height: 450px; width: 800px; user-select: auto;" class="img-responsive">
</strong>Cheapest option is to start at cost[1],
pay that cost, and go to the top.
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 10
arr[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1}
<strong style="user-select: auto;">Output:
</strong>6<strong style="user-select: auto;">
Explanation:
</strong>Cheapest option is to start on cost[0], 
and only step on 1s, skipping cost[3].</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">minCostClimbingStairs</strong>() which takes an array&nbsp;<strong style="user-select: auto;">cost[] </strong>as&nbsp;input<strong style="user-select: auto;">&nbsp;</strong>and returns the minimum cost to reach the top.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 ≤ N ≤ 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
0&nbsp;≤ cost[i] ≤ 999</span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>