# 3408. Count the Number of Special Characters I

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 77.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9.1 MB |
| Submission ID | 2013125993 |
| Solved On | 26 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-the-number-of-special-characters-i/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a string <code>word</code>. A letter is called <strong>special</strong> if it appears <strong>both</strong> in lowercase and uppercase in <code>word</code>.</p>

<p>Return the number of<em> </em><strong>special</strong> letters in<em> </em><code>word</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">word = &quot;aaAbcBC&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>The special characters in <code>word</code> are <code>&#39;a&#39;</code>, <code>&#39;b&#39;</code>, and <code>&#39;c&#39;</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">word = &quot;abc&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>No character in <code>word</code> appears in uppercase.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">word = &quot;abBCab&quot;</span></p>

<p><strong>Output:</strong> 1</p>

<p><strong>Explanation:</strong></p>

<p>The only special character in <code>word</code> is <code>&#39;b&#39;</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= word.length &lt;= 50</code></li>
	<li><code>word</code> consists of only lowercase and uppercase English letters.</li>
</ul>


</details>

---

## 🏷 Tags

- Hash Table
- String

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. The constraints are small. For all 52 characters, check if they are present in <code>word</code>.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Detect Capital](https://leetcode.com/problems/detect-capital/) | 🟢 Easy |
| [Greatest English Letter in Upper and Lower Case](https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/) | 🟢 Easy |
| [Count the Number of Special Characters II](https://leetcode.com/problems/count-the-number-of-special-characters-ii/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 9.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
