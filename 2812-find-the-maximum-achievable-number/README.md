# 2812. Find the Maximum Achievable Number

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 91.7% |
| Language | Go |
| Status | ✅ Accepted |
| Runtime | 1 ms |
| Memory | 4.8 MB |
| Submission ID | 2061280743 |
| Solved On | 09 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-the-maximum-achievable-number/

---

<details>
<summary>Show problem statement</summary>

<p>Given two integers, <code>num</code> and <code>t</code>. A <strong>number </strong><code>x</code><strong> </strong>is<strong> achievable</strong> if it can become equal to <code>num</code> after applying the following operation <strong>at most</strong> <code>t</code> times:</p>

<ul>
	<li>Increase or decrease <code>x</code> by <code>1</code>, and <em>simultaneously</em> increase or decrease <code>num</code> by <code>1</code>.</li>
</ul>

<p>Return the <strong>maximum </strong>possible value of <code>x</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">num = 4, t = 1</span></p>

<p><strong>Output:</strong> <span class="example-io">6</span></p>

<p><strong>Explanation:</strong></p>

<p>Apply the following operation once to make the maximum achievable number equal to <code>num</code>:</p>

<ul>
	<li>Decrease the maximum achievable number by 1, and increase <code>num</code> by 1.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">num = 3, t = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">7</span></p>

<p><strong>Explanation:</strong></p>

<p>Apply the following operation twice to make the maximum achievable number equal to <code>num</code>:</p>

<ul>
	<li>Decrease the maximum achievable number by 1, and increase <code>num</code> by 1.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num, t&nbsp;&lt;= 50</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Let x be the answer, it’s always optimal to decrease x in each operation and increase nums.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| Go | 1 ms | 4.8 MB | [solution.go](./solution.go) |
| Scala | 1 ms | 54.9 MB | [solution.scala](./solution.scala) |
| TypeScript | 1 ms | 58.5 MB | [solution.ts](./solution.ts) |
| C# | 0 ms | 29.2 MB | [Solution.cs](./Solution.cs) |
| C | 0 ms | 9.9 MB | [solution.c](./solution.c) |
| C++ | 0 ms | 9.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
