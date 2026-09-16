# 2347. Count Nodes Equal to Average of Subtree

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 86.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 15.9 MB |
| Submission ID | 2137817358 |
| Solved On | 10 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/

---

<details>
<summary>Show problem statement</summary>

<p>Given the <code>root</code> of a binary tree, return <em>the number of nodes where the value of the node is equal to the <strong>average</strong> of the values in its <strong>subtree</strong></em>.</p>

<p><strong>Note:</strong></p>

<ul>
	<li>The <strong>average</strong> of <code>n</code> elements is the <strong>sum</strong> of the <code>n</code> elements divided by <code>n</code> and <strong>rounded down</strong> to the nearest integer.</li>
	<li>A <strong>subtree</strong> of <code>root</code> is a tree consisting of <code>root</code> and all of its descendants.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/03/15/image-20220315203925-1.png" style="width: 300px; height: 212px;" />
<pre>
<strong>Input:</strong> root = [4,8,5,0,1,null,6]
<strong>Output:</strong> 5
<strong>Explanation:</strong> 
For the node with value 4: The average of its subtree is (4 + 8 + 5 + 0 + 1 + 6) / 6 = 24 / 6 = 4.
For the node with value 5: The average of its subtree is (5 + 6) / 2 = 11 / 2 = 5.
For the node with value 0: The average of its subtree is 0 / 1 = 0.
For the node with value 1: The average of its subtree is 1 / 1 = 1.
For the node with value 6: The average of its subtree is 6 / 1 = 6.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/03/26/image-20220326133920-1.png" style="width: 80px; height: 76px;" />
<pre>
<strong>Input:</strong> root = [1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> For the node with value 1: The average of its subtree is 1 / 1 = 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 1000]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Tree
- Depth-First Search
- Binary Tree

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. What information do we need to calculate the average? We need the sum of the values and the number of values.
2. Create a recursive function that returns the size of a node’s subtree, and the sum of the values of its subtree.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Maximum Average Subtree](https://leetcode.com/problems/maximum-average-subtree/) | 🟡 Medium |
| [Insufficient Nodes in Root to Leaf Paths](https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/) | 🟡 Medium |
| [Count Nodes Equal to Sum of Descendants](https://leetcode.com/problems/count-nodes-equal-to-sum-of-descendants/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 15.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
