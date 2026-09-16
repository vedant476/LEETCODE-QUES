# 1626. Can Make Arithmetic Progression From Sequence

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 68.7% |
| Language | C |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9.2 MB |
| Submission ID | 1995401252 |
| Solved On | 05 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

---

<details>
<summary>Show problem statement</summary>

<p>A sequence of numbers is called an <strong>arithmetic progression</strong> if the difference between any two consecutive elements is the same.</p>

<p>Given an array of numbers <code>arr</code>, return <code>true</code> <em>if the array can be rearranged to form an <strong>arithmetic progression</strong>. Otherwise, return</em> <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [3,5,1]
<strong>Output:</strong> true
<strong>Explanation: </strong>We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,4]
<strong>Output:</strong> false
<strong>Explanation: </strong>There is no way to reorder the elements to obtain an arithmetic progression.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>-10<sup>6</sup> &lt;= arr[i] &lt;= 10<sup>6</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Consider that any valid arithmetic progression will be in sorted order.
2. Sort the array, then check if the differences of all consecutive elements are equal.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Arithmetic Subarrays](https://leetcode.com/problems/arithmetic-subarrays/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C | 0 ms | 9.2 MB | [solution.c](./solution.c) |
| C++ | 0 ms | 12.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
