# Print Anagrams Together
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: The finial output will be in&nbsp;lexicographic order.</span></strong></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
words[] = {act,god,cat,dog,tac}
<strong style="user-select: auto;">Output:
</strong>act cat tac<strong style="user-select: auto;"> 
</strong>god dog<strong style="user-select: auto;">
Explanation:
</strong>There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
words[] = {no,on,is}
<strong style="user-select: auto;">Output: 
</strong>no on
is<strong style="user-select: auto;">
Explanation:
</strong>There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2.&nbsp;</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">Anagrams()</strong> that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*|S|*log|S|), where |S| is the length of the strings.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N*|S|), where |S| is the length of the strings.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=N&lt;=100</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1&lt;=|S|&lt;=10</span></p>
 <p style="user-select: auto;"></p>
            </div>