# 3869. Smallest Index With Digit Sum Equal to Index

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 80.5% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 31 MB |
| Submission ID | 2151574518 |
| Solved On | 24 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code>.</p>

<p>Return the <strong>smallest</strong> index <code>i</code> such that the sum of the digits of <code>nums[i]</code> is equal to <code>i</code>.</p>

<p>If no such index exists, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,3,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>For <code>nums[2] = 2</code>, the sum of digits is 2, which is equal to index <code>i = 2</code>. Thus, the output is 2.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,10,11]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>For <code>nums[1] = 10</code>, the sum of digits is <code>1 + 0 = 1</code>, which is equal to index <code>i = 1</code>.</li>
	<li>For <code>nums[2] = 11</code>, the sum of digits is <code>1 + 1 = 2</code>, which is equal to index <code>i = 2</code>.</li>
	<li>Since index 1 is the smallest, the output is 1.</li>
</ul>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Since no index satisfies the condition, the output is -1.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Simulate as described

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 31 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
