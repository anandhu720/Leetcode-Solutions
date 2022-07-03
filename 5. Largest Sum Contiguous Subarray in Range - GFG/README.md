# 5. Largest Sum Contiguous Subarray in Range
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an Array <strong style="user-select: auto;">arr</strong> of size <strong style="user-select: auto;">N</strong>, and <strong style="user-select: auto;">Q</strong> queries of two types <strong style="user-select: auto;">1</strong> and <strong style="user-select: auto;">2</strong>. In </span><span style="font-size: 18px; user-select: auto;">the type-1</span><span style="font-size: 18px; user-select: auto;"> query, you will be given a range (left, right) and </span><span style="font-size: 18px; user-select: auto;">the task</span><span style="font-size: 18px; user-select: auto;"> is to print the <a href="https://www.geeksforgeeks.org/maximum-subarray-sum-given-range/" rel="noopener" target="_blank" style="user-select: auto;">Largest sum Contiguous Subarray</a> from the Array arr between the range (left, right). For type 2 queries, you will be given </span><span style="font-size: 18px; user-select: auto;">the index</span><span style="font-size: 18px; user-select: auto;">, an integer value, you need to update value to </span><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">arr</span></strong><strong style="user-select: auto;"><sub style="user-select: auto;">index</sub></strong>.</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 8, Q = 3
arr[] = {-2,-3,4,-1,-2,1,5,-3}
Queries: query(5,8)
&nbsp;        update(1,11)
&nbsp;        query(1,3)
<strong style="user-select: auto;">Output:
</strong>6
12<strong style="user-select: auto;">
Explanation: </strong>In the first query, the task
is to print the largest sum of contiguous
subarray in range 5-8, which consists of
{-2, 1, 5, -3}. The largest sum is 6,
which is formed by the subarray {1, 5}.
In the second query, an update operation
is done, which updates a[1] to 10, hence
the sequence is {10,-3,4,-1,-2,1,5,-3}. 
In the third query, the task is to print 
the largest sum of a contiguous subarray
in range 1-3, which consists of {10,-3,4}
The largest sum is 11, which is formed by
the subarray {10, -3, 4}.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Your task is to complete the function <strong style="user-select: auto;">query()</strong> that should return the Largest Sum Contiguous Subarray in the given range and <strong style="user-select: auto;">update() </strong>that should update the value in the array. A Tree has been already implemented for you(see driver's code)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= Q &lt;= 500<br style="user-select: auto;">
-10<sup style="user-select: auto;">3 </sup>&lt;= A[] &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= left,right &lt;= N&nbsp;<br style="user-select: auto;">
1 &lt;= Index &lt;= N</span></p>
 <p style="user-select: auto;"></p>
            </div>