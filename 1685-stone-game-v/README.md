# 1685. Stone Game V

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 59.0% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 8 ms |
| Memory | 15.2 MB |
| Submission ID | 2111471155 |
| Solved On | 18 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/stone-game-v/

---

<details>
<summary>Show problem statement</summary>

<p>There are several stones <strong>arranged in a row</strong>, and each stone has an associated value which is an integer given in the array <code>stoneValue</code>.</p>

<p>In each round of the game, Alice divides the row into <strong>two non-empty rows</strong> (i.e. left row and right row), then Bob calculates the value of each row which is the sum of the values of all the stones in this row. Bob throws away the row which has the maximum value, and Alice&#39;s score increases by the value of the remaining row. If the value of the two rows are equal, Bob lets Alice decide which row will be thrown away. The next round starts with the remaining row.</p>

<p>The game ends when there is only <strong>one stone remaining</strong>. Alice&#39;s score is initially <strong>zero</strong>.</p>

<p>Return <i>the maximum score that Alice can obtain</i>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> stoneValue = [6,2,3,4,5,5]
<strong>Output:</strong> 18
<strong>Explanation:</strong> In the first round, Alice divides the row to [6,2,3], [4,5,5]. The left row has the value 11 and the right row has value 14. Bob throws away the right row and Alice&#39;s score is now 11.
In the second round Alice divides the row to [6], [2,3]. This time Bob throws away the left row and Alice&#39;s score becomes 16 (11 + 5).
The last round Alice has only one choice to divide the row which is [2], [3]. Bob throws away the right row and Alice&#39;s score is now 18 (16 + 2). The game ends because only one stone is remaining in the row.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> stoneValue = [7,7,7,7,7,7,7]
<strong>Output:</strong> 28
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> stoneValue = [4]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= stoneValue.length &lt;= 500</code></li>
	<li><code>1 &lt;= stoneValue[i] &lt;= 10<sup>6</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Dynamic Programming
- Game Theory

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. We need to try all possible divisions for the current row to get the max score.
2. As calculating all possible divisions will lead us to calculate some sub-problems more than once, we need to think of dynamic programming.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Stone Game](https://leetcode.com/problems/stone-game/) | 🟡 Medium |
| [Stone Game II](https://leetcode.com/problems/stone-game-ii/) | 🟡 Medium |
| [Stone Game III](https://leetcode.com/problems/stone-game-iii/) | 🔴 Hard |
| [Stone Game IV](https://leetcode.com/problems/stone-game-iv/) | 🔴 Hard |
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
| C++ | 8 ms | 15.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
