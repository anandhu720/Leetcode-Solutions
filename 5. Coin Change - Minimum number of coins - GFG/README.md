# 5. Coin Change - Minimum number of coins
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an amount denoted by <strong style="user-select: auto;">value</strong>. You are also given an array of coins. The <strong style="user-select: auto;">array </strong>contains the<br style="user-select: auto;">
<strong style="user-select: auto;">denominations </strong>of the give coins. You need to find the <strong style="user-select: auto;">minimum number of coins </strong>to make the change for <strong style="user-select: auto;">value </strong>using the coins of given denominations. Also, keep in mind that you have <strong style="user-select: auto;">infinite supply</strong> of the coins.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">value = 5
numberOfCoins = 3
coins[] = {3,6,3}
<strong style="user-select: auto;">Output: </strong>Not Possible<strong style="user-select: auto;">
Explanation:</strong>We need to make the change for
value = 5 The denominations are {3,6,3}
It is certain that we cannot make 5 using
any of these coins.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">value = 10
numberOfCoins = 4
coins[] = {2 5 3 6}
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation:</strong>We need to make the change for
value = 10 The denominations are {2,5,3,6}
We can use two 5 coins to make 10. So
minimum coins are 2.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You only need to complete the function <strong style="user-select: auto;">minimumNumberOfCoins()&nbsp;</strong>that take array of coins, size of array, and value as parameters. You need to return the minimum number of coins required. If it is not possible to make the exact value out of the given coin denominations, return -1 ("Not Possible" will be printed by the driver's code in this case).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(number of coins * value).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(value)</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Constraints:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= value &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= numberOfCoins &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= coins<sub style="user-select: auto;">i</sub> &lt;= 1000</span></p>
 <p style="user-select: auto;"></p>
            </div>