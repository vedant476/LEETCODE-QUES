# 0069. Sqrt(x)

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 42.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.6 MB |
| Submission ID | 1997804393 |
| Solved On | 08 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/sqrtx/

---

<details>
<summary>Show problem statement</summary>

<p>Given a non-negative integer <code>x</code>, return <em>the square root of </em><code>x</code><em> rounded down to the nearest integer</em>. The returned integer should be <strong>non-negative</strong> as well.</p>

<p>You <strong>must not use</strong> any built-in exponent function or operator.</p>

<ul>
	<li>For example, do not use <code>pow(x, 0.5)</code> in c++ or <code>x ** 0.5</code> in python.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> x = 4
<strong>Output:</strong> 2
<strong>Explanation:</strong> The square root of 4 is 2, so we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> x = 8
<strong>Output:</strong> 2
<strong>Explanation:</strong> The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= x &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Binary Search
- Newton's Method

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Try exploring all integers. (Credits: @annujoshi)
2. Use the sorted property of integers to reduced the search space. (Credits: @annujoshi)

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Pow(x, n)](https://leetcode.com/problems/powx-n/) | 🟡 Medium |
| [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.6 MB | [solution.cpp](./solution.cpp) |
| C | 0 ms | 5.4 MB | [solution.c](./solution.c) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
