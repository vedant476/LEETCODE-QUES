# 4316. Minimum Swaps to Move Zeros to End

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 60.4% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 1 ms |
| Memory | 31.7 MB |
| Submission ID | 2016143573 |
| Solved On | 29 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-swaps-to-move-zeros-to-end/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code>.</p>

<p>In one operation, you can choose any two <strong>distinct</strong> indices <code>i</code> and <code>j</code> and swap <code>nums[i]</code> and <code>nums[j]</code>.</p>

<p>Return an integer denoting the <strong>minimum</strong> number of operations required to move all 0s to the end of the array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [0,1,0,3,12]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p>We perform the following swap operations:</p>

<ul>
	<li>Swap <code>nums[0]</code> and <code>nums[3]</code>, giving <code>nums = [3, 1, 0, 0, 12]</code>.</li>
	<li>Swap <code>nums[2]</code> and <code>nums[4]</code>, giving <code>nums = [3, 1, 12, 0, 0]</code>.</li>
</ul>

<p>Thus, the answer is 2.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [0,1,0,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>We perform the following swap operations:</p>

<ul>
	<li>Swap <code>nums[0]</code> and <code>nums[3]</code>, giving <code>nums = [2, 1, 0, 0]</code>.</li>
</ul>

<p>Thus, the answer is 1.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,0]</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>The array already satisfies the condition. Therefore, no swap operations are needed.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Two Pointers

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. The values of non-zero elements do not matter.
Convert the array to zeros and ones.
2. All ones that are in positions where a zero should be must be swapped out.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 1 ms | 31.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
