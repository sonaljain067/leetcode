# Minimum number of deletions and insertions.
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings <strong style="user-select: auto;">str1</strong> and <strong style="user-select: auto;">str2</strong>. The task is to remove or insert the minimum number of characters from/in <strong style="user-select: auto;">str1</strong> so as to transform it into <strong style="user-select: auto;">str2</strong>. It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>str1 = "heap", str2 = "pea"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>2 deletions and 1 insertion</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">p</span></strong><span style="font-size: 18px; user-select: auto;"> and <strong style="user-select: auto;">h</strong> deleted from <strong style="user-select: auto;">heap</strong>. Then, <strong style="user-select: auto;">p</strong> is 
inserted at the beginning One thing to 
note, though <strong style="user-select: auto;">p</strong> was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, <strong style="user-select: auto;">p</strong> contributes one to the 
<strong style="user-select: auto;">deletion_count</strong> and one to the 
<strong style="user-select: auto;">insertion_count</strong>.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>str1 = "geeksforgeeks"
str2 = "geeks"
<strong style="user-select: auto;">Output: </strong>8
<strong style="user-select: auto;">Explanation: </strong>8 deletions</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or&nbsp;print anything. Your task is to complete the function <strong style="user-select: auto;">minOperations()&nbsp;</strong>which takes both strings as input parameter and returns the minimum number of operation required.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|str1|*|str2|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity: </strong>O(|str1|*|str2|</span><span style="font-size: 18px; user-select: auto;">)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ |str1|, |str2| ≤ 1000</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">All the characters are lower case English alphabets</span></p>
 <p style="user-select: auto;"></p>
            </div>