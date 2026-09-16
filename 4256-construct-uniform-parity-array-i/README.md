# 4256. Construct Uniform Parity Array I

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 85.5% |
| Language | C# |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 46.4 MB |
| Submission ID | 2128865218 |
| Solved On | 03 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/construct-uniform-parity-array-i/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array <code>nums1</code> of <code>n</code> <strong>distinct</strong> integers.</p>

<p>You want to construct another array <code>nums2</code> of length <code>n</code> such that the elements in <code>nums2</code> are either <strong>all odd or all even</strong>.</p>

<p>For each index <code>i</code>, you must choose <strong>exactly one</strong> of the following (in any order):</p>

<ul>
	<li><code>nums2[i] = nums1[i]</code></li>
	<li><code>nums2[i] = nums1[i] - nums1[j]</code>, for an index <code>j != i</code></li>
</ul>

<p>Return <code>true</code> if it is possible to construct such an array, otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums1 = [2,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Choose <code>nums2[0] = nums1[0] - nums1[1] = 2 - 3 = -1</code>.</li>
	<li>Choose <code>nums2[1] = nums1[1] = 3</code>.</li>
	<li><code>nums2 = [-1, 3]</code>, and both elements are odd. Thus, the answer is <code>true</code>​​​​​​​.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums1 = [4,6]</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong>​​​​​​​</p>

<ul>
	<li>Choose <code>nums2[0] = nums1[0] = 4</code>.</li>
	<li>Choose <code>nums2[1] = nums1[1] = 6</code>.</li>
	<li><code>nums2 = [4, 6]</code>, and all elements are even. Thus, the answer is <code>true</code>.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == nums1.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums1[i] &lt;= 100</code></li>
	<li><code>nums1</code> consists of distinct integers.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. There is only one possible answer.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C# | 0 ms | 46.4 MB | [Solution.cs](./Solution.cs) |
| C | 0 ms | 9.3 MB | [solution.c](./solution.c) |
| C++ | 0 ms | 30.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
