# Merge Sort
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5
arr[] = {4 1 3 9 7}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:
</strong>1 3 4 7 9</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 10
arr[] = {10 9 8 7 6 5 4 3 2 1}
<strong style="user-select: auto;">Output:
</strong>1 2 3 4 5 6 7 8 9 10</span></pre>

<div style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to take the input or print anything. Your task is to complete the function <strong style="user-select: auto;">merge()</strong> which takes arr[], l, m, r&nbsp;as its input parameters and modifies&nbsp;arr[] in-place such that it is sorted from position l to position r, and function <strong style="user-select: auto;">mergeSort()</strong> which uses merge() to sort the array in ascending order using merge sort algorithm.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(nlogn)&nbsp;</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n)</span></div>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>