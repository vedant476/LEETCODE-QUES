# 2503. Longest Subarray With Maximum Bitwise AND

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 65.4% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 4 ms |
| Memory | 86.3 MB |
| Submission ID | 2003446377 |
| Solved On | 15 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> of size <code>n</code>.</p>

<p>Consider a <strong>non-empty</strong> subarray from <code>nums</code> that has the <strong>maximum</strong> possible <strong>bitwise AND</strong>.</p>

<ul>
	<li>In other words, let <code>k</code> be the maximum value of the bitwise AND of <strong>any</strong> subarray of <code>nums</code>. Then, only subarrays with a bitwise AND equal to <code>k</code> should be considered.</li>
</ul>

<p>Return <em>the length of the <strong>longest</strong> such subarray</em>.</p>

<p>The bitwise AND of an array is the bitwise AND of all the numbers in it.</p>

<p>A <strong>subarray</strong> is a contiguous sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,3,2,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
The maximum possible bitwise AND of a subarray is 3.
The longest subarray with that value is [3,3], so we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The maximum possible bitwise AND of a subarray is 4.
The longest subarray with that value is [4], so we return 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Bit Manipulation
- Brainteaser

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Notice that the bitwise AND of two different numbers will always be strictly less than the maximum of those two numbers.
2. What does that tell us about the nature of the subarray that we should choose?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Number of Different Integers in a String](https://leetcode.com/problems/number-of-different-integers-in-a-string/) | 🟢 Easy |
| [Remove Colored Pieces if Both Neighbors are the Same Color](https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/) | 🟡 Medium |
| [Count Number of Maximum Bitwise-OR Subsets](https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/) | 🟡 Medium |
| [Smallest Subarrays With Maximum Bitwise OR](https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 4 ms | 86.3 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
