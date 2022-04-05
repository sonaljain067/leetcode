# Root to leaf path sum
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary tree and an integer S, check whether there is root to leaf path with its sum as S.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
Tree = 
            1
          /   \
        2      3
S = 2</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong>0</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
There is no root to leaf path with sum 2.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
Tree = 
            1
          /   \
        2      3
S = 4</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 1</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
The sum of path from leaf node 3 to root 1 is 4.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task: &nbsp;</strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function<strong style="user-select: auto;"> hasPathSum()</strong> which takes <strong style="user-select: auto;">root </strong>node and target sum <strong style="user-select: auto;">S</strong> as input parameter and returns true if path exists otherwise it returns false.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(height of tree)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10^4<br style="user-select: auto;">
1 ≤ S ≤ 10^6</span></p>
 <p style="user-select: auto;"></p>
            </div>