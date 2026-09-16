# 2575. Minimum Cuts to Divide a Circle

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 56.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.8 MB |
| Submission ID | 2008658842 |
| Solved On | 21 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/

---

<details>
<summary>Show problem statement</summary>

<p>A <strong>valid cut</strong> in a circle can be:</p>

<ul>
	<li>A cut that is represented by a straight line that touches two points on the edge of the circle and passes through its center, or</li>
	<li>A cut that is represented by a straight line that touches one point on the edge of the circle and its center.</li>
</ul>

<p>Some valid and invalid cuts are shown in the figures below.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/10/29/alldrawio.png" style="width: 450px; height: 174px;" />
<p>Given the integer <code>n</code>, return <em>the <strong>minimum</strong> number of cuts needed to divide a circle into </em><code>n</code><em> equal slices</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/10/24/11drawio.png" style="width: 200px; height: 200px;" />
<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
The above figure shows how cutting the circle twice through the middle divides it into 4 equal slices.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/10/24/22drawio.png" style="width: 200px; height: 201px;" />
<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong>
At least 3 cuts are needed to divide the circle into 3 equal slices. 
It can be shown that less than 3 cuts cannot result in 3 slices of equal size and shape.
Also note that the first cut will not divide the circle into distinct parts.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Geometry

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Think about odd and even values separately.
2. When will we not have to cut the circle at all?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/) | 🟢 Easy |
| [Count Total Number of Colored Cells](https://leetcode.com/problems/count-total-number-of-colored-cells/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 7.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
