# 1064. Smallest Integer Divisible by K

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 54.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.9 MB |
| Submission ID | 2016035810 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/smallest-integer-divisible-by-k/

---

<details>
<summary>Show problem statement</summary>

<p>Given a positive integer <code>k</code>, you need to find the <strong>length</strong> of the <strong>smallest</strong> positive integer <code>n</code> such that <code>n</code> is divisible by <code>k</code>, and <code>n</code> only contains the digit <code>1</code>.</p>

<p>Return <em>the <strong>length</strong> of </em><code>n</code>. If there is no such <code>n</code>, return -1.</p>

<p><strong>Note:</strong> <code>n</code> may not fit in a 64-bit signed integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> k = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> The smallest answer is n = 1, which has length 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> k = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> There is no such positive integer n divisible by 2.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> k = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> The smallest answer is n = 111, which has length 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Hash Table
- Math
- Pigeonhole Principle

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. 11111 = 1111 * 10 + 1
We only need to store remainders modulo K.
2. If we never get a remainder of 0, why would that happen, and how would we know that?

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 7.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
