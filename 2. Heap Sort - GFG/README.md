# 2. Heap Sort
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of size N. The task is to sort the array elements by completing functions <strong style="user-select: auto;">heapify</strong>() and <strong style="user-select: auto;">buildHeap</strong>() which are used to implement Heap Sort.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
arr[] = {4,1,3,9,7}
<strong style="user-select: auto;">Output:</strong>
1 3 4 7 9<strong style="user-select: auto;">
Explanation:
</strong>After sorting elements
using heap sort, elements will be
in order as 1,3,4,7,9.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 10
arr[] = {10,9,8,7,6,5,4,3,2,1}
<strong style="user-select: auto;">Output:</strong>
1 2 3 4 5 6 7 8 9 10<strong style="user-select: auto;">
Explanation:
</strong>After sorting elements
using heap sort, elements will be
in order as 1, 2,3,4,5,6,7,8,9,10.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task</strong> <strong style="user-select: auto;">:</strong><br style="user-select: auto;">
You don't have to read input or print anything. Your task is to complete the functions&nbsp;<strong style="user-select: auto;">heapify()</strong><em style="user-select: auto;">,&nbsp;</em><strong style="user-select: auto;">buildheap()</strong> and <strong style="user-select: auto;">heapSort() </strong>where heapSort() and buildheap() takes the array and it's size as input and heapify() takes the array, it's size and an index i as input. Complete and use these functions to sort the array using heap sort algorithm.<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>You don't have to return the sorted list. You need to sort the array "arr" in place.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N * Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 ≤ arr[i] ≤ 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>