# 2156. Stone Game IX

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 57.5% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 12 ms |
| Memory | 131.4 MB |
| Submission ID | 2108761002 |
| Solved On | 16 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/stone-game-ix/

---

<details>
<summary>Show problem statement</summary>

<p>Alice and Bob continue their games with stones. There is a row of n stones, and each stone has an associated value. You are given an integer array <code>stones</code>, where <code>stones[i]</code> is the <strong>value</strong> of the <code>i<sup>th</sup></code> stone.</p>

<p>Alice and Bob take turns, with <strong>Alice</strong> starting first. On each turn, the player may remove any stone from <code>stones</code>. The player who removes a stone <strong>loses</strong> if the <strong>sum</strong> of the values of <strong>all removed stones</strong> is divisible by <code>3</code>. Bob will win automatically if there are no remaining stones (even if it is Alice&#39;s turn).</p>

<p>Assuming both players play <strong>optimally</strong>, return <code>true</code> <em>if Alice wins and</em> <code>false</code> <em>if Bob wins</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> stones = [2,1]
<strong>Output:</strong> true
<strong>Explanation:</strong>&nbsp;The game will be played as follows:
- Turn 1: Alice can remove either stone.
- Turn 2: Bob removes the remaining stone. 
The sum of the removed stones is 1 + 2 = 3 and is divisible by 3. Therefore, Bob loses and Alice wins the game.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> stones = [2]
<strong>Output:</strong> false
<strong>Explanation:</strong>&nbsp;Alice will remove the only stone, and the sum of the values on the removed stones is 2. 
Since all the stones are removed and the sum of values is not divisible by 3, Bob wins the game.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> stones = [5,1,2,4,3]
<strong>Output:</strong> false
<strong>Explanation:</strong> Bob will always win. One possible way for Bob to win is shown below:
- Turn 1: Alice can remove the second stone with value 1. Sum of removed stones = 1.
- Turn 2: Bob removes the fifth stone with value 3. Sum of removed stones = 1 + 3 = 4.
- Turn 3: Alices removes the fourth stone with value 4. Sum of removed stones = 1 + 3 + 4 = 8.
- Turn 4: Bob removes the third stone with value 2. Sum of removed stones = 1 + 3 + 4 + 2 = 10.
- Turn 5: Alice removes the first stone with value 5. Sum of removed stones = 1 + 3 + 4 + 2 + 5 = 15.
Alice loses the game because the sum of the removed stones (15) is divisible by 3. Bob wins the game.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= stones.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= stones[i] &lt;= 10<sup>4</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Greedy
- Minimax
- Counting
- Game Theory
- Nim Game
- Zero-Sum Game

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. There are limited outcomes given the current sum and the stones remaining.
2. Can we greedily simulate starting with taking a stone with remainder 1 or 2 divided by 3?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Stone Game](https://leetcode.com/problems/stone-game/) | 🟡 Medium |
| [Stone Game II](https://leetcode.com/problems/stone-game-ii/) | 🟡 Medium |
| [Stone Game III](https://leetcode.com/problems/stone-game-iii/) | 🔴 Hard |
| [Stone Game IV](https://leetcode.com/problems/stone-game-iv/) | 🔴 Hard |
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
| C++ | 12 ms | 131.4 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
