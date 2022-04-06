# Binary Search in forest
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There are n trees in a forest. The heights of the trees is stored in array <strong style="user-select: auto;">tree[],&nbsp;</strong>where <strong style="user-select: auto;">tree[i]</strong>&nbsp;denotes the height of the&nbsp;<strong style="user-select: auto;">i<sup style="user-select: auto;">th</sup></strong>&nbsp;tree in the&nbsp;forest</span><span style="font-size: 18px; user-select: auto;">. If the&nbsp;<strong style="user-select: auto;">i<sup style="user-select: auto;">th</sup></strong>&nbsp;tree is cut at a height <strong style="user-select: auto;">H</strong>, then the&nbsp;wood collected is <strong style="user-select: auto;">tree[i] - H</strong>, provided&nbsp;<strong style="user-select: auto;">tree[i] &gt; H</strong>. If the total woods that needs to be collected is exactly equal to&nbsp;<strong style="user-select: auto;">k</strong>,&nbsp;find the height&nbsp;<strong style="user-select: auto;">H</strong> at which every tree should be cut (all trees have to be cut at the same height).&nbsp;If it is not possible then return&nbsp;<strong style="user-select: auto;">-1</strong>&nbsp;else return <strong style="user-select: auto;">H</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 5, k = 4
nums[] = {2, 3, 6, 2, 4}
<strong style="user-select: auto;">Output: </strong>3<strong style="user-select: auto;">
Explanation: </strong>Wood collected by cutting trees
at height 3 = 0 + 0 + (6-3) + 0 + (4-3) = 4
hence 3 is to be subtracted from all numbers.
Since 2 is lesser than 3, nothing gets
subtracted from it.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 6, k = 8
nums[] = {1, 7, 6, 3, 4, 7}
<strong style="user-select: auto;">Output: </strong>4<strong style="user-select: auto;">
</strong><strong style="user-select: auto;">Explanation: </strong>Wood collected by cutting trees
at height 4 = 0+(7-4)+(6-4)+0+0+(7-4) = 8</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Your task is to complete the function <strong style="user-select: auto;">find_height()</strong>. This function takes the array <strong style="user-select: auto;">tree[ ]</strong>, and the integers <strong style="user-select: auto;">n</strong> and <strong style="user-select: auto;">k</strong> as input parameters and returns the height at which trees have to be cut. If no positive integer value of height is possible, return <strong style="user-select: auto;">-1</strong>.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n&nbsp;log h)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:&nbsp;</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= tree[i] &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= k &lt;= 10<sup style="user-select: auto;">7</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>