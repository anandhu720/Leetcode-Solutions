# 16. Rotate a Linked List
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a singly linked list of size <strong style="user-select: auto;">N</strong>. The task is to <strong style="user-select: auto;">left-shift</strong> the linked list by <strong style="user-select: auto;">k</strong> nodes, where <strong style="user-select: auto;">k</strong> is a given positive integer smaller than or equal to length of the linked list. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
<strong style="user-select: auto;">Output: </strong>8 9 2 4 7<strong style="user-select: auto;">
Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Rotate 1:&nbsp;</strong>4 -&gt; 7 -&gt; 8 -&gt; 9 -&gt; 2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Rotate 2:</strong>&nbsp;7&nbsp;-&gt; 8&nbsp;-&gt; 9&nbsp;-&gt; 2&nbsp;-&gt; 4</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Rotate 3:</strong>&nbsp;8&nbsp;-&gt; 9&nbsp;-&gt; 2&nbsp;-&gt; 4&nbsp;-&gt; 7</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 8
value[] = {1, 2, 3, 4, 5, 6, 7, 8}
k = 4
<strong style="user-select: auto;">Output: </strong>5 6 7 8 1 2 3 4</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">rotate</strong>() which takes a&nbsp;<strong style="user-select: auto;">head </strong>reference as the <strong style="user-select: auto;">first argument </strong>and <strong style="user-select: auto;">k</strong> as the <strong style="user-select: auto;">second argument,&nbsp;</strong>and returns the head of the rotated linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= k &lt;= N</span></p>
 <p style="user-select: auto;"></p>
            </div>