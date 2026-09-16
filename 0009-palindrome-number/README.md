# 0009. Palindrome Number

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 60.9% |
| Language | C |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9 MB |
| Submission ID | 2016020403 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/palindrome-number/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer <code>x</code>, return <code>true</code> if <code>x</code> is a <span data-keyword="palindrome-integer"><strong>palindrome</strong></span>, and <code>false</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> x = 121
<strong>Output:</strong> true
<strong>Explanation:</strong> 121 reads as 121 from left to right and from right to left.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> x = -121
<strong>Output:</strong> false
<strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> x = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> Reads 01 from right to left. Therefore it is not a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup>&nbsp;&lt;= x &lt;= 2<sup>31</sup>&nbsp;- 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without converting the integer to a string?

</details>

---

## 🏷 Tags

- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Beware of overflow when you reverse the integer.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | 🟢 Easy |
| [Find Palindrome With Fixed Length](https://leetcode.com/problems/find-palindrome-with-fixed-length/) | 🟡 Medium |
| [Strictly Palindromic Number](https://leetcode.com/problems/strictly-palindromic-number/) | 🟡 Medium |
| [  Count Symmetric Integers](https://leetcode.com/problems/count-symmetric-integers/) | 🟢 Easy |
| [Find the Count of Good Integers](https://leetcode.com/problems/find-the-count-of-good-integers/) | 🔴 Hard |
| [Find the Largest Palindrome Divisible by K](https://leetcode.com/problems/find-the-largest-palindrome-divisible-by-k/) | 🔴 Hard |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C | 0 ms | 9 MB | [solution.c](./solution.c) |
| Python | 9 ms | 12.3 MB | [solution.py](./solution.py) |
| C++ | 4 ms | 10.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
