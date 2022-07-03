# 2. Search Query for Strings
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Trie is an efficient information retrieval data structure. Use this data structure to store strings and search strings. In this problem, you are given an array of strings (consisting of lowercase characters) <strong style="user-select: auto;">arr</strong>[] of size <strong style="user-select: auto;">N</strong>. Also, you will be given some queries <strong style="user-select: auto;">Q</strong> and for each query a string is given and your task is to check if the given string is in the string array or not.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> <strong style="user-select: auto;">Each word</strong> in the array of string can be of size <strong style="user-select: auto;">10<sup style="user-select: auto;">3</sup></strong>.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 8, Q = 3
words[] = {the,a,there,answer,any,by,bye
their}
Queries[] = {the,an,any}
<strong style="user-select: auto;">Output:
</strong>1
0
1<strong style="user-select: auto;">
Explanation: </strong>After inserting words in the
array,all the words will be stored. Now
searching for the will result in 1
(present), an will resultin 0(not present)
and any will result in 1 (present).</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete <strong style="user-select: auto;">insert </strong>and <strong style="user-select: auto;">search,&nbsp;</strong>return <strong style="user-select: auto;">true</strong>&nbsp;if the given string is present in the TRIE, else <strong style="user-select: auto;">false</strong> in search function.&nbsp; 1 is printed by the driver's code if the value returned is true, 0 otherwise.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).<br style="user-select: auto;">
N = length of the string</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= Q &lt;= 10<sup style="user-select: auto;">3</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>