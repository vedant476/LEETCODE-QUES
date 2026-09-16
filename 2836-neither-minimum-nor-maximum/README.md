# 2836. Neither Minimum nor Maximum

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 76.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 6 ms |
| Memory | 97.1 MB |
| Submission ID | 2009667224 |
| Solved On | 22 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/neither-minimum-nor-maximum/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer array <code>nums</code> containing <strong>distinct</strong> <strong>positive</strong> integers, find and return <strong>any</strong> number from the array that is neither the <strong>minimum</strong> nor the <strong>maximum</strong> value in the array, or <strong><code>-1</code></strong> if there is no such number.</p>

<p>Return <em>the selected integer.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,2,1,4]
<strong>Output:</strong> 2
<strong>Explanation:</strong> In this example, the minimum value is 1 and the maximum value is 4. Therefore, either 2 or 3 can be valid answers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2]
<strong>Output:</strong> -1
<strong>Explanation:</strong> Since there is no number in nums that is neither the maximum nor the minimum, we cannot select a number that satisfies the given condition. Therefore, there is no answer.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,1,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong> Since 2 is neither the maximum nor the minimum value in nums, it is the only valid answer. 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
	<li>All values in <code>nums</code> are distinct</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Find any value in the array that is not the minimum or the maximum value.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Third Maximum Number](https://leetcode.com/problems/third-maximum-number/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 6 ms | 97.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
