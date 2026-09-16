# 1234. Number of Paths with Max Score

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 63.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 8 ms |
| Memory | 9.7 MB |
| Submission ID | 2057153338 |
| Solved On | 05 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/number-of-paths-with-max-score/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a square <code>board</code>&nbsp;of characters. You can move on the board starting at the bottom right square marked with the character&nbsp;<code>&#39;S&#39;</code>.</p>

<p>You need&nbsp;to reach the top left square marked with the character <code>&#39;E&#39;</code>. The rest of the squares are labeled either with a numeric character&nbsp;<code>1, 2, ..., 9</code> or with an obstacle <code>&#39;X&#39;</code>. In one move you can go up, left or up-left (diagonally) only if there is no obstacle there.</p>

<p>Return a list of two integers: the first integer is the maximum sum of numeric characters you can collect, and the second is the number of such paths that you can take to get that maximum sum, <strong>taken modulo <code>10^9 + 7</code></strong>.</p>

<p>In case there is no path, return&nbsp;<code>[0, 0]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> board = ["E23","2X2","12S"]
<strong>Output:</strong> [7,1]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> board = ["E12","1X1","21S"]
<strong>Output:</strong> [4,2]
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> board = ["E11","XXX","11S"]
<strong>Output:</strong> [0,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= board.length == board[i].length &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Dynamic Programming
- Matrix

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use dynamic programming to find the path with the max score.
2. Use another dynamic programming array to count the number of paths with max score.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 8 ms | 9.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
