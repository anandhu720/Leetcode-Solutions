# 22. Merge Sort on Doubly Linked List
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given Pointer/Reference to the head of a doubly linked list of N nodes, the task is to <strong style="user-select: auto;">Sort the given doubly linked list using Merge Sort&nbsp;</strong>in both <strong style="user-select: auto;">non-decreasing</strong> and <strong style="user-select: auto;">non-increasing</strong> order.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 8
value[] = {7,3,5,2,6,4,1,8}
<strong style="user-select: auto;">Output:
</strong>1 2 3 4 5 6 7 8
8 7 6 5 4 3 2 1<strong style="user-select: auto;">
Explanation: </strong>After sorting the given
linked list in both ways, resultant
matrix will be as given in the first
two line of output, where first line
is the output for non-decreasing
order and next line is for non-
increasing order.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
value[] = {9,15,0,-1,0}
<strong style="user-select: auto;">Output:</strong>
-1 0 0 9 15
15 9 0 0 -1<strong style="user-select: auto;">
Explanation: </strong>After sorting the given
linked list in both ways, the
resultant list will be -1 0 0 9 15
in non-decreasing order and 
15 9 0 0 -1 in non-increasing order.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">sortDoubly</strong>() which sorts the doubly linked list. The <strong style="user-select: auto;">printing </strong>is done <strong style="user-select: auto;">automatically </strong>by the<strong style="user-select: auto;"> driver code</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>