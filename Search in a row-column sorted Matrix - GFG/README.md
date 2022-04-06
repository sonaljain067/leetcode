# Search in a row-column sorted Matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a matrix of size&nbsp;n x m, where every row and column is<strong style="user-select: auto;"> sorted in increasing order</strong>, and a number <strong style="user-select: auto;">x.</strong>&nbsp;Find whether&nbsp;element x&nbsp;is present in the matrix or not.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
n = 3, m = 3, x = 62
matrix[][] = {{ 3, 30, 38},
&nbsp;             {36, 43, 60},
&nbsp;             {40, 51, 69}}
<strong style="user-select: auto;">Output</strong>: 0
<strong style="user-select: auto;">Explanation</strong>:
62 is not present in the matrix, 
so output is 0.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
n = 1, m = 6, x = 55
matrix[][] = {{18, 21, 27, 38, 55, 67}}
<strong style="user-select: auto;">Output</strong>: 1
<strong style="user-select: auto;">Explanation</strong>: 55 is present in the matrix.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">search()</strong> that takes <strong style="user-select: auto;">n, m, x, </strong>and <strong style="user-select: auto;">matrix[][]</strong>&nbsp;as input parameters and <strong style="user-select: auto;">returns a boolean value.</strong> True&nbsp;if x is present in the matrix and false&nbsp;if it is not present.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N + M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N, M &lt;= 1000<br style="user-select: auto;">
1 &lt;= mat[][] &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= X &lt;= 1000</span></p>
 <p style="user-select: auto;"></p>
            </div>