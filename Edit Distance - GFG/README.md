# Edit Distance
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings <strong style="user-select: auto;">s</strong>&nbsp;and <strong style="user-select: auto;">t. </strong>Return the minimum number of operations required to convert <strong style="user-select: auto;">s&nbsp;</strong>to <strong style="user-select: auto;">t</strong>.<br style="user-select: auto;">
The possible operations are permitted:</span></p>

<ol style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Insert a character at any position of the string.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Remove any character from the string.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Replace any character from the string with any other character.</span></li>
</ol>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
s = "geek", t = "gesek"
<strong style="user-select: auto;">Output:</strong>&nbsp;1
<strong style="user-select: auto;">Explanation: </strong>One operation is required 
inserting 's' between two 'e's of str1.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>
s = "gfg", t = "gfg"
<strong style="user-select: auto;">Output: </strong>
0
<strong style="user-select: auto;">Explanation: </strong>Both strings are same.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or&nbsp;print anything. Your task is to complete the function <strong style="user-select: auto;">editDistance()&nbsp;</strong>which takes strings s and t as input parameters and returns the minimum number of operation to convert the string&nbsp;<strong style="user-select: auto;">s</strong>&nbsp;to&nbsp;string<strong style="user-select: auto;">&nbsp;</strong><strong style="user-select: auto;">t</strong>.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|s|*|t|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(|s|*|t|)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ Length of both strings ≤ 100<br style="user-select: auto;">
Both&nbsp;the strings are in&nbsp;lowercase.</span></p>
 <p style="user-select: auto;"></p>
            </div>