# 1159. Smallest Subsequence of Distinct Characters

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 70.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 3 ms |
| Memory | 8.7 MB |
| Submission ID | 2073441928 |
| Solved On | 19 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string <code>s</code>, return <em>the </em><span data-keyword="lexicographically-smaller-string"><em>lexicographically smallest</em></span> <span data-keyword="subsequence-string"><em>subsequence</em></span><em> of</em> <code>s</code> <em>that contains all the distinct characters of</em> <code>s</code> <em>exactly once</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;bcabc&quot;
<strong>Output:</strong> &quot;abc&quot;
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;cbacdcbc&quot;
<strong>Output:</strong> &quot;acdb&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>

<p>&nbsp;</p>
<strong>Note:</strong> This question is the same as 316: <a href="https://leetcode.com/problems/remove-duplicate-letters/" target="_blank">https://leetcode.com/problems/remove-duplicate-letters/</a>

</details>

---

## 🏷 Tags

- String
- Stack
- Greedy
- Monotonic Stack

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Greedily try to add one missing character. How to check if adding some character will not cause problems ? Use bit-masks to check whether you will be able to complete the sub-sequence if you add the character at some index i.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Find the Most Competitive Subsequence](https://leetcode.com/problems/find-the-most-competitive-subsequence/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 3 ms | 8.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
