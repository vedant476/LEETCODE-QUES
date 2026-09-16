# 2541. Sum of Number and Its Reverse

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 49.9% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 23 ms |
| Memory | 7.8 MB |
| Submission ID | 2049851377 |
| Solved On | 29 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/sum-of-number-and-its-reverse/

---

<details>
<summary>Show problem statement</summary>

<p>Given a <strong>non-negative</strong> integer <code>num</code>, return <code>true</code><em> if </em><code>num</code><em> can be expressed as the sum of any <strong>non-negative</strong> integer and its reverse, or </em><code>false</code><em> otherwise.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 443
<strong>Output:</strong> true
<strong>Explanation:</strong> 172 + 271 = 443 so we return true.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 63
<strong>Output:</strong> false
<strong>Explanation:</strong> 63 cannot be expressed as the sum of a non-negative integer and its reverse so we return false.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = 181
<strong>Output:</strong> true
<strong>Explanation:</strong> 140 + 041 = 181 so we return true. Note that when a number is reversed, there may be leading zeros.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= num &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Enumeration

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. The constraints are small enough that we can check every number.
2. To reverse a number, first convert it to a string. Then, create a new string that is the reverse of the first one. Finally, convert the new string back into a number.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Sum of Numbers With Units Digit K](https://leetcode.com/problems/sum-of-numbers-with-units-digit-k/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 23 ms | 7.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
