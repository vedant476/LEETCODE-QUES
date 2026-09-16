# 3511. Find the Winning Player in Coin Game

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 53.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.9 MB |
| Submission ID | 2016671513 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-the-winning-player-in-coin-game/

---

<details>
<summary>Show problem statement</summary>

<p>You are given two <strong>positive</strong> integers <code>x</code> and <code>y</code>, denoting the number of coins with values 75 and 10 <em>respectively</em>.</p>

<p>Alice and Bob are playing a game. Each turn, starting with <strong>Alice</strong>, the player must pick up coins with a <strong>total</strong> value 115. If the player is unable to do so, they <strong>lose</strong> the game.</p>

<p>Return the <em>name</em> of the player who wins the game if both players play <strong>optimally</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">x = 2, y = 7</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;Alice&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>The game ends in a single turn:</p>

<ul>
	<li>Alice picks 1 coin with a value of 75 and 4 coins with a value of 10.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">x = 4, y = 11</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;Bob&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>The game ends in 2 turns:</p>

<ul>
	<li>Alice picks 1 coin with a value of 75 and 4 coins with a value of 10.</li>
	<li>Bob picks 1 coin with a value of 75 and 4 coins with a value of 10.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= x, y &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Simulation
- Game Theory

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. The only way to make 115 is to use one coin of value 75 and four coins of value 10. Each turn uses up these many coins.
2. Hence the number of turns is <code>min(x, y / 4)</code>.
3. Determine the winner from its parity.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Can I Win](https://leetcode.com/problems/can-i-win/) | 🟡 Medium |
| [Predict the Winner](https://leetcode.com/problems/predict-the-winner/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 7.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
