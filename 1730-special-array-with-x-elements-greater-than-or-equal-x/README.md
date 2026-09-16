# 1730. Special Array With X Elements Greater Than or Equal X

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 66.9% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 11.1 MB |
| Submission ID | 2014177839 |
| Solved On | 27 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array <code>nums</code> of non-negative integers. <code>nums</code> is considered <strong>special</strong> if there exists a number <code>x</code> such that there are <strong>exactly</strong> <code>x</code> numbers in <code>nums</code> that are <strong>greater than or equal to</strong> <code>x</code>.</p>

<p>Notice that <code>x</code> <strong>does not</strong> have to be an element in <code>nums</code>.</p>

<p>Return <code>x</code> <em>if the array is <strong>special</strong>, otherwise, return </em><code>-1</code>. It can be proven that if <code>nums</code> is special, the value for <code>x</code> is <strong>unique</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,5]
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are 2 values (3 and 5) that are greater than or equal to 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,0]
<strong>Output:</strong> -1
<strong>Explanation:</strong> No numbers fit the criteria for x.
If x = 0, there should be 0 numbers &gt;= x, but there are 2.
If x = 1, there should be 1 number &gt;= x, but there are 0.
If x = 2, there should be 2 numbers &gt;= x, but there are 0.
x cannot be greater since there are only 2 numbers in nums.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,4,3,0,4]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are 3 values that are greater than or equal to 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Binary Search
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Count the number of elements greater than or equal to x for each x in the range [0, nums.length].
2. If for any x, the condition satisfies, return that x. Otherwise, there is no answer.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 11.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
