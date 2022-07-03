# 11. Rearrange characters
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string S such that it may contain&nbsp;repeated lowercase alphabets. Rearrange the characters in the&nbsp;string such that no two adjacent characters are same. </span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>S = geeksforgeeks
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong></span><span style="font-size: 18px; user-select: auto;">egeskerskegof can be one way of
rearranging the letters.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>S = bbbabaaacd
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation:&nbsp;</strong></span><span style="font-size: 18px; user-select: auto;">abababdcab can be one way of 
rearranging the letters.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Complete the function&nbsp;<strong style="user-select: auto;">rearrangeString()&nbsp;</strong>which takes string S as input parameter and&nbsp;returns the string after rearrangement.<br style="user-select: auto;">
If the characters are <strong style="user-select: auto;">successfully rearranged </strong>then the generated output will be&nbsp;<strong style="user-select: auto;">1</strong>&nbsp;else <strong style="user-select: auto;">0.</strong></span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity&nbsp;: </strong>O(<strong style="user-select: auto;">|</strong>S<strong style="user-select: auto;">|</strong>&nbsp;log <strong style="user-select: auto;">|</strong>S<strong style="user-select: auto;">|</strong>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space&nbsp;:</strong> O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">|</strong>S<strong style="user-select: auto;">|</strong> &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
String has only lowercase English alphabets.</span></p>
 <p style="user-select: auto;"></p>
            </div>