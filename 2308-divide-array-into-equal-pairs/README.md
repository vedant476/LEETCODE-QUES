# 2308. Divide Array Into Equal Pairs

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 79.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 2 ms |
| Memory | 18.3 MB |
| Submission ID | 2009672899 |
| Solved On | 22 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/divide-array-into-equal-pairs/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> consisting of <code>2 * n</code> integers.</p>

<p>You need to divide <code>nums</code> into <code>n</code> pairs such that:</p>

<ul>
	<li>Each element belongs to <strong>exactly one</strong> pair.</li>
	<li>The elements present in a pair are <strong>equal</strong>.</li>
</ul>

<p>Return <code>true</code> <em>if nums can be divided into</em> <code>n</code> <em>pairs, otherwise return</em> <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,2,3,2,2,2]
<strong>Output:</strong> true
<strong>Explanation:</strong> 
There are 6 elements in nums, so they should be divided into 6 / 2 = 3 pairs.
If nums is divided into the pairs (2, 2), (3, 3), and (2, 2), it will satisfy all the conditions.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> 
There is no way to divide nums into 4 / 2 = 2 pairs such that the pairs satisfy every condition.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>nums.length == 2 * n</code></li>
	<li><code>1 &lt;= n &lt;= 500</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 500</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Bit Manipulation
- Counting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For any number x in the range [1, 500], count the number of elements in nums whose values are equal to x.
2. The elements with equal value can be divided completely into pairs if and only if their count is even.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/) | 🟢 Easy |
| [Distribute Elements Into Two Arrays I](https://leetcode.com/problems/distribute-elements-into-two-arrays-i/) | 🟢 Easy |
| [Distribute Elements Into Two Arrays II](https://leetcode.com/problems/distribute-elements-into-two-arrays-ii/) | 🔴 Hard |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 2 ms | 18.3 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
