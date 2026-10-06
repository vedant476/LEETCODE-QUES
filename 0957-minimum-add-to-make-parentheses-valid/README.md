# 0957. Minimum Add to Make Parentheses Valid

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 74.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.4 MB |
| Submission ID | 2163967918 |
| Solved On | 06 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

---

<details>
<summary>Show problem statement</summary>

<p>A parentheses string is valid if and only if:</p>

<ul>
	<li>It is the empty string,</li>
	<li>It can be written as <code>AB</code> (<code>A</code> concatenated with <code>B</code>), where <code>A</code> and <code>B</code> are valid strings, or</li>
	<li>It can be written as <code>(A)</code>, where <code>A</code> is a valid string.</li>
</ul>

<p>You are given a parentheses string <code>s</code>. In one move, you can insert a parenthesis at any position of the string.</p>

<ul>
	<li>For example, if <code>s = &quot;()))&quot;</code>, you can insert an opening parenthesis to be <code>&quot;(<strong>(</strong>)))&quot;</code> or a closing parenthesis to be <code>&quot;())<strong>)</strong>)&quot;</code>.</li>
</ul>

<p>Return <em>the minimum number of moves required to make </em><code>s</code><em> valid</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;())&quot;
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(((&quot;
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s[i]</code> is either <code>&#39;(&#39;</code> or <code>&#39;)&#39;</code>.</li>
</ul>


</details>

---

## 🏷 Tags

- String
- Stack
- Greedy
- Bracket Sequences

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Minimum Number of Swaps to Make the String Balanced](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.4 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
