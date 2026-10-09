# 1428. Jump Game III

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 70.4% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 30 MB |
| Submission ID | 2167280539 |
| Solved On | 09 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/jump-game-iii/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array of non-negative integers <code>arr</code>, you are initially positioned at <code>start</code>&nbsp;index of the array. When you are at index <code>i</code>, you can jump&nbsp;to <code>i + arr[i]</code> or <code>i - arr[i]</code>, check if you can reach&nbsp;<strong>any</strong> index with value 0.</p>

<p>Notice that you can not jump outside of the array at any time.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [4,2,3,0,3,1,2], start = 5
<strong>Output:</strong> true
<strong>Explanation:</strong> 
All possible ways to reach at index 3 with value 0 are: 
index 5 -&gt; index 4 -&gt; index 1 -&gt; index 3 
index 5 -&gt; index 6 -&gt; index 4 -&gt; index 1 -&gt; index 3 
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [4,2,3,0,3,1,2], start = 0
<strong>Output:</strong> true 
<strong>Explanation: 
</strong>One possible way to reach at index 3 with value 0 is: 
index 0 -&gt; index 4 -&gt; index 1 -&gt; index 3
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [3,0,2,1,2], start = 2
<strong>Output:</strong> false
<strong>Explanation: </strong>There is no way to reach at index 1 with value 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= arr[i] &lt;&nbsp;arr.length</code></li>
	<li><code>0 &lt;= start &lt; arr.length</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Depth-First Search
- Breadth-First Search

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Think of BFS to solve the problem.
2. When you reach a position with a value = 0 then return true.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Jump Game II](https://leetcode.com/problems/jump-game-ii/) | 🟡 Medium |
| [Jump Game](https://leetcode.com/problems/jump-game/) | 🟡 Medium |
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
| C++ | 0 ms | 30 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
