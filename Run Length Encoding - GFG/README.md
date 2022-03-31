# Run Length Encoding
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string, Your task is to&nbsp;&nbsp;complete the&nbsp;function <strong style="user-select: auto;">encode</strong> that returns the <strong style="user-select: auto;">run length encoded&nbsp;</strong>string for the given&nbsp;string.<br style="user-select: auto;">
<strong style="user-select: auto;">eg</strong>&nbsp;if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.<br style="user-select: auto;">
You are required to complete the function <strong style="user-select: auto;">encode</strong> that takes only one argument the string which is to be encoded and returns the encoded string.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>str = aaaabbbccc
<strong style="user-select: auto;">Output: </strong>a4b3c3<strong style="user-select: auto;">
Explanation: </strong>a repeated 4 times
consecutively b 3 times, c also 3
times.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>str = abbbcdddd
<strong style="user-select: auto;">Output: </strong>a1b3c1d4
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function&nbsp;<strong style="user-select: auto;">encode()&nbsp;</strong>which takes a character array as a input parameter and returns the&nbsp;encoded string.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N), N = length of given string.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=length of str&lt;=100</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>