# 0135. Candy

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 49.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 2 ms |
| Memory | 22.2 MB |
| Submission ID | 2013869149 |
| Solved On | 26 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/candy/

---

<details>
<summary>Show problem statement</summary>

<p>There are <code>n</code> children standing in a line.</p>

<p>Each child is assigned a rating value given in the integer array <code>ratings</code>.</p>

<p>You are giving candies to these children subjected to the following requirements:</p>

<ul>
	<li>Each child must have <strong>at least</strong> one candy.</li>
	<li>Children with a <strong>higher</strong> rating get more candies than their neighbors.</li>
</ul>

<p>Return the <strong>minimum</strong> number of candies you need to have to distribute the candies to the children.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> ratings = [1,0,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong> You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> ratings = [1,2,2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == ratings.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= ratings[i] &lt;= 5 * 10<sup>4</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Greedy

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Minimize Maximum Value in a Grid](https://leetcode.com/problems/minimize-maximum-value-in-a-grid/) | 🔴 Hard |
| [Minimum Number of Operations to Satisfy Conditions](https://leetcode.com/problems/minimum-number-of-operations-to-satisfy-conditions/) | 🟡 Medium |
| [Check if Grid Satisfies Conditions](https://leetcode.com/problems/check-if-grid-satisfies-conditions/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 2 ms | 22.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
