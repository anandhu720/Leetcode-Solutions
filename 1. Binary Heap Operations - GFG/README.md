# 1. Binary Heap Operations
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A <strong style="user-select: auto;">binary heap</strong> is a Binary Tree with the following properties:<br style="user-select: auto;">
<strong style="user-select: auto;">1)</strong> Its a <em style="user-select: auto;">complete tree</em><strong style="user-select: auto;"> </strong>(All levels are completely filled except possibly the last level and the last level has all keys as left as possible). This property of Binary Heap makes them suitable to be stored in an array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">2)</strong> A Binary Heap is either <strong style="user-select: auto;">Min Heap</strong> or <strong style="user-select: auto;">Max Heap</strong>. In a <em style="user-select: auto;">Min Binary Heap</em>, the key at the&nbsp;<em style="user-select: auto;">root</em> must be <em style="user-select: auto;">minimum</em><strong style="user-select: auto;"> </strong>among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree. Max Binary Heap is similar to MinHeap.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an empty Binary Min Heap and some queries and your task is to implement the three methods <strong style="user-select: auto;">insertKey, &nbsp;deleteKey, </strong>&nbsp;and&nbsp;<strong style="user-select: auto;">extractMin </strong>on&nbsp;the Binary Min Heap and call them as per the query given below:<br style="user-select: auto;">
<strong style="user-select: auto;">1) </strong><em style="user-select: auto;">1 &nbsp;x</em> &nbsp;(a query of this type means to insert an element in the min-heap with value x&nbsp;)<br style="user-select: auto;">
<strong style="user-select: auto;">2)</strong> <em style="user-select: auto;">2 &nbsp;x</em> &nbsp;(a query of this type means to remove an element at position x from the min-heap)<br style="user-select: auto;">
<strong style="user-select: auto;">3)</strong><strong style="user-select: auto;"> </strong><em style="user-select: auto;">3</em> &nbsp;(a query like this removes&nbsp;the min element from the min-heap and prints it&nbsp;).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>Q = 7
<strong style="user-select: auto;">Queries:</strong>
insertKey(4)
insertKey(2)
extractMin()
insertKey(6)
deleteKey(0)
extractMin()
extractMin()
<strong style="user-select: auto;">Output: </strong>2 6 - 1<strong style="user-select: auto;">
Explanation: </strong>In the first test case for
query&nbsp;
insertKey(4) the heap will have &nbsp;{4}&nbsp;&nbsp;
insertKey(2) the heap will be {2 4}
extractMin()&nbsp;removes min element from 
&nbsp;            heap ie 2 and prints it
&nbsp;            now heap is {4}&nbsp;
insertKey(6)&nbsp;inserts 6 to heap now heap
&nbsp;            is {4 6}
deleteKey(0)&nbsp;delete element at position 0
             of the heap,now heap is {6}
extractMin() remove min element from heap
             ie 6 and prints it&nbsp;&nbsp;now the
&nbsp;            heap is empty
extractMin() since the heap is empty thus
             no min element exist so -1
&nbsp;            is printed.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>Q = 5
Queries:
insertKey(8)
insertKey(9)
deleteKey(1)
extractMin()
extractMin()
<strong style="user-select: auto;">Output: </strong>8 -1</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You are required to complete the 3 methods <strong style="user-select: auto;">insertKey()</strong> which take one argument the value to be inserted, <strong style="user-select: auto;">deleteKey()</strong> which takes one argument the position from where the element is to be deleted and <strong style="user-select: auto;">extractMin()</strong> which returns the minimum element in the heap(-1 if the heap is empty)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Q*Log(size of Heap) ).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">Q</strong> &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">x</strong> &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>