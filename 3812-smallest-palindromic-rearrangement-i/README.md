# 3812. Smallest Palindromic Rearrangement I

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 74.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 14 ms |
| Memory | 54.2 MB |
| Submission ID | 2085147882 |
| Solved On | 28 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/smallest-palindromic-rearrangement-i/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a <strong><span data-keyword="palindrome-string">palindromic</span></strong> string <code>s</code>.</p>

<p>Return the <strong><span data-keyword="lexicographically-smaller-string">lexicographically smallest</span></strong> palindromic <span data-keyword="permutation-string">permutation</span> of <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;z&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;z&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>A string of only one character is already the lexicographically smallest palindrome.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;babab&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;abbba&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>Rearranging <code>&quot;babab&quot;</code> &rarr; <code>&quot;abbba&quot;</code> gives the smallest lexicographic palindrome.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;daccad&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;acddca&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>Rearranging <code>&quot;daccad&quot;</code> &rarr; <code>&quot;acddca&quot;</code> gives the smallest lexicographic palindrome.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
	<li><code>s</code> is guaranteed to be palindromic.</li>
</ul>


</details>

---

## 🏷 Tags

- String
- Sorting
- Counting Sort

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Consider a palindrome as composed of two mirror-image halves.
2. Construct one half (using <code>s</code>), and then the other half is its reverse to obtain the lexicographically smallest permutation.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/) | 🔴 Hard |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 14 ms | 54.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
