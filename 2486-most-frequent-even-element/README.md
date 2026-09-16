# 2486. Most Frequent Even Element

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 54.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 3 ms |
| Memory | 34.7 MB |
| Submission ID | 2027679651 |
| Solved On | 09 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/most-frequent-even-element/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer array <code>nums</code>, return <em>the most frequent even element</em>.</p>

<p>If there is a tie, return the <strong>smallest</strong> one. If there is no such element, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,1,2,2,4,4,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
The even elements are 0, 2, and 4. Of these, 2 and 4 appear the most.
We return the smallest one, which is 2.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [4,4,4,9,2,4]
<strong>Output:</strong> 4
<strong>Explanation:</strong> 4 is the even element appears the most.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [29,47,21,41,13,37,25,7]
<strong>Output:</strong> -1
<strong>Explanation:</strong> There is no even element.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Counting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Could you count the frequency of each even element in the array?
2. Would a hashmap help?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Majority Element](https://leetcode.com/problems/majority-element/) | 🟢 Easy |
| [Majority Element II](https://leetcode.com/problems/majority-element-ii/) | 🟡 Medium |
| [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | 🟡 Medium |
| [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 3 ms | 34.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
