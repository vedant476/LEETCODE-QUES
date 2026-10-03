# 1103. Moving Stones Until Consecutive

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 52.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.2 MB |
| Submission ID | 2161437154 |
| Solved On | 04 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/moving-stones-until-consecutive/

---

<details>
<summary>Show problem statement</summary>

<p>There are three stones in different positions on the X-axis. You are given three integers <code>a</code>, <code>b</code>, and <code>c</code>, the positions of the stones.</p>

<p>In one move, you pick up a stone at an endpoint (i.e., either the lowest or highest position stone), and move it to an unoccupied position between those endpoints. Formally, let&#39;s say the stones are currently at positions <code>x</code>, <code>y</code>, and <code>z</code> with <code>x &lt; y &lt; z</code>. You pick up the stone at either position <code>x</code> or position <code>z</code>, and move that stone to an integer position <code>k</code>, with <code>x &lt; k &lt; z</code> and <code>k != y</code>.</p>

<p>The game ends when you cannot make any more moves (i.e., the stones are in three consecutive positions).</p>

<p>Return <em>an integer array </em><code>answer</code><em> of length </em><code>2</code><em> where</em>:</p>

<ul>
	<li><code>answer[0]</code> <em>is the minimum number of moves you can play, and</em></li>
	<li><code>answer[1]</code> <em>is the maximum number of moves you can play</em>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> a = 1, b = 2, c = 5
<strong>Output:</strong> [1,2]
<strong>Explanation:</strong> Move the stone from 5 to 3, or move the stone from 5 to 4 to 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> a = 4, b = 3, c = 2
<strong>Output:</strong> [0,0]
<strong>Explanation:</strong> We cannot make any moves.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> a = 3, b = 5, c = 1
<strong>Output:</strong> [1,2]
<strong>Explanation:</strong> Move the stone from 1 to 4; or move the stone from 1 to 2 to 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a, b, c &lt;= 100</code></li>
	<li><code>a</code>, <code>b</code>, and <code>c</code> have different values.</li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Brainteaser

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For the minimum:  We can always do it in at most 2 moves, by moving one stone next to another, then the third stone next to the other two.  When can we do it in 1 move?  0 moves?

For the maximum:  Every move, the maximum position minus the minimum position must decrease by at least 1.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
