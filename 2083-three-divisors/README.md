# 2083. Three Divisors

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 64.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.8 MB |
| Submission ID | 2045395243 |
| Solved On | 25 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/three-divisors/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer <code>n</code>, return <code>true</code><em> if </em><code>n</code><em> has <strong>exactly three positive divisors</strong>. Otherwise, return </em><code>false</code>.</p>

<p>An integer <code>m</code> is a <strong>divisor</strong> of <code>n</code> if there exists an integer <code>k</code> such that <code>n = k * m</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> false
<strong>Explantion:</strong> 2 has only two divisors: 1 and 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> true
<strong>Explantion:</strong> 4 has three divisors: 1, 2, and 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Enumeration
- Number Theory
- Prime Factorization
- Sieve Theory

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. You can count the number of divisors and just check that they are 3
2. Beware of the case of n equal 1 as some solutions might fail in it

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/) | 🟢 Easy |
| [Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/) | 🟢 Easy |

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
