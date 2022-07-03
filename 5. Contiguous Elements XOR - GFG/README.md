# 5. Contiguous Elements XOR
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array <strong style="user-select: auto;">arr</strong>[] of <strong style="user-select: auto;">N</strong> positive integers. This time you are supposed to choose numbers from a contiguous sub-sequence of the given array, so that <a href="https://www.geeksforgeeks.org/find-xor-of-two-number-without-using-xor-operator/" target="_blank" style="user-select: auto;"><strong style="user-select: auto;">BITWISE XOR</strong></a> of all the chosen numbers is maximum.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 4
arr[] = {8,1,2,12}
<strong style="user-select: auto;">Output: </strong>15<strong style="user-select: auto;">
Explanation: 1</strong>, <strong style="user-select: auto;">2</strong> and <strong style="user-select: auto;">12</strong> can be chosen
from the array as contiguous sub
sequence which given us maximum
XOR value equal to 15.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 4
arr[] = {1,2,3,4}
<strong style="user-select: auto;">Output: </strong>7<strong style="user-select: auto;">
Explanation: 3</strong> and <strong style="user-select: auto;">4</strong> from the array
can be chosen&nbsp; as contiguous sub
sequence which given us maximum XOR
value equal to 7.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete <strong style="user-select: auto;">maxSubarrayXOR&nbsp;</strong>function and return&nbsp;the maximum XOR value.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup> (Must be in range of 32 bits signed integer)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(NlogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space </strong>: O(N)</span></p>
 <p style="user-select: auto;"></p>
            </div>