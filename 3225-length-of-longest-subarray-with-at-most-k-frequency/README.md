# 3225. Length of Longest Subarray With at Most K Frequency

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 60.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 47 ms |
| Memory | 149.4 MB |
| Submission ID | 2104625949 |
| Solved On | 12 Aug 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>The <strong>frequency</strong> of an element <code>x</code> is the number of times it occurs in an array.</p>

<p>An array is called <strong>good</strong> if the frequency of each element in this array is <strong>less than or equal</strong> to <code>k</code>.</p>

<p>Return <em>the length of the <strong>longest</strong> <strong>good</strong> subarray of</em> <code>nums</code><em>.</em></p>

<p>A <strong>subarray</strong> is a contiguous non-empty sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,1,2,3,1,2], k = 2
<strong>Output:</strong> 6
<strong>Explanation:</strong> The longest possible good subarray is [1,2,3,1,2,3] since the values 1, 2, and 3 occur at most twice in this subarray. Note that the subarrays [2,3,1,2,3,1] and [3,1,2,3,1,2] are also good.
It can be shown that there are no good subarrays with length more than 6.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,1,2,1,2,1,2], k = 1
<strong>Output:</strong> 2
<strong>Explanation:</strong> The longest possible good subarray is [1,2] since the values 1 and 2 occur at most once in this subarray. Note that the subarray [2,1] is also good.
It can be shown that there are no good subarrays with length more than 2.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [5,5,5,5,5,5,5], k = 4
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest possible good subarray is [5,5,5,5] since the value 5 occurs 4 times in this subarray.
It can be shown that there are no good subarrays with length more than 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Sliding Window

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For each index <code>i</code>, find the rightmost index <code>j >= i</code> such that the frequency of each element in the subarray <code>[i, j]</code> is at most <code>k</code>.
2. We can use 2 pointers / sliding window to achieve it.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Longest Substring with At Least K Repeating Characters](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 47 ms | 149.4 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
