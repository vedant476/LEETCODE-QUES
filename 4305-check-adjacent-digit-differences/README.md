# 4305. Check Adjacent Digit Differences

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 78.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.5 MB |
| Submission ID | 2010439950 |
| Solved On | 23 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/check-adjacent-digit-differences/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a string <code>s</code> consisting of digits.</p>

<p>Return <code>true</code> if the <strong>absolute difference</strong> between every pair of <strong>adjacent</strong> digits is at most 2, otherwise return <code>false</code>.</p>

<p>The absolute difference between <code>a</code> and <code>b</code> is defined as <code>abs(a - b)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;132&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The absolute difference between digits at <code>s[0]</code> and <code>s[1]</code> is <code>abs(1 - 3) = 2</code>.</li>
	<li>The absolute difference between digits at <code>s[1]</code> and <code>s[2]</code> is <code>abs(3 - 2) = 1</code>.</li>
	<li>Since both differences are at most 2, the answer is true.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;129&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The absolute difference between digits at <code>s[0]</code> and <code>s[1]</code> is <code>abs(1 - 2) = 1</code>.</li>
	<li>The absolute difference between digits at <code>s[1]</code> and <code>s[2]</code> is <code>abs(2 - 9) = 7</code>, which is greater than 2.</li>
	<li>Therefore, the answer is false.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists only of digits.</li>
</ul>


</details>

---

## 🏷 Tags

- String

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Pure simulation problem.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
