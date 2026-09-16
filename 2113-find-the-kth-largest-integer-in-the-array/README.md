# 2113. Find the Kth Largest Integer in the Array

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 48.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 8 ms |
| Memory | 59.3 MB |
| Submission ID | 2018756318 |
| Solved On | 01 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array of strings <code>nums</code> and an integer <code>k</code>. Each string in <code>nums</code> represents an integer without leading zeros.</p>

<p>Return <em>the string that represents the </em><code>k<sup>th</sup></code><em><strong> largest integer</strong> in </em><code>nums</code>.</p>

<p><strong>Note</strong>: Duplicate numbers should be counted distinctly. For example, if <code>nums</code> is <code>[&quot;1&quot;,&quot;2&quot;,&quot;2&quot;]</code>, <code>&quot;2&quot;</code> is the first largest integer, <code>&quot;2&quot;</code> is the second-largest integer, and <code>&quot;1&quot;</code> is the third-largest integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [&quot;3&quot;,&quot;6&quot;,&quot;7&quot;,&quot;10&quot;], k = 4
<strong>Output:</strong> &quot;3&quot;
<strong>Explanation:</strong>
The numbers in nums sorted in non-decreasing order are [&quot;3&quot;,&quot;6&quot;,&quot;7&quot;,&quot;10&quot;].
The 4<sup>th</sup> largest integer in nums is &quot;3&quot;.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [&quot;2&quot;,&quot;21&quot;,&quot;12&quot;,&quot;1&quot;], k = 3
<strong>Output:</strong> &quot;2&quot;
<strong>Explanation:</strong>
The numbers in nums sorted in non-decreasing order are [&quot;1&quot;,&quot;2&quot;,&quot;12&quot;,&quot;21&quot;].
The 3<sup>rd</sup> largest integer in nums is &quot;2&quot;.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [&quot;0&quot;,&quot;0&quot;], k = 2
<strong>Output:</strong> &quot;0&quot;
<strong>Explanation:</strong>
The numbers in nums sorted in non-decreasing order are [&quot;0&quot;,&quot;0&quot;].
The 2<sup>nd</sup> largest integer in nums is &quot;0&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= nums[i].length &lt;= 100</code></li>
	<li><code>nums[i]</code> consists of only digits.</li>
	<li><code>nums[i]</code> will not have any leading zeros.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- String
- Divide and Conquer
- Sorting
- Heap (Priority Queue)
- Quickselect

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. If two numbers have different lengths, which one will be larger?
2. The longer number is the larger number.
3. If two numbers have the same length, which one will be larger?
4. Compare the two numbers starting from the most significant digit. Once you have found the first digit that differs, the one with the larger digit is the larger number.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 8 ms | 59.3 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
