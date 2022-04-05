# Implement stack using array
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Write a program to implement a Stack&nbsp;using Array. Your task is to use the class as shown in the comments in the code editor&nbsp;and complete&nbsp;the functions push() and pop() to implement a stack.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1</strong>:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
push(2)
push(3)
pop()
push(4) 
pop()
<strong style="user-select: auto;">Output</strong>: 3, 4
<strong style="user-select: auto;">Explanation</strong>: 
push(2)    the stack will be {2}
push(3)    the stack will be {2 3}
pop()      poped element will be 3,
&nbsp;          the stack will be {2}
push(4)    the stack will be {2 4}
pop()      poped element will be 4</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
pop()
push(4)
push(5)
pop()
<strong style="user-select: auto;">Output</strong>: -1, 5</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You are required to complete two methods&nbsp;<strong style="user-select: auto;">push() and pop(). </strong>The push() method&nbsp;takes one argument, an integer <strong style="user-select: auto;">'x'</strong>&nbsp;to be pushed into the stack and&nbsp;<strong style="user-select: auto;">pop()</strong>&nbsp;which returns an integer present at the top and popped out from the stack. If the stack is empty then return <strong style="user-select: auto;">-1</strong> from the pop() method.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(1) for both&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">pop()</strong>.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auixilliary Space </strong>: O(1) for both&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">pop()</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Q &lt;= 100<br style="user-select: auto;">
1 &lt;= x &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>