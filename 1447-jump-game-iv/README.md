# 1447. Jump Game IV

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 51.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 222 ms |
| Memory | 139.1 MB |
| Submission ID | 2192393512 |
| Solved On | 09 Nov 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/jump-game-iv/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array of&nbsp;integers <code>arr</code>, you are initially positioned at the first index of the array.</p>

<p>In one step you can jump from index <code>i</code> to index:</p>

<ul>
	<li><code>i + 1</code> where:&nbsp;<code>i + 1 &lt; arr.length</code>.</li>
	<li><code>i - 1</code> where:&nbsp;<code>i - 1 &gt;= 0</code>.</li>
	<li><code>j</code> where: <code>arr[i] == arr[j]</code> and <code>i != j</code>.</li>
</ul>

<p>Return <em>the minimum number of steps</em> to reach the <strong>last index</strong> of the array.</p>

<p>Notice that you can not jump outside of the array at any time.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [100,-23,-23,404,100,23,23,23,3,404]
<strong>Output:</strong> 3
<strong>Explanation:</strong> You need three jumps from index 0 --&gt; 4 --&gt; 3 --&gt; 9. Note that index 9 is the last index of the array.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [7]
<strong>Output:</strong> 0
<strong>Explanation:</strong> Start index is the last index. You do not need to jump.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [7,6,9,6,9,6,9,7]
<strong>Output:</strong> 1
<strong>Explanation:</strong> You can jump directly from index 0 to index 7 which is last index of the array.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>8</sup> &lt;= arr[i] &lt;= 10<sup>8</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Breadth-First Search

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Build a graph of n nodes where nodes are the indices of the array and edges for node i are nodes i+1, i-1, j where arr[i] == arr[j].
2. Start bfs from node 0 and keep distance. The answer is the distance when you reach node n-1.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Jump Game VII](https://leetcode.com/problems/jump-game-vii/) | 🟡 Medium |
| [Jump Game VIII](https://leetcode.com/problems/jump-game-viii/) | 🟡 Medium |
| [Maximum Number of Jumps to Reach the Last Index](https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 222 ms | 139.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
