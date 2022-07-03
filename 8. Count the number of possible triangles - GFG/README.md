# 8. Count the number of possible triangles
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an unsorted array <strong style="user-select: auto;">arr[]&nbsp;</strong>of <strong style="user-select: auto;">n</strong> positive integers. Find the number of triangles that can be formed with three different array elements as lengths of three sides of triangles.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
n = 3
arr[] = {3, 5, 4}
<strong style="user-select: auto;">Output</strong>: 
1
<strong style="user-select: auto;">Explanation</strong>: 
A triangle is possible 
with all the elements 5, 3 and 4.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
n = 5
arr[] = {6, 4, 9, 7, 8}
<strong style="user-select: auto;">Output</strong>: 
10
<strong style="user-select: auto;">Explanation</strong>: 
There are 10 triangles
possible  with the given elements like
(6,4,9), (6,7,8),...</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:&nbsp;</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">This is a function problem. You only need to complete the function <strong style="user-select: auto;">findNumberOfTriangles</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">() </strong>that takes <strong style="user-select: auto;">arr[] </strong>and<strong style="user-select: auto;">&nbsp;n</strong> as input&nbsp;parameters and returns<strong style="user-select: auto;"> </strong>the count of total possible triangles.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n<sup style="user-select: auto;">2</sup>).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(1).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
3 &lt;= n &lt;= 10<sup style="user-select: auto;">3</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= arr[i] &lt;= 10</span><sup style="user-select: auto;">3</sup></p>
 <p style="user-select: auto;"></p>
            </div>