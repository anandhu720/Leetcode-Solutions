# 3. Renaming Cities
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Some cities are going to be renamed and accordingly name of their railway stations will also change. Changing the name of railway station should also result in changed station code.&nbsp;Railways have an idea that station code should be the shortest prefix out of all railway stations renamed prior to this. If some city has same name, then&nbsp;prefix will be the name with suffix as the count of occurence of that city prior to this and including this, seperated with spaces.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given&nbsp;N&nbsp;renamed cities consisting of lowercase alphabets only. The task is to generate a&nbsp;station ID&nbsp;for all the stations.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
Cities[] = {shimla,safari,jammu,delhi,
                jammu,dehradun}
<strong style="user-select: auto;">Output:
</strong>s
sa
j
d
jammu 2
deh<strong style="user-select: auto;">
Explanation: </strong>Till&nbsp;shimla, no stations are there.
So, it's first character will be the unique
smallest prefix. For safari, first character of
shimla matches, so unique smallest prefix is&nbsp;sa
Similarly,&nbsp;j&nbsp;is smallest unique prefix for&nbsp;jammu
and&nbsp;d&nbsp;is for delhi. For last city&nbsp;jammu, we have
countered&nbsp;jammu before, and therefor no smallest
prefix is possible. So, we can generate its code
as jammu with suffix equal to the count of jammu,
i.e, 2. Smallest unique prefix is&nbsp;jammu2. Now,
delhi can be renamed as d, and dehradun can be
renamed as deh, since deh is the smallest non
matching prefix.&nbsp;</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete&nbsp;<strong style="user-select: auto;">check</strong>&nbsp;function which takes&nbsp;array of strings&nbsp;and&nbsp;number of string&nbsp;'n' as arguments and print the require answer in the function itself. You have to provide new line in the function itself.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= Word Length &lt;= 100</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N *&nbsp;WORD_LEN).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N * WORD_LEN).</span></p>
 <p style="user-select: auto;"></p>
            </div>