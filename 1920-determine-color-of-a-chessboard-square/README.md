# 1920. Determine Color of a Chessboard Square

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 80.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.8 MB |
| Submission ID | 2001079513 |
| Solved On | 12 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/determine-color-of-a-chessboard-square/

---

<details>
<summary>Show problem statement</summary>

<p>You are given <code>coordinates</code>, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.</p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/screenshot-2021-02-20-at-22159-pm.png" style="width: 400px; height: 396px;" /></p>

<p>Return <code>true</code><em> if the square is white, and </em><code>false</code><em> if the square is black</em>.</p>

<p>The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first, and the number second.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> coordinates = &quot;a1&quot;
<strong>Output:</strong> false
<strong>Explanation:</strong> From the chessboard above, the square with coordinates &quot;a1&quot; is black, so return false.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> coordinates = &quot;h3&quot;
<strong>Output:</strong> true
<strong>Explanation:</strong> From the chessboard above, the square with coordinates &quot;h3&quot; is white, so return true.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> coordinates = &quot;c7&quot;
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>coordinates.length == 2</code></li>
	<li><code>&#39;a&#39; &lt;= coordinates[0] &lt;= &#39;h&#39;</code></li>
	<li><code>&#39;1&#39; &lt;= coordinates[1] &lt;= &#39;8&#39;</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- String

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Convert the coordinates to (x, y) - that is, "a1" is (1, 1), "d7" is (4, 7).
2. Try add the numbers together and look for a pattern.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Check if Two Chessboard Squares Have the Same Color](https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/) | 🟢 Easy |

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
