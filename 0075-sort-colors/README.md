# 0075. Sort Colors

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 70.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 15 ms |
| Memory | 51.8 MB |
| Submission ID | 1997077254 |
| Solved On | 07 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/sort-colors/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array <code>nums</code> with <code>n</code> objects colored red, white, or blue, sort them <strong><a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> </strong>so that objects of the same color are adjacent, with the colors in the order red, white, and blue.</p>

<p>We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.</p>

<p>You must solve this problem without using the library&#39;s sort function.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [2,0,2,1,1,0]</span></p>

<p><strong>Output:</strong> <span class="example-io">[0,0,1,1,2,2]</span></p>

<p><strong>Explanation:</strong></p>

<p>The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [2,0,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">[0,1,2]</span></p>

<p><strong>Explanation:</strong></p>

<p>The array has one each of 0, 1, and 2, arranged in-place in the order 0, 1, 2.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 300</code></li>
	<li><code>nums[i]</code> is either 0, 1, or 2.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong>&nbsp;Could you come up with a one-pass algorithm using only&nbsp;constant extra space?</p>


</details>

---

## 🏷 Tags

- Array
- Two Pointers
- Sorting
- Quicksort
- Bubble Sort

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. A rather straight forward solution is a two-pass algorithm using counting sort.
2. Iterate the array counting number of 0's, 1's, and 2's.
3. Overwrite array with the total number of 0's, then 1's and followed by 2's.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Sort List](https://leetcode.com/problems/sort-list/) | 🟡 Medium |
| [Wiggle Sort](https://leetcode.com/problems/wiggle-sort/) | 🟡 Medium |
| [Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 15 ms | 51.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
