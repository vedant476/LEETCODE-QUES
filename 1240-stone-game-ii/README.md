# 1240. Stone Game II

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 75.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 3 ms |
| Memory | 13.5 MB |
| Submission ID | 2100773636 |
| Solved On | 10 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/stone-game-ii/

---

<details>
<summary>Show problem statement</summary>

<p>Alice and Bob continue their games with piles of stones. There are a number of piles <strong>arranged in a row</strong>, and each pile has a positive integer number of stones <code>piles[i]</code>. The objective of the game is to end with the most stones.</p>

<p>Alice and Bob take turns, with Alice starting first.</p>

<p>On each player&#39;s turn, that player can take <strong>all the stones</strong> in the <strong>first</strong> <code>X</code> remaining piles, where <code>1 &lt;= X &lt;= 2M</code>. Then, we set <code>M = max(M, X)</code>. Initially, M = 1.</p>

<p>The game continues until all the stones have been taken.</p>

<p>Assuming Alice and Bob play optimally, return the maximum number of stones Alice can get.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">piles = [2,7,9,4,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>If Alice takes one pile at the beginning, Bob takes two piles, then Alice takes 2 piles again. Alice can get <code>2 + 4 + 4 = 10</code> stones in total.</li>
	<li>If Alice takes two piles at the beginning, then Bob can take all three piles left. In this case, Alice get <code>2 + 7 = 9</code> stones in total.</li>
</ul>

<p>So we return 10 since it&#39;s larger.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">piles = [1,2,3,4,5,100]</span></p>

<p><strong>Output:</strong> <span class="example-io">104</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= piles.length &lt;= 100</code></li>
	<li><code>1 &lt;= piles[i]&nbsp;&lt;= 10<sup>4</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Dynamic Programming
- Minimax
- Prefix Sum
- Game Theory
- Zero-Sum Game

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use dynamic programming: the states are (i, m) for the answer of piles[i:] and that given m.

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

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 3 ms | 13.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
