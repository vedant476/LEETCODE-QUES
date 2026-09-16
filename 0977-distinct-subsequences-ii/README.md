# 0977. Distinct Subsequences II

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 44.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.7 MB |
| Submission ID | 2134295048 |
| Solved On | 07 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/distinct-subsequences-ii/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string s, return <em>the number of <strong>distinct non-empty subsequences</strong> of</em> <code>s</code>. Since the answer may be very large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>
A <strong>subsequence</strong> of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., <code>&quot;ace&quot;</code> is a subsequence of <code>&quot;<u>a</u>b<u>c</u>d<u>e</u>&quot;</code> while <code>&quot;aec&quot;</code> is not.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abc&quot;
<strong>Output:</strong> 7
<strong>Explanation:</strong> The 7 distinct subsequences are &quot;a&quot;, &quot;b&quot;, &quot;c&quot;, &quot;ab&quot;, &quot;ac&quot;, &quot;bc&quot;, and &quot;abc&quot;.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aba&quot;
<strong>Output:</strong> 6
<strong>Explanation:</strong> The 6 distinct subsequences are &quot;a&quot;, &quot;b&quot;, &quot;ab&quot;, &quot;aa&quot;, &quot;ba&quot;, and &quot;aba&quot;.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aaa&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The 3 distinct subsequences are &quot;a&quot;, &quot;aa&quot; and &quot;aaa&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2000</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>


</details>

---

## 🏷 Tags

- String
- Dynamic Programming

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Number of Unique Good Subsequences](https://leetcode.com/problems/number-of-unique-good-subsequences/) | 🔴 Hard |
| [Count K-Subsequences of a String With Maximum Beauty](https://leetcode.com/problems/count-k-subsequences-of-a-string-with-maximum-beauty/) | 🔴 Hard |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
