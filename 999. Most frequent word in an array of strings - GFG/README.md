# 999. Most frequent word in an array of strings
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr </strong>containing <strong style="user-select: auto;">N</strong> words consisting <strong style="user-select: auto;">of lowercase characters</strong>. Your task is to find the <strong style="user-select: auto;">most frequent</strong> word in the array. If <strong style="user-select: auto;">multiple </strong>words have same frequency, then print the<strong style="user-select: auto;"> word whose first occurence occurs last</strong> in the array as compared to the other strings with same frequency.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 3
arr[] = {geeks,for,geeks}
<strong style="user-select: auto;">Output: </strong>geeks<strong style="user-select: auto;">
Explanation: </strong>"geeks" comes 2 times.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 2
arr[] = {hello,world}
<strong style="user-select: auto;">Output: </strong>world<strong style="user-select: auto;">
Explanation: </strong>"hello" and "world" both
have 1 frequency. We print world as
its first occurence comes last in the
input array.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete<strong style="user-select: auto;">&nbsp;mostFrequentWord&nbsp;</strong>function which takes array of strings and its length as arguments and returns the most frequent word. The printing is done by the driver code.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N * WORD_LEN).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N * WORD_LEN).</span></p>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 50000<br style="user-select: auto;">
1 &lt;= |each string| &lt;= 50</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Sum of length of every string does not exceed&nbsp;5*10<sup style="user-select: auto;">5</sup></span></div>
 <p style="user-select: auto;"></p>
            </div>