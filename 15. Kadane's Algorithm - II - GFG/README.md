# 15. Kadane's Algorithm - II
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><div class="problemQuestion" style="user-select: auto;">
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array <strong style="user-select: auto;">arr</strong> of size <strong style="user-select: auto;">sizeOfArr</strong>. You need to find the <strong style="user-select: auto;">maximum sum</strong> in the array provided that you cannot sum neighboring elements or adjacent elements.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>sizeOfArr = 4
arr[] = {4,5,6,7,8}
<strong style="user-select: auto;">Output: </strong>18<strong style="user-select: auto;">
Explanation:</strong>The given elements are 4 5 6 7 8
For 4, the maximum sum will be 4 as no
element other than 4 from index 0 to 0
For 5, the maximum sum will be 5 as we cannot
add 4 and 5(neighboring elements).
For 6, the maximum sum will be 10 as we can
add 6 and 4.
For 7, the maximum sum will be 12 as we can
add 7 and 5.
For 8, the maximum sum will be 18 as we can
add 4 and 6 and 8.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>sizeOfArr = 5
arr[] = {-9,-8,8,3,-4}
<strong style="user-select: auto;">Output: </strong>8</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a <strong style="user-select: auto;">function </strong>problem. You only need to complete the function <strong style="user-select: auto;">maximumSum()&nbsp;</strong>that takes <strong style="user-select: auto;">array </strong>and <strong style="user-select: auto;">sizeOfArray </strong>and <strong style="user-select: auto;">returns the maximum sum</strong> of the array provided that you cannot sum neighboring elements.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ sizeOfArr ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">3</sup> ≤ arr<sub style="user-select: auto;">i</sub> ≤ 10<sup style="user-select: auto;">3</sup></span></p>
</div>
 <p style="user-select: auto;"></p>
            </div>