# 1617. Stone Game IV

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 65.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 6 ms |
| Memory | 8.9 MB |
| Submission ID | 2101950667 |
| Solved On | 11 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/stone-game-iv/

---

<details>
<summary>Show problem statement</summary>

<p>Alice and Bob take turns playing a game, with Alice starting first.</p>

<p>Initially, there are <code>n</code> stones in a pile. On each player&#39;s turn, that player makes a <em>move</em> consisting of removing <strong>any</strong> non-zero <strong>square number</strong> of stones in the pile.</p>

<p>Also, if a player cannot make a move, he/she loses the game.</p>

<p>Given a positive integer <code>n</code>, return <code>true</code> if and only if Alice wins the game otherwise return <code>false</code>, assuming both players play optimally.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> true
<strong>Explanation: </strong>Alice can remove 1 stone winning the game because Bob doesn&#39;t have any moves.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> false
<strong>Explanation: </strong>Alice can only remove 1 stone, after that Bob removes the last one winning the game (2 -&gt; 1 -&gt; 0).
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> true
<strong>Explanation:</strong> n is already a perfect square, Alice can win with one move, removing 4 stones (4 -&gt; 0).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Dynamic Programming
- Minimax
- Game Theory
- Nim Game
- Sprague–Grundy Theorem
- Zero-Sum Game

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use dynamic programming to keep track of winning and losing states. Given some number of stones, Alice can win if she can force Bob onto a losing state.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Stone Game V](https://leetcode.com/problems/stone-game-v/) | 🔴 Hard |
| [Stone Game VI](https://leetcode.com/problems/stone-game-vi/) | 🟡 Medium |
| [Stone Game VII](https://leetcode.com/problems/stone-game-vii/) | 🟡 Medium |
| [Stone Game VIII](https://leetcode.com/problems/stone-game-viii/) | 🔴 Hard |
| [Stone Game IX](https://leetcode.com/problems/stone-game-ix/) | 🟡 Medium |
| [Stone Removal Game](https://leetcode.com/problems/stone-removal-game/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 6 ms | 8.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
