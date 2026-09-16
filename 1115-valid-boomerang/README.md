# 1115. Valid Boomerang

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 40.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 12.5 MB |
| Submission ID | 2008685383 |
| Solved On | 21 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/valid-boomerang/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array <code>points</code> where <code>points[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> represents a point on the <strong>X-Y</strong> plane, return <code>true</code> <em>if these points are a <strong>boomerang</strong></em>.</p>

<p>A <strong>boomerang</strong> is a set of three points that are <strong>all distinct</strong> and <strong>not in a straight line</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> points = [[1,1],[2,3],[3,2]]
<strong>Output:</strong> true
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> points = [[1,1],[2,2],[3,3]]
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>points.length == 3</code></li>
	<li><code>points[i].length == 2</code></li>
	<li><code>0 &lt;= x<sub>i</sub>, y<sub>i</sub> &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Geometry

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. 3 points form a boomerang if and only if the triangle formed from them has non-zero area.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 12.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
