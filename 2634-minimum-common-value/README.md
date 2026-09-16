# 2634. Minimum Common Value

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 60.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 54.4 MB |
| Submission ID | 2006844051 |
| Solved On | 19 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-common-value/

---

<details>
<summary>Show problem statement</summary>

<p>Given two integer arrays <code>nums1</code> and <code>nums2</code>, sorted in non-decreasing order, return <em>the <strong>minimum integer common</strong> to both arrays</em>. If there is no common integer amongst <code>nums1</code> and <code>nums2</code>, return <code>-1</code>.</p>

<p>Note that an integer is said to be <strong>common</strong> to <code>nums1</code> and <code>nums2</code> if both arrays have <strong>at least one</strong> occurrence of that integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [1,2,3], nums2 = [2,4]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The smallest element common to both arrays is 2, so we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [1,2,3,6], nums2 = [2,3,4,5]
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are two common elements in the array 2 and 3 out of which 2 is the smallest, so 2 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums1.length, nums2.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums1[i], nums2[j] &lt;= 10<sup>9</sup></code></li>
	<li>Both <code>nums1</code> and <code>nums2</code> are sorted in <strong>non-decreasing</strong> order.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Two Pointers
- Binary Search

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Try to use a set.
2. Otherwise, try to use a two-pointer approach.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/) | 🟢 Easy |
| [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 54.4 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
