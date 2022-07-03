# 11. Swap Kth nodes from ends
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a singly linked list of size N, and an integer K.&nbsp;You need to swap the K<sup style="user-select: auto;">th</sup>&nbsp;node from the beginning and K<sup style="user-select: auto;">th</sup> node from the end of the linked list. Swap the nodes through the links. Do&nbsp;not change&nbsp;the content of the nodes.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4,  K = 1
value[] = {1,2,3,4}
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>Here K = 1, hence after
swapping the 1st node from the beginning
and end thenew list will be 4 2 3 1.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5,  K = 7
value[] = {1,2,3,4,5}
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>K &gt; N. Swapping is invalid. 
Return the head node as it is.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong>&nbsp;<br style="user-select: auto;">
You do not need to read input or print anything. The task is to complete the function&nbsp;<strong style="user-select: auto;">swapkthnode</strong>(), which has takes head of link list, N and K as input parameters<strong style="user-select: auto;">&nbsp;</strong>and&nbsp;returns the&nbsp;new head.<br style="user-select: auto;">
<strong style="user-select: auto;">The generated output will be 1 if you are able to complete your task.&nbsp;</strong></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxillary space Complexity:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= K &lt;= 10<sup style="user-select: auto;">3</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>