# 4135. Concatenate Non-Zero Digits and Multiply by Sum I

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 66.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9.3 MB |
| Submission ID | 2059030602 |
| Solved On | 07 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer <code>n</code>.</p>

<p>Form a new integer <code>x</code> by concatenating all the <strong>non-zero digits</strong> of <code>n</code> in their original order. If there are no <strong>non-zero</strong> digits, <code>x = 0</code>.</p>

<p>Let <code>sum</code> be the <strong>sum of digits</strong> in <code>x</code>.</p>

<p>Return an integer representing the value of <code>x * sum</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 10203004</span></p>

<p><strong>Output:</strong> <span class="example-io">12340</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The non-zero digits are 1, 2, 3, and 4. Thus, <code>x = 1234</code>.</li>
	<li>The sum of digits is <code>sum = 1 + 2 + 3 + 4 = 10</code>.</li>
	<li>Therefore, the answer is <code>x * sum = 1234 * 10 = 12340</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 1000</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The non-zero digit is 1, so <code>x = 1</code> and <code>sum = 1</code>.</li>
	<li>Therefore, the answer is <code>x * sum = 1 * 1 = 1</code>.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

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
| C++ | 0 ms | 9.3 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
