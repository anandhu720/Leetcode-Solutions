# Word Ladder II
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two distinct words <strong style="user-select: auto;">startWord</strong> and <strong style="user-select: auto;">targetWord</strong>, and a list&nbsp;denoting <strong style="user-select: auto;">wordList</strong>&nbsp;of unique words of equal lengths. </span> <span style="font-size: 18px; user-select: auto;">Find all shortest transformation sequence(s) from startWord to targetWord. You can return them in any order possible.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Keep&nbsp;the following conditions in mind:</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A word can only consist of lowercase characters.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Only one letter can be changed in each transformation.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Each transformed word must exist in the wordList including the targetWord.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">startWord may or may not be part of the&nbsp;wordList.</span><span style="font-size: 18px; user-select: auto;"> </span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Return an empty list if there is no such transformation sequence.</span></li>
</ul>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The first part of this problem can be found <a href="https://practice.geeksforgeeks.org/problems/word-ladder/1/" target="_blank" style="user-select: auto;">here</a>.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">startWord = "der", targetWord = "dfs",
wordList = {"des","der","dfr","dgt","dfs"}
<strong style="user-select: auto;">Output:
</strong>der dfr dfs
der des dfs
<strong style="user-select: auto;">Explanation:
</strong>The length of the smallest transformation is 3.
And the following are the only two ways to get
to targetWord:-
"der" -&gt; "des" -&gt; "dfs".</span>
<span style="font-size: 18px; user-select: auto;">"der" -&gt; "dfr" -&gt; "dfs".</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>startWord = "gedk", targetWord = "geek", 
wordList = {"geek", "gefk"}
<strong style="user-select: auto;">Output:
</strong>"gedk" -&gt; "geek"</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything, Your task is to complete the function&nbsp;findSequences<strong style="user-select: auto;">()&nbsp;</strong>which takes startWord, targetWord and wordList as input parameter and returns a list of list of strings of the shortest transformation sequence from startWord to targetWord.<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>You don't have to return -1 in case of no possible sequence. Just return the Empty List.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Compelxity:&nbsp;</strong>O(N*(logN * M * 26))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N * M) where N = length of wordList and M = |wordList<sub style="user-select: auto;">i</sub>|</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 100<br style="user-select: auto;">
1 ≤ M ≤ 10</span></p>
 <p style="user-select: auto;"></p>
            </div>