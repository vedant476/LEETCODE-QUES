# 3626. Smallest Divisible Digit Product I

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 73.0% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.7 MB |
| Submission ID | 2096263669 |
| Solved On | 06 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/smallest-divisible-digit-product-i/

---

<details>
<summary>Show problem statement</summary>

<p>You are given two integers <code>n</code> and <code>t</code>. Return the <strong>smallest</strong> number greater than or equal to <code>n</code> such that the <strong>product of its digits</strong> is divisible by <code>t</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 10, t = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation:</strong></p>

<p>The digit product of 10 is 0, which is divisible by 2, making it the smallest number greater than or equal to 10 that satisfies the condition.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 15, t = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">16</span></p>

<p><strong>Explanation:</strong></p>

<p>The digit product of 16 is 6, which is divisible by 3, making it the smallest number greater than or equal to 15 that satisfies the condition.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= t &lt;= 10</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Enumeration

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. You have to check at most 10 numbers.
2. Apply a brute-force approach by checking each possible number.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Smallest Number With Given Digit Product](https://leetcode.com/problems/smallest-number-with-given-digit-product/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
