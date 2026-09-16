# 2254. Check if Every Row and Column Contains All Numbers

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 54.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 1 ms |
| Memory | 38.4 MB |
| Submission ID | 2016975936 |
| Solved On | 30 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/

---

<details>
<summary>Show problem statement</summary>

<p>An <code>n x n</code> matrix is <strong>valid</strong> if every row and every column contains <strong>all</strong> the integers from <code>1</code> to <code>n</code> (<strong>inclusive</strong>).</p>

<p>Given an <code>n x n</code> integer matrix <code>matrix</code>, return <code>true</code> <em>if the matrix is <strong>valid</strong>.</em> Otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/21/example1drawio.png" style="width: 250px; height: 251px;" />
<pre>
<strong>Input:</strong> matrix = [[1,2,3],[3,1,2],[2,3,1]]
<strong>Output:</strong> true
<strong>Explanation:</strong> In this case, n = 3, and every row and column contains the numbers 1, 2, and 3.
Hence, we return true.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/21/example2drawio.png" style="width: 250px; height: 251px;" />
<pre>
<strong>Input:</strong> matrix = [[1,1,1],[1,2,3],[1,2,3]]
<strong>Output:</strong> false
<strong>Explanation:</strong> In this case, n = 3, but the first row and the first column do not contain the numbers 2 or 3.
Hence, we return false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == matrix.length == matrix[i].length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= matrix[i][j] &lt;= n</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Matrix

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use for loops to check each row for every number from 1 to n. Similarly, do the same for each column.
2. For each check, you can keep a set of the unique elements in the checked row/col. By the end of the check, the size of the set should be n.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) | 🟡 Medium |
| [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/) | 🟢 Easy |
| [First Completely Painted Row or Column](https://leetcode.com/problems/first-completely-painted-row-or-column/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 1 ms | 38.4 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
