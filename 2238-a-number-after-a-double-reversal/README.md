# 2238. A Number After a Double Reversal

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 82.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.7 MB |
| Submission ID | 2070431901 |
| Solved On | 17 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/a-number-after-a-double-reversal/

---

<details>
<summary>Show problem statement</summary>

<p><strong>Reversing</strong> an integer means to reverse all its digits.</p>

<ul>
	<li>For example, reversing <code>2021</code> gives <code>1202</code>. Reversing <code>12300</code> gives <code>321</code> as the <strong>leading zeros are not retained</strong>.</li>
</ul>

<p>Given an integer <code>num</code>, <strong>reverse</strong> <code>num</code> to get <code>reversed1</code>, <strong>then reverse</strong> <code>reversed1</code> to get <code>reversed2</code>. Return <code>true</code> <em>if</em> <code>reversed2</code> <em>equals</em> <code>num</code>. Otherwise return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 526
<strong>Output:</strong> true
<strong>Explanation:</strong> Reverse num to get 625, then reverse 625 to get 526, which equals num.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 1800
<strong>Output:</strong> false
<strong>Explanation:</strong> Reverse num to get 81, then reverse 81 to get 18, which does not equal num.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = 0
<strong>Output:</strong> true
<strong>Explanation:</strong> Reverse num to get 0, then reverse 0 to get 0, which equals num.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= num &lt;= 10<sup>6</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Other than the number 0 itself, any number that ends with 0 would lose some digits permanently when reversed.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | 🟡 Medium |
| [Reverse Bits](https://leetcode.com/problems/reverse-bits/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 7.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
