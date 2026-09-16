# 4080. Smallest Missing Multiple of K

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 71.5% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 24 MB |
| Submission ID | 2120048617 |
| Solved On | 25 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/smallest-missing-multiple-of-k/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return the <strong>smallest positive multiple</strong> of <code>k</code> that is <strong>missing</strong> from <code>nums</code>.</p>

<p>A <strong>multiple</strong> of <code>k</code> is any positive integer divisible by <code>k</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [8,2,3,4,6], k = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation:</strong></p>

<p>The multiples of <code>k = 2</code> are 2, 4, 6, 8, 10, 12... and the smallest multiple missing from <code>nums</code> is 10.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,4,7,10,15], k = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong></p>

<p>The multiples of <code>k = 5</code> are 5, 10, 15, 20... and the smallest multiple missing from <code>nums</code> is 5.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
	<li><code>1 &lt;= k &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Add the values in <code>nums</code> to a hash set
2. Iterate through the positive multiples of <code>k</code> and return the first one not in the hash set

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 24 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
