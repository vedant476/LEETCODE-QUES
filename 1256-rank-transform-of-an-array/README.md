# 1256. Rank Transform of an Array

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 74.0% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 73 ms |
| Memory | 50.8 MB |
| Submission ID | 2065039359 |
| Solved On | 12 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/rank-transform-of-an-array/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array of integers&nbsp;<code>arr</code>, replace each element with its rank.</p>

<p>The rank represents how large the element is. The rank has the following rules:</p>

<ul>
	<li>Rank is an integer starting from 1.</li>
	<li>The larger the element, the larger the rank. If two elements are equal, their rank must be the same.</li>
	<li>Rank should be as small as possible.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [40,10,20,30]
<strong>Output:</strong> [4,1,2,3]
<strong>Explanation</strong>: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [100,100,100]
<strong>Output:</strong> [1,1,1]
<strong>Explanation</strong>: Same elements share the same rank.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> arr = [37,12,28,9,100,56,80,5,12]
<strong>Output:</strong> [5,3,4,2,8,6,7,1,3]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use a temporary array to copy the array and sort it.
2. The rank of each element is the number of unique elements smaller than it in the sorted array plus one.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Rank Transform of a Matrix](https://leetcode.com/problems/rank-transform-of-a-matrix/) | 🔴 Hard |
| [Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 73 ms | 50.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
