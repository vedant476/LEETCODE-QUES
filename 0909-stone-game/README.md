# 0909. Stone Game

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 77.0% |
| Language | Rust |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 2.3 MB |
| Submission ID | 2097704719 |
| Solved On | 07 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/stone-game/

---

<details>
<summary>Show problem statement</summary>

<p>Alice and Bob play a game with piles of stones. There are an <strong>even</strong> number of piles arranged in a row, and each pile has a <strong>positive</strong> integer number of stones <code>piles[i]</code>.</p>

<p>The objective of the game is to end with the most stones. The <strong>total</strong> number of stones across all the piles is <strong>odd</strong>, so there are no ties.</p>

<p>Alice and Bob take turns, with <strong>Alice starting first</strong>. Each turn, a player takes the entire pile of stones either from the <strong>beginning</strong> or from the <strong>end</strong> of the row. This continues until there are no more piles left, at which point the person with the <strong>most stones wins</strong>.</p>

<p>Assuming Alice and Bob play optimally, return <code>true</code><em> if Alice wins the game, or </em><code>false</code><em> if Bob wins</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> piles = [5,3,4,5]
<strong>Output:</strong> true
<strong>Explanation:</strong> 
Alice starts first, and can only take the first 5 or the last 5.
Say she takes the first 5, so that the row becomes [3, 4, 5].
If Bob takes 3, then the board is [4, 5], and Alice takes 5 to win with 10 points.
If Bob takes the last 5, then the board is [3, 4], and Alice takes 4 to win with 9 points.
This demonstrated that taking the first 5 was a winning move for Alice, so we return true.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> piles = [3,7,2,3]
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= piles.length &lt;= 500</code></li>
	<li><code>piles.length</code> is <strong>even</strong>.</li>
	<li><code>1 &lt;= piles[i] &lt;= 500</code></li>
	<li><code>sum(piles[i])</code> is <strong>odd</strong>.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Dynamic Programming
- Minimax
- Game Theory
- Zero-Sum Game

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Stone Game V](https://leetcode.com/problems/stone-game-v/) | 🔴 Hard |
| [Stone Game VI](https://leetcode.com/problems/stone-game-vi/) | 🟡 Medium |
| [Stone Game VII](https://leetcode.com/problems/stone-game-vii/) | 🟡 Medium |
| [Stone Game VIII](https://leetcode.com/problems/stone-game-viii/) | 🔴 Hard |
| [Stone Game IX](https://leetcode.com/problems/stone-game-ix/) | 🟡 Medium |
| [Strictly Palindromic Number](https://leetcode.com/problems/strictly-palindromic-number/) | 🟡 Medium |
| [Visit Array Positions to Maximize Score](https://leetcode.com/problems/visit-array-positions-to-maximize-score/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| Rust | 0 ms | 2.3 MB | [solution.rs](./solution.rs) |
| C# | 0 ms | 43.1 MB | [Solution.cs](./Solution.cs) |
| C | 0 ms | 8.6 MB | [solution.c](./solution.c) |
| C++ | 0 ms | 10.3 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
