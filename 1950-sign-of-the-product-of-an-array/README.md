# 1950. Sign of the Product of an Array

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 64.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 13.7 MB |
| Submission ID | 2070417054 |
| Solved On | 17 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/sign-of-the-product-of-an-array/

---

<details>
<summary>Show problem statement</summary>

<p>Implement a function <code>signFunc(x)</code> that returns:</p>

<ul>
	<li><code>1</code> if <code>x</code> is positive.</li>
	<li><code>-1</code> if <code>x</code> is negative.</li>
	<li><code>0</code> if <code>x</code> is equal to <code>0</code>.</li>
</ul>

<p>You are given an integer array <code>nums</code>. Let <code>product</code> be the product of all values in the array <code>nums</code>.</p>

<p>Return <code>signFunc(product)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,-2,-3,-4,3,2,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The product of all values in the array is 144, and signFunc(144) = 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,5,0,2,-3]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The product of all values in the array is 0, and signFunc(0) = 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,1,-1,1,-1]
<strong>Output:</strong> -1
<strong>Explanation:</strong> The product of all values in the array is -1, and signFunc(-1) = -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>-100 &lt;= nums[i] &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. If there is a 0 in the array the answer is 0
2. To avoid overflow make all the negative numbers -1 and all positive numbers 1 and calculate the prod

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 13.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
