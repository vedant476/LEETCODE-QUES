# 1500. Count Largest Group

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 74.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.9 MB |
| Submission ID | 2009574386 |
| Solved On | 22 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-largest-group/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer <code>n</code>.</p>

<p>We need to group the numbers from <code>1</code> to <code>n</code> according to the sum of its digits. For example, the numbers 14 and 5 belong to the <strong>same</strong> group, whereas 13 and 3 belong to <strong>different</strong> groups.</p>

<p>Return the number of groups that have the largest size, i.e. the <strong>maximum</strong> number of elements.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 13
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are 9 groups in total, they are grouped according sum of its digits of numbers from 1 to 13:
[1,10], [2,11], [3,12], [4,13], [5], [6], [7], [8], [9].
There are 4 groups with largest size.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are 2 groups [1], [2] of size 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Hash Table
- Math
- Counting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Count the digit sum for each integer in the range and find out the largest groups.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
