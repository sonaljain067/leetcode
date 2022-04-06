# Stock buy and sell
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The cost of stock on each day is given in an array <strong style="user-select: auto;">A[] </strong>of size<strong style="user-select: auto;"> N</strong>. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.</span></p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
N = 7
A[] = { 100, 180, 260, 310, 40, 535, 695 }</span>

<span style="font-size: 18px; user-select: auto;">Output:
(0 3) (4 6)</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation 1:</strong>
We can buy stock on day 0, 
and sell it on 3rd day, 
which will give us maximum profit.</span></pre>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
N = 10
A[] = {23, 13, 25, 29, 33, 19, 34, 45, 65, 67}</span>

<span style="font-size: 18px; user-select: auto;">Output:
(1 4) (5 9)</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">User Task:</strong><br style="user-select: auto;">
Complete&nbsp;<strong style="user-select: auto;">stockBuySell()</strong>&nbsp; function and print all the days with profit in a single line. And if there is no profit then print&nbsp;"<strong style="user-select: auto;">No Profit</strong>". You do not require to return since the function is void.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= T &lt;= 100<br style="user-select: auto;">
2 &lt;= N &lt;= 10</span><sup style="user-select: auto;"><span style="font-size: 15px; user-select: auto;">4</span></sup><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">0 &lt;= A</span><sub style="user-select: auto;">i</sub><span style="font-size: 18px; user-select: auto;"> &lt;= 10</span><sup style="user-select: auto;">4</sup></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> Output format is as follows - (buy_day&nbsp;sell_day) (buy_day&nbsp;sell_day)<br style="user-select: auto;">
For each input, the output should be in a single line.</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>