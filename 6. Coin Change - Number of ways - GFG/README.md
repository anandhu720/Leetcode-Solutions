# 6. Coin Change - Number of ways
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You have an infinite supply of coins, each having some value. Find out the number of ways to use the coins to sum-up to a certain required value.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">value = 4
numberOfCoins = 3
coins[] = {1,2,3}
<strong style="user-select: auto;">Output: </strong>4<strong style="user-select: auto;">
Explanation: </strong>We need to make the change
for value = 4. The denominations are
{1,2,3} Change for 4 can be made:
1+1+1+1
1+1+2
1+3
2+2
So, as it is evident, we can do this in
4 ways.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">value = 10
numberOfCoins = 4
coins[] = {2,5,3,6}
<strong style="user-select: auto;">Output: </strong>5</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">This is a function problem where you've to complete the funcion <strong style="user-select: auto;">numberOfWays ()</strong>. You are given an amount denoted by <strong style="user-select: auto;">value</strong>. You are also given an array of coins. The array<strong style="user-select: auto;"> </strong>contains the <strong style="user-select: auto;">denominations </strong>of the given coins. You need to return the <strong style="user-select: auto;">number of ways</strong> you can make the change for <strong style="user-select: auto;">value </strong>using the coins of given denominations. Also, keep in mind that you have an&nbsp;<strong style="user-select: auto;">infinite supply</strong> of coins.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>&nbsp;Try not to editing the part of the code provided to you in the function. Just complete the function as it has been described.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Number of Coins * Value).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Value).</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Constraints:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= value &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= numberOfCoins &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= coins<sub style="user-select: auto;">i</sub> &lt;= 1000</span></p>
 <p style="user-select: auto;"></p>
            </div>