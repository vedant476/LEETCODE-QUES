# 3600. Find the K-th Character in String Game I

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 81.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9.6 MB |
| Submission ID | 2066870698 |
| Solved On | 14 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/

---

<details>
<summary>Show problem statement</summary>

<p>Alice and Bob are playing a game. Initially, Alice has a string <code>word = &quot;a&quot;</code>.</p>

<p>You are given a <strong>positive</strong> integer <code>k</code>.</p>

<p>Now Bob will ask Alice to perform the following operation <strong>forever</strong>:</p>

<ul>
	<li>Generate a new string by <strong>changing</strong> each character in <code>word</code> to its <strong>next</strong> character in the English alphabet, and <strong>append</strong> it to the <em>original</em> <code>word</code>.</li>
</ul>

<p>For example, performing the operation on <code>&quot;c&quot;</code> generates <code>&quot;cd&quot;</code> and performing the operation on <code>&quot;zb&quot;</code> generates <code>&quot;zbac&quot;</code>.</p>

<p>Return the value of the <code>k<sup>th</sup></code> character in <code>word</code>, after enough operations have been done for <code>word</code> to have <strong>at least</strong> <code>k</code> characters.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">k = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;b&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>Initially, <code>word = &quot;a&quot;</code>. We need to do the operation three times:</p>

<ul>
	<li>Generated string is <code>&quot;b&quot;</code>, <code>word</code> becomes <code>&quot;ab&quot;</code>.</li>
	<li>Generated string is <code>&quot;bc&quot;</code>, <code>word</code> becomes <code>&quot;abbc&quot;</code>.</li>
	<li>Generated string is <code>&quot;bccd&quot;</code>, <code>word</code> becomes <code>&quot;abbcbccd&quot;</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">k = 10</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;c&quot;</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= 500</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Bit Manipulation
- Recursion
- Simulation

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. The constraints are small. Construct the string by simulating the operations.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Shifting Letters](https://leetcode.com/problems/shifting-letters/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 9.6 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
