<h2><a href="https://leetcode.com/problems/find-minimum-time-to-finish-all-jobs/">1723. Find Minimum Time to Finish All Jobs</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">jobs</code>, where <code style="user-select: auto;">jobs[i]</code> is the amount of time it takes to complete the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> job.</p>

<p style="user-select: auto;">There are <code style="user-select: auto;">k</code> workers that you can assign jobs to. Each job should be assigned to <strong style="user-select: auto;">exactly</strong> one worker. The <strong style="user-select: auto;">working time</strong> of a worker is the sum of the time it takes to complete all jobs assigned to them. Your goal is to devise an optimal assignment such that the <strong style="user-select: auto;">maximum working time</strong> of any worker is <strong style="user-select: auto;">minimized</strong>.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Return the <strong style="user-select: auto;">minimum</strong> possible <strong style="user-select: auto;">maximum working time</strong> of any assignment. </em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> jobs = [3,2,3], k = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> By assigning each person one job, the maximum time is 3.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> jobs = [1,2,4,7,8], k = 2
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong> Assign the jobs the following way:
Worker 1: 1, 2, 8 (working time = 1 + 2 + 8 = 11)
Worker 2: 4, 7 (working time = 4 + 7 = 11)
The maximum working time is 11.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= jobs.length &lt;= 12</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= jobs[i] &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
</ul>
</div>