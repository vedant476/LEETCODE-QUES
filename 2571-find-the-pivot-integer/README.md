# 2571. Find the Pivot Integer

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 83.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.1 MB |
| Submission ID | 2016019489 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-the-pivot-integer/

---

<details>
<summary>Show problem statement</summary>

<p>Given a positive integer <code>n</code>, find the <strong>pivot integer</strong> <code>x</code> such that:</p>

<ul>
	<li>The sum of all elements between <code>1</code> and <code>x</code> inclusively equals the sum of all elements between <code>x</code> and <code>n</code> inclusively.</li>
</ul>

<p>Return <em>the pivot integer </em><code>x</code>. If no such integer exists, return <code>-1</code>. It is guaranteed that there will be at most one pivot index for the given input.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 8
<strong>Output:</strong> 6
<strong>Explanation:</strong> 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> 1 is the pivot integer since: 1 = 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> -1
<strong>Explanation:</strong> It can be proved that no such integer exist.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Prefix Sum

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Can you use brute force to check every number from 1 to n if any of them is the pivot integer?
2. If you know the sum of [1: pivot], how can you efficiently calculate the sum of the other parts?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Bulb Switcher](https://leetcode.com/problems/bulb-switcher/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
