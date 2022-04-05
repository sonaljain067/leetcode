# Flattening a Linked List
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:<br style="user-select: auto;">
(i) a<strong style="user-select: auto;"> next </strong>pointer to the next node,<br style="user-select: auto;">
(ii) a<strong style="user-select: auto;">&nbsp;bottom</strong>&nbsp;pointer&nbsp;to a linked list where this node is head.<br style="user-select: auto;">
Each of the&nbsp;sub-linked-list is in sorted order.<br style="user-select: auto;">
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order.&nbsp;</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> The flattened list will be printed using the bottom pointer instead of next pointer.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>5 -&gt; 10 -&gt; 19 -&gt; 28
|     |     |     | 
7     20    22   35
|           |     | 
8          50    40
|                 | 
30               45<strong style="user-select: auto;">
Output: </strong>&nbsp;5-&gt; 7-&gt; 8- &gt; 10 -&gt; 19-&gt; 20-&gt;
22-&gt; 28-&gt; 30-&gt; 35-&gt; 40-&gt; 45-&gt; 50.
<strong style="user-select: auto;">Explanation</strong>:
The resultant linked lists has every 
node in a single level.<strong style="user-select: auto;">
</strong>(<strong style="user-select: auto;">Note: </strong>| represents the bottom pointer.)</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
5 -&gt; 10 -&gt; 19 -&gt; 28
|          |                
7          22   
|          |                 
8          50 
|                           
30              
<strong style="user-select: auto;">Output:</strong> 5-&gt;7-&gt;8-&gt;10-&gt;19-&gt;22-&gt;28-&gt;30-&gt;50
<strong style="user-select: auto;">Explanation:</strong>
The resultant linked lists has every
node in a single level.

(<strong style="user-select: auto;">Note: </strong>| represents the bottom pointer.)</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Complete the function <strong style="user-select: auto;">flatten()</strong></span><span style="font-size: 18px; user-select: auto;"> that takes the&nbsp;<strong style="user-select: auto;">head </strong>of the linked list as input&nbsp;parameter<strong style="user-select: auto;"> </strong>and returns the head of flattened link list.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*M*M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">0 &lt;= N &lt;= 50<br style="user-select: auto;">
1 &lt;=<strong style="user-select: auto;"> M<sub style="user-select: auto;">i</sub> </strong>&lt;= 20<br style="user-select: auto;">
1 &lt;= Element of linked list &lt;= 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>