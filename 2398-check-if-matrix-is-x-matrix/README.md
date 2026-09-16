# 2398. Check if Matrix Is X-Matrix

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 67.0% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 19.9 MB |
| Submission ID | 2014142660 |
| Solved On | 27 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/check-if-matrix-is-x-matrix/

---

<details>
<summary>Show problem statement</summary>

<p>A square matrix is said to be an <strong>X-Matrix</strong> if <strong>both</strong> of the following conditions hold:</p>

<ol>
	<li>All the elements in the diagonals of the matrix are <strong>non-zero</strong>.</li>
	<li>All other elements are 0.</li>
</ol>

<p>Given a 2D integer array <code>grid</code> of size <code>n x n</code> representing a square matrix, return <code>true</code><em> if </em><code>grid</code><em> is an X-Matrix</em>. Otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/03/ex1.jpg" style="width: 311px; height: 320px;" />
<pre>
<strong>Input:</strong> grid = [[2,0,0,1],[0,3,1,0],[0,5,2,0],[4,0,0,2]]
<strong>Output:</strong> true
<strong>Explanation:</strong> Refer to the diagram above. 
An X-Matrix should have the green elements (diagonals) be non-zero and the red elements be 0.
Thus, grid is an X-Matrix.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/03/ex2.jpg" style="width: 238px; height: 246px;" />
<pre>
<strong>Input:</strong> grid = [[5,7,0],[0,3,1],[0,5,0]]
<strong>Output:</strong> false
<strong>Explanation:</strong> Refer to the diagram above.
An X-Matrix should have the green elements (diagonals) be non-zero and the red elements be 0.
Thus, grid is not an X-Matrix.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length == grid[i].length</code></li>
	<li><code>3 &lt;= n &lt;= 100</code></li>
	<li><code>0 &lt;= grid[i][j] &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Matrix

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Assuming a 0-indexed matrix, for a given cell on row i and column j, it is in a diagonal if and only if i == j or i == n - 1 - j.
2. We can then iterate through the elements in the matrix to check if all the elements in the diagonals are non-zero and all other elements are zero.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 19.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
