# 9. Level order traversal in spiral form
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Complete the function to find spiral order traversal of a tree. For below tree, function should return 1, 2, 3, 4, 5, 6, 7.<br style="user-select: auto;">
<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">&nbsp;<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/level.jpg" style="height: 290px; width: 539px; user-select: auto;" class="img-responsive"></strong></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1
 &nbsp;&nbsp; /&nbsp;&nbsp; \
 &nbsp;&nbsp;3&nbsp;&nbsp;&nbsp;&nbsp; 2
<strong style="user-select: auto;">Output:</strong>1 3 2<strong style="user-select: auto;">
</strong></span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;30
 &nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp; 40&nbsp;&nbsp;&nbsp;&nbsp; 60
<strong style="user-select: auto;">Output: </strong>10 20 30 60 40&nbsp;
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">findSpiral</strong>()&nbsp;which takes&nbsp;<strong style="user-select: auto;">root&nbsp;</strong>node as input parameter&nbsp;and returns&nbsp;the elements in spiral form of level order traversal as a list. The newline is automatically appended by the driver code.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
0 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= Data of a node &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>