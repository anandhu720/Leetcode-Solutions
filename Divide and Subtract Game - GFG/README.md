# Divide and Subtract Game
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Jon and Arya are playing a game. Rules of game as follows:<br style="user-select: auto;">
<strong style="user-select: auto;">·</strong>&nbsp;&nbsp;They have a single number <strong style="user-select: auto;">N</strong> initially.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">·</strong>&nbsp;&nbsp;&nbsp;Both will play an alternate move. Jon starts first.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">·</strong>&nbsp; &nbsp;Both will play each move optimally.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">·</strong>&nbsp;&nbsp;&nbsp;In each move, they can perform <strong style="user-select: auto;">only one of these operation</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1.&nbsp;Divide that number by 2, 3, 4 or 5 and take floor of result.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2.&nbsp;Subtract that number by 2, 3, 4 or 5.<br style="user-select: auto;">
<strong style="user-select: auto;">·&nbsp;&nbsp; </strong>If after making a move the number becomes 1, the player who made the move automatically loses the game.<br style="user-select: auto;">
<strong style="user-select: auto;">·</strong>&nbsp;&nbsp;&nbsp;When number becomes zero, the game will stop and the player who can't make a move loses the game.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">Jon</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">Jon will just subtract 3 from initial
number and win the game.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>6</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">Arya</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">Jon will divide by 3 and then in next step
Arya will subtract by 2 and win the game.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">divAndSub()</strong> which takes an Integer N as input and returns a string denoting who won the game.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>