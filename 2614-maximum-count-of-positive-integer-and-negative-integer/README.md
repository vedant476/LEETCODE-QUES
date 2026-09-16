# 2614. Maximum Count of Positive Integer and Negative Integer

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 74.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 21.5 MB |
| Submission ID | 2010377210 |
| Solved On | 23 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array <code>nums</code> sorted in <strong>non-decreasing</strong> order, return <em>the maximum between the number of positive integers and the number of negative integers.</em></p>

<ul>
	<li>In other words, if the number of positive integers in <code>nums</code> is <code>pos</code> and the number of negative integers is <code>neg</code>, then return the maximum of <code>pos</code> and <code>neg</code>.</li>
</ul>

<p><strong>Note</strong> that <code>0</code> is neither positive nor negative.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [-2,-1,-1,1,2,3]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are 3 positive integers and 3 negative integers. The maximum count among them is 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-3,-2,-1,0,0,1,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are 2 positive integers and 3 negative integers. The maximum count among them is 3.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [5,20,66,1314]
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are 4 positive integers and 0 negative integers. The maximum count among them is 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2000</code></li>
	<li><code>-2000 &lt;= nums[i] &lt;= 2000</code></li>
	<li><code>nums</code> is sorted in a <strong>non-decreasing order</strong>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Can you solve the problem in <code>O(log(n))</code> time complexity?</p>


</details>

---

## 🏷 Tags

- Array
- Binary Search
- Counting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Count how many positive integers and negative integers are in the array.
2. Since the array is sorted, can we use the binary search?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Binary Search](https://leetcode.com/problems/binary-search/) | 🟢 Easy |
| [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 21.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
