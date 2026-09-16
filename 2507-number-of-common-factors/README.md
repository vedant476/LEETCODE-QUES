# 2507. Number of Common Factors

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 80.4% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.8 MB |
| Submission ID | 2016686280 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/number-of-common-factors/

---

<details>
<summary>Show problem statement</summary>

<p>Given two positive integers <code>a</code> and <code>b</code>, return <em>the number of <strong>common</strong> factors of </em><code>a</code><em> and </em><code>b</code>.</p>

<p>An integer <code>x</code> is a <strong>common factor</strong> of <code>a</code> and <code>b</code> if <code>x</code> divides both <code>a</code> and <code>b</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> a = 12, b = 6
<strong>Output:</strong> 4
<strong>Explanation:</strong> The common factors of 12 and 6 are 1, 2, 3, 6.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> a = 25, b = 30
<strong>Output:</strong> 2
<strong>Explanation:</strong> The common factors of 25 and 30 are 1, 5.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a, b &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Enumeration
- Number Theory
- Euclidean Algorithm
- Greatest Common Divisor

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For each integer in range [1,1000], check if it’s divisible by both A and B.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Count Primes](https://leetcode.com/problems/count-primes/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 7.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
