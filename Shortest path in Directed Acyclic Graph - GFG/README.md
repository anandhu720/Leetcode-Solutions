# Shortest path in Directed Acyclic Graph
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Directed Acyclic Graph of N vertices from 0 to N-1 and a 2D Integer array(or vector) edges[ ][ ] of length M, where there is a directed edge from edge[i][0] to edge[i][1] with a distance of edge[i][2] for all i, 0&lt;=i&lt;M.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Find the <strong style="user-select: auto;">shortest</strong> path from <strong style="user-select: auto;">src(0) </strong>vertex&nbsp;to all the vertices&nbsp;and if it is impossible to reach any vertex, then return&nbsp;<strong style="user-select: auto;">-1</strong> for that vertex.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
n = 6, m= 7
edge=[[0,1,2],[0,4,1],[4,5,4
,[4,2,2],[1,2,3],[2,3,6],[5,3,1]]

<strong style="user-select: auto;">Output:</strong>
0 2 3 6 1 5</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to print or input anything. Complete the function <strong style="user-select: auto;">shortest path()</strong>&nbsp;which takes an integer N as number of vertices, an integer M as number of edges and a&nbsp;2D Integer array(or vector)&nbsp;edges as the input parameters and returns an <strong style="user-select: auto;">integer array(or vector)</strong>, denoting&nbsp;the list&nbsp;of distance from src to all nodes.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraint:</strong></span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= n,m &lt;= 100</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">0 &lt;= edge<sub style="user-select: auto;">i,0</sub>,edge<sub style="user-select: auto;">i,1</sub>&nbsp;&lt;&nbsp;n</span><br style="user-select: auto;">
	&nbsp;</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N+E), where N is the number of nodes and E is edges</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(N)</span></p>

<p style="user-select: auto;">&nbsp;</p>
</div>