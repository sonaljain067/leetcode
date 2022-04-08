<h2><a href="https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/">1985. Find the Kth Largest Integer in the Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of strings <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>. Each string in <code style="user-select: auto;">nums</code> represents an integer without leading zeros.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the string that represents the </em><code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"><strong style="user-select: auto;"> largest integer</strong> in </em><code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong>: Duplicate numbers should be counted distinctly. For example, if <code style="user-select: auto;">nums</code> is <code style="user-select: auto;">["1","2","2"]</code>, <code style="user-select: auto;">"2"</code> is the first largest integer, <code style="user-select: auto;">"2"</code> is the second-largest integer, and <code style="user-select: auto;">"1"</code> is the third-largest integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["3","6","7","10"], k = 4
<strong style="user-select: auto;">Output:</strong> "3"
<strong style="user-select: auto;">Explanation:</strong>
The numbers in nums sorted in non-decreasing order are ["3","6","7","10"].
The 4<sup style="user-select: auto;">th</sup> largest integer in nums is "3".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["2","21","12","1"], k = 3
<strong style="user-select: auto;">Output:</strong> "2"
<strong style="user-select: auto;">Explanation:</strong>
The numbers in nums sorted in non-decreasing order are ["1","2","12","21"].
The 3<sup style="user-select: auto;">rd</sup> largest integer in nums is "2".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["0","0"], k = 2
<strong style="user-select: auto;">Output:</strong> "0"
<strong style="user-select: auto;">Explanation:</strong>
The numbers in nums sorted in non-decreasing order are ["0","0"].
The 2<sup style="user-select: auto;">nd</sup> largest integer in nums is "0".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i]</code> consists of only digits.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i]</code> will not have any leading zeros.</li>
</ul>
</div>