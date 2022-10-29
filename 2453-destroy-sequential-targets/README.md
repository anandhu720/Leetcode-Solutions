<h2><a href="https://leetcode.com/problems/destroy-sequential-targets/">2453. Destroy Sequential Targets</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">nums</code> consisting of positive integers, representing targets on a number line. You are also given an integer <code style="user-select: auto;">space</code>.</p>

<p style="user-select: auto;">You have a machine which can destroy targets. <strong style="user-select: auto;">Seeding</strong> the machine with some <code style="user-select: auto;">nums[i]</code> allows it to destroy all targets with values that can be represented as <code style="user-select: auto;">nums[i] + c * space</code>, where <code style="user-select: auto;">c</code> is any non-negative integer. You want to destroy the <strong style="user-select: auto;">maximum</strong> number of targets in <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">minimum value</strong> of </em><code style="user-select: auto;">nums[i]</code><em style="user-select: auto;"> you can seed the machine with to destroy the maximum number of targets.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,7,8,1,1,5], space = 2
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> If we seed the machine with nums[3], then we destroy all targets equal to 1,3,5,7,9,... 
In this case, we would destroy 5 total targets (all except for nums[2]). 
It is impossible to destroy more than 5 targets, so we return nums[3].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,5,2,4,6], space = 2
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Seeding the machine with nums[0], or nums[3] destroys 3 targets. 
It is not possible to destroy more than 3 targets.
Since nums[0] is the minimal integer that can destroy 3 targets, we return 1.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [6,2,5], space = 100
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Whatever initial seed we select, we can only destroy 1 target. The minimal seed is nums[1].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= space &lt;=&nbsp;10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>