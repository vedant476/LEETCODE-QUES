# 3918. Check Divisibility by Digit Sum and Product

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 74.6% |
| Language | C |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.5 MB |
| Submission ID | 2116600038 |
| Solved On | 23 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a positive integer <code>n</code>. Determine whether <code>n</code> is divisible by the <strong>sum </strong>of the following two values:</p>

<ul>
	<li>
	<p>The <strong>digit sum</strong> of <code>n</code> (the sum of its digits).</p>
	</li>
	<li>
	<p>The <strong>digit</strong> <strong>product</strong> of <code>n</code> (the product of its digits).</p>
	</li>
</ul>

<p>Return <code>true</code> if <code>n</code> is divisible by this sum; otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 99</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<p>Since 99 is divisible by the sum (9 + 9 = 18) plus product (9 * 9 = 81) of its digits (total 99), the output is true.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 23</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>Since 23 is not divisible by the sum (2 + 3 = 5) plus product (2 * 3 = 6) of its digits (total 11), the output is false.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>6</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Compute the digits' sum and product, then check if <code>n % (sum + product) == 0</code>.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C | 0 ms | 8.5 MB | [solution.c](./solution.c) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
