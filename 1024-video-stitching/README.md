<h2><a href="https://leetcode.com/problems/video-stitching/">1024. Video Stitching</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a series of video clips from a sporting event that lasted <code style="user-select: auto;">time</code> seconds. These video clips can be overlapping with each other and have varying lengths.</p>

<p style="user-select: auto;">Each video clip is described by an array <code style="user-select: auto;">clips</code> where <code style="user-select: auto;">clips[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>]</code> indicates that the ith clip started at <code style="user-select: auto;">start<sub style="user-select: auto;">i</sub></code> and ended at <code style="user-select: auto;">end<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">We can cut these clips into segments freely.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, a clip <code style="user-select: auto;">[0, 7]</code> can be cut into segments <code style="user-select: auto;">[0, 1] + [1, 3] + [3, 7]</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of clips needed so that we can cut the clips into segments that cover the entire sporting event</em> <code style="user-select: auto;">[0, time]</code>. If the task is impossible, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> clips = [[0,2],[4,6],[8,10],[1,9],[1,5],[5,9]], time = 10
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We take the clips [0,2], [8,10], [1,9]; a total of 3 clips.
Then, we can reconstruct the sporting event as follows:
We cut [1,9] into segments [1,2] + [2,8] + [8,9].
Now we have segments [0,2] + [2,8] + [8,10] which cover the sporting event [0, 10].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> clips = [[0,1],[1,2]], time = 5
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> We cannot cover [0,5] with only [0,1] and [1,2].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> clips = [[0,1],[6,8],[0,2],[5,6],[0,4],[0,3],[6,7],[1,3],[4,7],[1,4],[2,5],[2,6],[3,4],[4,5],[5,7],[6,9]], time = 9
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We can take clips [0,4], [4,7], and [6,9].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= clips.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">i</sub> &lt;= end<sub style="user-select: auto;">i</sub> &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= time &lt;= 100</code></li>
</ul>
</div>