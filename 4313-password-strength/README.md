# 4313. Password Strength

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 74.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 3 ms |
| Memory | 16.6 MB |
| Submission ID | 2016116472 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/password-strength/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a string <code>password</code>.</p>

<p>The <strong>strength</strong> of the password is calculated based on the following rules:</p>

<ul>
	<li>1 point for each distinct lowercase letter (<code>&#39;a&#39;</code> to <code>&#39;z&#39;</code>).</li>
	<li>2 points for each distinct uppercase letter (<code>&#39;A&#39;</code> to <code>&#39;Z&#39;</code>).</li>
	<li>3 points for each distinct digit (<code>&#39;0&#39;</code> to <code>&#39;9&#39;</code>).</li>
	<li>5 points for each distinct special character from the set <code>&quot;!@#$&quot;</code>.</li>
</ul>

<p>Each character contributes <strong>at most</strong> once, even if it appears multiple times.</p>

<p>Return an integer denoting the strength of the password.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">password = &quot;aA1!&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">11</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The distinct characters are <code>&#39;a&#39;</code>, <code>&#39;A&#39;</code>, <code>&#39;1&#39;</code> and <code>&#39;!&#39;</code>.</li>
	<li>Thus, the <code>strength = 1 + 2 + 3 + 5 = 11</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">password = &quot;bbB11#&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">11</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The distinct characters are <code>&#39;b&#39;</code>, <code>&#39;B&#39;</code>, <code>&#39;1&#39;</code> and <code>&#39;#&#39;</code>.</li>
	<li>Thus, the <code>strength = 1 + 2 + 3 + 5 = 11</code>.​​​​​​​</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= password.length &lt;= 10<sup>5</sup></code></li>
	<li><code>password</code> consists of lowercase and uppercase English letters, digits, and special characters from <code>&quot;!@#$&quot;</code>.</li>
</ul>


</details>

---

## 🏷 Tags

- Hash Table
- String

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Remove duplicates from the string.
2. Now you can sum up the corresponding points of each character.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 3 ms | 16.6 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
