# Number of Ways to Arrive at Destination
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are in a city that consists of&nbsp;<code style="user-select: auto;">n</code>&nbsp;intersections numbered from&nbsp;<code style="user-select: auto;">0</code>&nbsp;to&nbsp;<code style="user-select: auto;">n - 1</code>&nbsp;with&nbsp;<strong style="user-select: auto;">bi-directional</strong>&nbsp;roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road between any two intersections.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an integer&nbsp;<code style="user-select: auto;">n</code>&nbsp;and a 2D integer array&nbsp;<code style="user-select: auto;">roads</code>&nbsp;where&nbsp;<code style="user-select: auto;">roads[i] = [u<sub style="user-select: auto;">i</sub>, v<sub style="user-select: auto;">i</sub>, time<sub style="user-select: auto;">i</sub>]</code>&nbsp;means that there is a road between intersections&nbsp;<code style="user-select: auto;">u<sub style="user-select: auto;">i</sub></code>&nbsp;and&nbsp;<code style="user-select: auto;">v<sub style="user-select: auto;">i</sub></code>&nbsp;that takes&nbsp;<code style="user-select: auto;">time<sub style="user-select: auto;">i</sub></code>&nbsp;minutes to travel. You want to know in how many ways you can travel from intersection&nbsp;<code style="user-select: auto;">0</code>&nbsp;to intersection&nbsp;<code style="user-select: auto;">n - 1</code>&nbsp;in the&nbsp;<strong style="user-select: auto;">shortest amount of time</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Return&nbsp;<em style="user-select: auto;">the&nbsp;<strong style="user-select: auto;">number of ways</strong>&nbsp;you can arrive at your destination in the&nbsp;<strong style="user-select: auto;">shortest amount of time</strong></em>. Since the answer may be large, return it&nbsp;<strong style="user-select: auto;">modulo</strong>&nbsp;<code style="user-select: auto;">10<sup style="user-select: auto;">9</sup>&nbsp;+ 7</code>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n=7, m=10
edges= [[0,6,7],[0,1,2],[1,2,3],[1,3,3],[6,3,3],[3,5,1],[6,5,1],[2,5,1],[0,4,5],[4,6,2]]</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
4
Explaination:</span>

<span style="font-size: 18px; user-select: auto;">The four ways to get there in 7 minutes are:
- 0  6
- 0  4  6
- 0  1  2  5  6
- 0  1  3  5  6</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n=6, m=8
edges= [[0,5,8],[0,2,2],[0,1,1],[1,3,3],[1,2,3],[2,5,6],[3,4,2],[4,5,2]]</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
3
Explaination:</span>

<span style="font-size: 18px; user-select: auto;">The three ways to get there in 8 minutes are:
- 0  5
- 0  2  5
- 0  1  3  4  5
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
<code style="user-select: auto;">1 &lt;= n &lt;= 200<br style="user-select: auto;">
n - 1 &lt;= roads.length &lt;= n * (n - 1) / 2<br style="user-select: auto;">
roads[i].length == 3<br style="user-select: auto;">
0 &lt;= u<sub style="user-select: auto;">i</sub>, v<sub style="user-select: auto;">i</sub>&nbsp;&lt;= n - 1<br style="user-select: auto;">
1 &lt;= time<sub style="user-select: auto;">i</sub>&nbsp;&lt;= 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
u<sub style="user-select: auto;">i&nbsp;</sub>!= v<sub style="user-select: auto;">i</sub></code><br style="user-select: auto;">
There is at most one road connecting any two intersections.<br style="user-select: auto;">
You can reach any intersection from any other intersection.<br style="user-select: auto;">
<br style="user-select: auto;">
Expected Time Complexity:&nbsp;O(M * logN + N)<br style="user-select: auto;">
Expected Space Complexity: O(M+N)</span></p>
</div>