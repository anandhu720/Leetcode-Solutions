<h2><a href="https://leetcode.com/problems/minimum-time-to-remove-all-cars-containing-illegal-goods/">2167. Minimum Time to Remove All Cars Containing Illegal Goods</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> binary string <code style="user-select: auto;">s</code> which represents a sequence of train cars. <code style="user-select: auto;">s[i] = '0'</code> denotes that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> car does <strong style="user-select: auto;">not</strong> contain illegal goods and <code style="user-select: auto;">s[i] = '1'</code> denotes that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> car does contain illegal goods.</p>

<p style="user-select: auto;">As the train conductor, you would like to get rid of all the cars containing illegal goods. You can do any of the following three operations <strong style="user-select: auto;">any</strong> number of times:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Remove a train car from the <strong style="user-select: auto;">left</strong> end (i.e., remove <code style="user-select: auto;">s[0]</code>) which takes 1 unit of time.</li>
	<li style="user-select: auto;">Remove a train car from the <strong style="user-select: auto;">right</strong> end (i.e., remove <code style="user-select: auto;">s[s.length - 1]</code>) which takes 1 unit of time.</li>
	<li style="user-select: auto;">Remove a train car from <strong style="user-select: auto;">anywhere</strong> in the sequence which takes 2 units of time.</li>
</ol>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> time to remove all the cars containing illegal goods</em>.</p>

<p style="user-select: auto;">Note that an empty sequence of cars is considered to have no cars containing illegal goods.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "<strong style="user-select: auto;"><u style="user-select: auto;">11</u></strong>00<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>0<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> 
One way to remove all the cars containing illegal goods from the sequence is to
- remove a car from the left end 2 times. Time taken is 2 * 1 = 2.
- remove a car from the right end. Time taken is 1.
- remove the car containing illegal goods found in the middle. Time taken is 2.
This obtains a total time of 2 + 1 + 2 = 5. 

An alternative way is to
- remove a car from the left end 2 times. Time taken is 2 * 1 = 2.
- remove a car from the right end 3 times. Time taken is 3 * 1 = 3.
This also obtains a total time of 2 + 3 = 5.

5 is the minimum time taken to remove all the cars containing illegal goods. 
There are no other ways to remove them with less time.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "00<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>0"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
One way to remove all the cars containing illegal goods from the sequence is to
- remove a car from the left end 3 times. Time taken is 3 * 1 = 3.
This obtains a total time of 3.

Another way to remove all the cars containing illegal goods from the sequence is to
- remove the car containing illegal goods found in the middle. Time taken is 2.
This obtains a total time of 2.

Another way to remove all the cars containing illegal goods from the sequence is to 
- remove a car from the right end 2 times. Time taken is 2 * 1 = 2. 
This obtains a total time of 2.

2 is the minimum time taken to remove all the cars containing illegal goods. 
There are no other ways to remove them with less time.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>