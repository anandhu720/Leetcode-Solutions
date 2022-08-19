<h2><a href="https://leetcode.com/problems/reveal-cards-in-increasing-order/">950. Reveal Cards In Increasing Order</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">deck</code>. There is a deck of cards where every card has a unique integer. The integer on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> card is <code style="user-select: auto;">deck[i]</code>.</p>

<p style="user-select: auto;">You can order the deck in any order you want. Initially, all the cards start face down (unrevealed) in one deck.</p>

<p style="user-select: auto;">You will do the following steps repeatedly until all cards are revealed:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Take the top card of the deck, reveal it, and take it out of the deck.</li>
	<li style="user-select: auto;">If there are still cards in the deck then put the next top card of the deck at the bottom of the deck.</li>
	<li style="user-select: auto;">If there are still unrevealed cards, go back to step 1. Otherwise, stop.</li>
</ol>

<p style="user-select: auto;">Return <em style="user-select: auto;">an ordering of the deck that would reveal the cards in increasing order</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that the first entry in the answer is considered to be the top of the deck.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> deck = [17,13,11,2,3,5,7]
<strong style="user-select: auto;">Output:</strong> [2,13,3,11,5,17,7]
<strong style="user-select: auto;">Explanation:</strong> 
We get the deck in the order [17,13,11,2,3,5,7] (this order does not matter), and reorder it.
After reordering, the deck starts as [2,13,3,11,5,17,7], where 2 is the top of the deck.
We reveal 2, and move 13 to the bottom.  The deck is now [3,11,5,17,7,13].
We reveal 3, and move 11 to the bottom.  The deck is now [5,17,7,13,11].
We reveal 5, and move 17 to the bottom.  The deck is now [7,13,11,17].
We reveal 7, and move 13 to the bottom.  The deck is now [11,17,13].
We reveal 11, and move 17 to the bottom.  The deck is now [13,17].
We reveal 13, and move 17 to the bottom.  The deck is now [17].
We reveal 17.
Since all the cards revealed are in increasing order, the answer is correct.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> deck = [1,1000]
<strong style="user-select: auto;">Output:</strong> [1,1000]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= deck.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= deck[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">deck</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>