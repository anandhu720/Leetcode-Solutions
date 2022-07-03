# 11. Reach a given score
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Consider a game where a player can score <strong style="user-select: auto;">3</strong> or <strong style="user-select: auto;">5</strong> or <strong style="user-select: auto;">10</strong> points in a move. Given a total score <strong style="user-select: auto;">n</strong>, find the number of distinct combinations&nbsp;to reach the given score.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 8
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation:</strong>when n = 8,{3,5} and {5,3}
are the two possible permutations but
these represent the&nbsp;same combination.
Hence output is 1.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 20
<strong style="user-select: auto;">Output: </strong>4<strong style="user-select: auto;">
Explanation:</strong>When n = 20, {10,10},
{5,5,5,5},{10,5,5} and {3,3,3,3,3,5}
are different possible permutations.
Hence output will be 4.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete <strong style="user-select: auto;">count()&nbsp;</strong>function which takes N as an argument and returns the&nbsp;<strong style="user-select: auto;">number of ways/combinations</strong> to reach the given score.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ n ≤ 1000</span></p>
 <p style="user-select: auto;"></p>
            </div>