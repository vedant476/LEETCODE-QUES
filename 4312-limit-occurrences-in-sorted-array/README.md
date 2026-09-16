# 4312. Limit Occurrences in Sorted Array

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 73.5% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 33.1 MB |
| Submission ID | 2016128576 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/limit-occurrences-in-sorted-array/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a <strong>sorted</strong> integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>Return an array such that each <strong>distinct</strong> element appears <strong>at most</strong> <code>k</code> times, while preserving the relative order of the elements in <code>nums</code>.</p>

<p>Note: If a distinct element appears <strong>at least</strong> <code>k</code> times, then it must appear <strong>exactly</strong> <code>k</code> times in the resulting array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,1,1,2,2,3], k = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">[1,1,2,2,3]</span></p>

<p><strong>Explanation:</strong></p>

<p>Each element can appear at most 2 times.</p>

<ul>
	<li>The element 1 appears 3 times, so only 2 occurrences are kept.</li>
	<li>The element 2 appears 2 times, so both occurrences are kept.</li>
	<li>The element 3 appears 1 time, so it is kept.</li>
</ul>

<p>Thus, the resulting array is <code>[1, 1, 2, 2, 3]</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3], k = 1</span></p>

<p><strong>Output:</strong> <span class="example-io">[1,2,3]</span></p>

<p><strong>Explanation:</strong></p>

<p>All elements are distinct and already appear at most once, so the array remains unchanged.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
	<li><code>nums</code> is sorted in non-decreasing order.</li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow-up:</strong></p>

<ul>
	<li>Can you solve this in-place using O(1) extra space?</li>
	<li>Note that the space used for returning or resizing the result does not count toward the space complexity mentioned above, as some languages do not support in-place resizing.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Two Pointers

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Go through the array, maintaining a counter of the number of occurrences of the largest integer so far.
2. If the counter is currently more than <code>k</code>, ignore the current element.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 33.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
