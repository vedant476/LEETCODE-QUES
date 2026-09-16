# 4168. Mirror Distance of an Integer

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 91.4% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.5 MB |
| Submission ID | 2061272163 |
| Solved On | 09 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/mirror-distance-of-an-integer/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer <code>n</code>.</p>

<p>Define its <strong>mirror distance</strong> as: <code>abs(n - reverse(n))</code>​​​​​​​ where <code>reverse(n)</code> is the integer formed by reversing the digits of <code>n</code>.</p>

<p>Return an integer denoting the mirror distance of <code>n</code>​​​​​​​.</p>

<p><code>abs(x)</code> denotes the absolute value of <code>x</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 25</span></p>

<p><strong>Output:</strong> <span class="example-io">27</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li><code>reverse(25) = 52</code>.</li>
	<li>Thus, the answer is <code>abs(25 - 52) = 27</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 10</span></p>

<p><strong>Output:</strong> <span class="example-io">9</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li><code>reverse(10) = 01</code> which is 1.</li>
	<li>Thus, the answer is <code>abs(10 - 1) = 9</code>.</li>
</ul>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 7</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li><code>reverse(7) = 7</code>.</li>
	<li>Thus, the answer is <code>abs(7 - 7) = 0</code>.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
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
| C++ | 0 ms | 8.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
