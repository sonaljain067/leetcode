# Binary Tree to DLL
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;"></a></p><div style="margin: 14px 0px !important; user-select: auto;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">             <div class="col-md-12" style="cursor: pointer; background: 0% 0% no-repeat padding-box padding-box rgb(239, 248, 243); align-items: center; position: relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: rgb(51, 51, 51); user-select: auto;"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: 0% 0% no-repeat padding-box padding-box transparent; opacity: 1; margin: 0px 16px; user-select: auto;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true" style="user-select: auto;"></i> </div></a></div><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img alt="TreeToList" src="http://www.geeksforgeeks.org/wp-content/uploads/TreeToList.png" style="height: 242px; width: 432px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1
 &nbsp;&nbsp;&nbsp;/&nbsp; \
 &nbsp;&nbsp;3&nbsp;&nbsp;&nbsp; 2
<strong style="user-select: auto;">Output:
</strong>3 1 2 </span>
<span style="font-size: 18px; user-select: auto;">2 1 3 <strong style="user-select: auto;">
Explanation:</strong> DLL would be 3&lt;=&gt;1&lt;=&gt;2</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \
     20&nbsp;&nbsp; 30
 &nbsp; /&nbsp;&nbsp; \
 &nbsp;40&nbsp;&nbsp; 60
<strong style="user-select: auto;">Output:
</strong>40 20 60 10 30 </span>
<span style="font-size: 18px; user-select: auto;">30 10 60 20 40<strong style="user-select: auto;">
Explanation: </strong> DLL would be 
40&lt;=&gt;20&lt;=&gt;60&lt;=&gt;10&lt;=&gt;30.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't have to take input. Complete the function <strong style="user-select: auto;">bToDLL()&nbsp;</strong>that takes <strong style="user-select: auto;">root&nbsp;</strong>node of the tree as a parameter and returns the head of DLL . The driver code prints the DLL both ways.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(H).<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>H is the height of the tree and this space is used implicitly for the recursion stack.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ Number of nodes ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ Data of a node ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>