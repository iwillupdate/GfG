<h2><a href="https://www.geeksforgeeks.org/problems/relative-sorting4323/1">Sort according to an Array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two integer arrays <strong>A1[ ] </strong>and <strong>A2[ ] </strong>of size <strong>N</strong> and <strong>M</strong> respectively. Sort the first array <strong>A1[ ]&nbsp;</strong>such that all the relative positions of the elements in the first array are the same as the elements in the second array <strong>A2[ ]</strong>.<br>See example for better understanding.<br><strong>Note</strong>: If elements are repeated in the second array, consider their first occurance only.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre data-copier-init="true"><span style="font-size: 18px;"><strong>Input:
</strong>N = 11 
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
<strong>Output: 
</strong>2 2 1 1 8 8 3 5 6 7 9<strong>
Explanation: </strong>Array elements of A1[] are
sorted according to A2[]. So 2 comes first
then 1 comes, then comes 8, then finally 3
comes, now we append remaining elements in
sorted order.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre data-copier-init="true"><span style="font-size: 18px;"><strong>Input:
</strong>N = 11 
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {99, 22, 444, 56}
<strong>Output: 
</strong>1 1 2 2 3 5 6 7 8 8 9<strong>
Explanation: </strong>No A1[] elements are in A2[]
so we cannot sort A1[] according to A2[].
Hence we sort the elements in non-decreasing 
order.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>sortA1ByA2()</strong>&nbsp;which takes the array <strong>A1[ ]</strong>, array <strong>A2[ ]</strong> and their respective size <strong>N</strong> and <strong>M</strong> as input parameters&nbsp;and returns the&nbsp;sorted array <strong>A1[ ] </strong>such that the relative positions of the elements in <strong>A1[ ]</strong> are same as the elements in <strong>A2[ ]</strong>. For the elements not present in <strong>A2[ ]</strong> but in <strong>A1[ ]</strong>, it appends them at the last in&nbsp;<strong>increasing&nbsp;</strong>order.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 ≤ N, M&nbsp;≤ 10<sup>6</sup><br>1 ≤ A1[i], A2[i] ≤&nbsp;10<sup>6</sup> </span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Hash</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;