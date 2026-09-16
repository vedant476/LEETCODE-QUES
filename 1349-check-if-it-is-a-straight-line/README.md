# 1349. Check If It Is a Straight Line

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 40.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 13.9 MB |
| Submission ID | 2008669545 |
| Solved On | 21 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/check-if-it-is-a-straight-line/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array&nbsp;<code>coordinates</code>, <code>coordinates[i] = [x, y]</code>, where <code>[x, y]</code> represents the coordinate of a point. Check if these points&nbsp;make a straight line in the XY plane.</p>

<p>&nbsp;</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/10/15/untitled-diagram-2.jpg" style="width: 336px; height: 336px;" /></p>

<pre>
<strong>Input:</strong> coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/10/09/untitled-diagram-1.jpg" style="width: 348px; height: 336px;" /></strong></p>

<pre>
<strong>Input:</strong> coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;=&nbsp;coordinates.length &lt;= 1000</code></li>
	<li><code>coordinates[i].length == 2</code></li>
	<li><code>-10^4 &lt;=&nbsp;coordinates[i][0],&nbsp;coordinates[i][1] &lt;= 10^4</code></li>
	<li><code>coordinates</code>&nbsp;contains no duplicate point.</li>
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

1. If there're only 2 points, return true.
2. Check if all other points lie on the line defined by the first 2 points.
3. Use cross product to check collinearity.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 13.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
