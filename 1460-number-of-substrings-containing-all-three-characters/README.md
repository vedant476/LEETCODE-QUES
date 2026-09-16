# 1460. Number of Substrings Containing All Three Characters

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 74.4% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 7 ms |
| Memory | 11 MB |
| Submission ID | 2050722815 |
| Solved On | 30 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string <code>s</code>&nbsp;consisting only of characters <em>a</em>, <em>b</em> and <em>c</em>.</p>

<p>Return the number of substrings containing <b>at least</b>&nbsp;one occurrence of all these characters <em>a</em>, <em>b</em> and <em>c</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcabc&quot;
<strong>Output:</strong> 10
<strong>Explanation:</strong> The substrings containing&nbsp;at least&nbsp;one occurrence of the characters&nbsp;<em>a</em>,&nbsp;<em>b</em>&nbsp;and&nbsp;<em>c are &quot;</em>abc<em>&quot;, &quot;</em>abca<em>&quot;, &quot;</em>abcab<em>&quot;, &quot;</em>abcabc<em>&quot;, &quot;</em>bca<em>&quot;, &quot;</em>bcab<em>&quot;, &quot;</em>bcabc<em>&quot;, &quot;</em>cab<em>&quot;, &quot;</em>cabc<em>&quot; </em>and<em> &quot;</em>abc<em>&quot; </em>(<strong>again</strong>)<em>. </em>
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aaacb&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The substrings containing&nbsp;at least&nbsp;one occurrence of the characters&nbsp;<em>a</em>,&nbsp;<em>b</em>&nbsp;and&nbsp;<em>c are &quot;</em>aaacb<em>&quot;, &quot;</em>aacb<em>&quot; </em>and<em> &quot;</em>acb<em>&quot;.</em><em> </em>
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abc&quot;
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= s.length &lt;= 5 x 10<sup>4</sup></code></li>
	<li><code>s</code>&nbsp;only consists of <code>&#39;a&#39;</code>, <code>&#39;b&#39;</code> or <code>&#39;c&#39;</code> characters.</li>
</ul>


</details>

---

## 🏷 Tags

- Hash Table
- String
- Sliding Window

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For each position we simply need to find the first occurrence of a/b/c on or after this position.
2. So we can pre-compute three link-list of indices of each a, b, and c.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Vowels of All Substrings](https://leetcode.com/problems/vowels-of-all-substrings/) | 🟡 Medium |
| [Count Complete Substrings](https://leetcode.com/problems/count-complete-substrings/) | 🔴 Hard |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 7 ms | 11 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
