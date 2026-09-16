# 3375. Kth Smallest Amount With Single Denomination Combination

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 50.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 20.7 MB |
| Submission ID | 2115401953 |
| Solved On | 21 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/kth-smallest-amount-with-single-denomination-combination/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>coins</code> representing coins of different denominations and an integer <code>k</code>.</p>

<p>You have an infinite number of coins of each denomination. However, you are <strong>not allowed</strong> to combine coins of different denominations.</p>

<p>Return the <code>k<sup>th</sup></code> <strong>smallest</strong> amount that can be made using these coins.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block" style="
    border-color: var(--border-tertiary);
    border-left-width: 2px;
    color: var(--text-secondary);
    font-size: .875rem;
    margin-bottom: 1rem;
    margin-top: 1rem;
    overflow: visible;
    padding-left: 1rem;
">
<p><strong>Input:</strong> <span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
">coins = [3,6,9], k = 3</span></p>

<p><strong>Output:</strong> <span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
"> 9</span></p>

<p><strong>Explanation:</strong> The given coins can make the following amounts:<br />
Coin 3 produces multiples of 3: 3, 6, 9, 12, 15, etc.<br />
Coin 6 produces multiples of 6: 6, 12, 18, 24, etc.<br />
Coin 9 produces multiples of 9: 9, 18, 27, 36, etc.<br />
All of the coins combined produce: 3, 6, <u><strong>9</strong></u>, 12, 15, etc.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block" style="
    border-color: var(--border-tertiary);
    border-left-width: 2px;
    color: var(--text-secondary);
    font-size: .875rem;
    margin-bottom: 1rem;
    margin-top: 1rem;
    overflow: visible;
    padding-left: 1rem;
">
<p><strong>Input:</strong><span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
"> coins = [5,2], k = 7</span></p>

<p><strong>Output:</strong><span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
"> 12 </span></p>

<p><strong>Explanation:</strong> The given coins can make the following amounts:<br />
Coin 5 produces multiples of 5: 5, 10, 15, 20, etc.<br />
Coin 2 produces multiples of 2: 2, 4, 6, 8, 10, 12, etc.<br />
All of the coins combined produce: 2, 4, 5, 6, 8, 10, <u><strong>12</strong></u>, 14, 15, etc.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= coins.length &lt;= 15</code></li>
	<li><code>1 &lt;= coins[i] &lt;= 25</code></li>
	<li><code>1 &lt;= k &lt;= 2 * 10<sup>9</sup></code></li>
	<li><code>coins</code> contains pairwise distinct integers.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Binary Search
- Bit Manipulation
- Combinatorics
- Number Theory

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Binary search the answer <code>x</code>.
2. Use the inclusion-exclusion principle to count the number of distinct amounts that can be made up to <code>x</code>.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Kth Smallest Number in Multiplication Table](https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/) | 🔴 Hard |
| [Find the Number of Possible Ways for an Event](https://leetcode.com/problems/find-the-number-of-possible-ways-for-an-event/) | 🔴 Hard |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 20.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
