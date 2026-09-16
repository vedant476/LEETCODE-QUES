# 0229. Majority Element II

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 56.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 4 ms |
| Memory | 23.5 MB |
| Submission ID | 2041896255 |
| Solved On | 22 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/majority-element-ii/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer array of size <code>n</code>, find all elements that appear more than <code>&lfloor;n / 3&rfloor;</code> times.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,2,3]
<strong>Output:</strong> [3]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1]
<strong>Output:</strong> [1]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2]
<strong>Output:</strong> [1,2]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you solve the problem in linear time and in <code>O(1)</code> space?</p>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Sorting
- Counting
- Boyer–Moore Majority Vote Algorithm

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Think about the possible number of elements that can appear more than ⌊ n/3 ⌋ times in the array.
2. It can be at most two. Why?
3. Consider using Boyer-Moore Voting Algorithm, which is efficient for finding elements that appear more than a certain threshold.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Majority Element](https://leetcode.com/problems/majority-element/) | 🟢 Easy |
| [Check If a Number Is Majority Element in a Sorted Array](https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/) | 🟢 Easy |
| [Most Frequent Even Element](https://leetcode.com/problems/most-frequent-even-element/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 4 ms | 23.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
