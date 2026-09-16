# 0204. Count Primes

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 36.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 32.5 MB |
| Submission ID | 2020937819 |
| Solved On | 03 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-primes/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer <code>n</code>, return <em>the number of prime numbers that are strictly less than</em> <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 0
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 5 * 10<sup>6</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Enumeration
- Number Theory
- Primality Test
- Sieve Theory
- Prime Number Sieve

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Checking all the integers in the range [1, n - 1] is not efficient. Think about a better approach.
2. Since most of the numbers are not primes, we need a fast approach to exclude the non-prime integers.
3. Use Sieve of Eratosthenes.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Ugly Number](https://leetcode.com/problems/ugly-number/) | 🟢 Easy |
| [Ugly Number II](https://leetcode.com/problems/ugly-number-ii/) | 🟡 Medium |
| [Perfect Squares](https://leetcode.com/problems/perfect-squares/) | 🟡 Medium |
| [Number of Common Factors](https://leetcode.com/problems/number-of-common-factors/) | 🟢 Easy |
| [Prime Pairs With Target Sum](https://leetcode.com/problems/prime-pairs-with-target-sum/) | 🟡 Medium |
| [Find the Count of Numbers Which Are Not Special](https://leetcode.com/problems/find-the-count-of-numbers-which-are-not-special/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 32.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
