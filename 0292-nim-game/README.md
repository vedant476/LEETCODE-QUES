# 0292. Nim Game

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 60.4% |
| Language | Java |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 42.1 MB |
| Submission ID | 2003413635 |
| Solved On | 15 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/nim-game/

---

<details>
<summary>Show problem statement</summary>

<p>You are playing the following Nim Game with your friend:</p>

<ul>
	<li>Initially, there is a heap of stones on the table.</li>
	<li>You and your friend will alternate taking turns, and <strong>you go first</strong>.</li>
	<li>On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.</li>
	<li>The one who removes the last stone is the winner.</li>
</ul>

<p>Given <code>n</code>, the number of stones in the heap, return <code>true</code><em> if you can win the game assuming both you and your friend play optimally, otherwise return </em><code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> false
<strong>Explanation:</strong> These are the possible outcomes:
1. You remove 1 stone. Your friend removes 3 stones, including the last stone. Your friend wins.
2. You remove 2 stones. Your friend removes 2 stones, including the last stone. Your friend wins.
3. You remove 3 stones. Your friend removes the last stone. Your friend wins.
In all outcomes, your friend wins.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Brainteaser
- Minimax
- Game Theory
- Nim Game
- Impartial Game

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. If there are 5 stones in the heap, could you figure out a way to remove the stones such that you will always be the winner?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Flip Game II](https://leetcode.com/problems/flip-game-ii/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| Java | 0 ms | 42.1 MB | [Solution.java](./Solution.java) |
| C++ | 0 ms | 7.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
