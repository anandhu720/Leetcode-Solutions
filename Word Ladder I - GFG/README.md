# Word Ladder I
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two distinct words <strong style="user-select: auto;">startWord</strong> and <strong style="user-select: auto;">targetWord</strong>, and a list&nbsp;denoting <strong style="user-select: auto;">wordList</strong>&nbsp;of unique words of equal lengths. Find the length of the shortest transformation sequence from startWord to targetWord.<br style="user-select: auto;">
Keep&nbsp;the following conditions in mind:</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A word can only consist of lowercase characters.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Only one letter can be changed in each transformation.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Each transformed word must exist in the wordList including the targetWord.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">startWord may or may not be part of the&nbsp;wordList.</span></li>
</ul>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The second part of this problem can be found <a href="https://practice.geeksforgeeks.org/problems/word-ladder-ii/1/" target="_blank" style="user-select: auto;">here</a>.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
wordList = {"des","der","dfr","dgt","dfs"}
startWord = "der", targetWord= "dfs",
<strong style="user-select: auto;">Output:
</strong>3
<strong style="user-select: auto;">Explanation:
</strong>The length of the smallest transformation
sequence from "der" to "dfs" is 3
i,e "der" -&gt; "dfr" -&gt; "dfs".
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
wordList = {"geek", "gefk"}
startWord = "gedk", targetWord= "geek", 
<strong style="user-select: auto;">Output:
</strong>2
<strong style="user-select: auto;">Explanation:
</strong>gedk -&gt; geek</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 3:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
wordList = {"poon", "plee", "same", "poie","plea","plie","poin"}
startWord = "toon", targetWord= "plea",
<strong style="user-select: auto;">Output: </strong>7 
<strong style="user-select: auto;">Explanation:
</strong>toon -&gt; poon -&gt; poin -&gt; poie -&gt; plie -&gt; plee -&gt; plea </span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything, Your task is to complete the function&nbsp;<strong style="user-select: auto;">wordLadderLength()&nbsp;</strong>which takes startWord, targetWord and wordList as input parameter and returns the&nbsp;length of the shortest transformation sequence from startWord to targetWord. If not possible return&nbsp;0.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Compelxity:&nbsp;</strong>O(N<sup style="user-select: auto;">2</sup>&nbsp;* M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N * M) where N = length of wordList and M = |wordList<sub style="user-select: auto;">i</sub>|</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 100<br style="user-select: auto;">
1 ≤ M ≤ 10</span></p>
 <p style="user-select: auto;"></p>
            </div>