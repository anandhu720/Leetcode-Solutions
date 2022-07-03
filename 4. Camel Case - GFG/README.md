# 4. Camel Case
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a dictionary of words <strong style="user-select: auto;">dict </strong>where each word follows CamelCase notation, print all words in the dictionary that match with a given <strong style="user-select: auto;">pattern </strong>consisting of uppercase characters only.<br style="user-select: auto;">
<em style="user-select: auto;">CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. Common examples include: “PowerPoint” and “WikiPedia”, “GeeksForGeeks”, “CodeBlocks”, etc.</em><br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>The order should be such that the output strings should be sorted by the lexicographic order of their abbreviations. For strings with same abbreviations the strings should be sorted by the usual lexicographic order. So, if Output Strings are Hi and HelloWorld, Hi should come first as H lexiographically is smaller than HW.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">n = 8
dict[] = {Hi,Hello,HelloWorld,HiTech
HiGeek,HiTechWorld,HiTechCity,HiTechLab}
pattern = HA
<strong style="user-select: auto;">Output: </strong>No match found</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">n = 3
dict[]={WelcomeGeek,WelcomeToGeeksForGeeks
GeeksForGeeks}
pattern = WTG
<strong style="user-select: auto;">Output: </strong>WelcomeToGeeksForGeeks<strong style="user-select: auto;">
Explanation: </strong>WTG occurs in
<strong style="user-select: auto;">W</strong>elcome<strong style="user-select: auto;">T</strong>o<strong style="user-select: auto;">G</strong>eeksForGeeks.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete <strong style="user-select: auto;">findAllWords()&nbsp;</strong>function and print as mentioned. If the pattern is not found, print "<strong style="user-select: auto;">No match found"</strong> (without quotes) in the function itself. The new line is provided by the driver code.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N * WORD_LEN).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N * WORD_LEN).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 100<br style="user-select: auto;">
1 &lt;= length of pattern &lt;= length of string &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>