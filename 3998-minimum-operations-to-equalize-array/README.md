# 3998. Minimum Operations to Equalize Array

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 61.0% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 30.6 MB |
| Submission ID | 2002640429 |
| Solved On | 14 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-operations-to-equalize-array/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> of length <code>n</code>.</p>

<p>In one operation, choose any subarray <code>nums[l...r]</code> (<code>0 &lt;= l &lt;= r &lt; n</code>) and <strong>replace</strong> each element in that subarray with the <strong>bitwise AND</strong> of all elements.</p>

<p>Return the <strong>minimum</strong> number of operations required to make all elements of <code>nums</code> equal.</p>
A <strong>subarray</strong> is a contiguous <b>non-empty</b> sequence of elements within an array.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>Choose <code>nums[0...1]</code>: <code>(1 AND 2) = 0</code>, so the array becomes <code>[0, 0]</code> and all elements are equal in 1 operation.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [5,5,5]</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p><code>nums</code> is <code>[5, 5, 5]</code> which already has all elements equal, so 0 operations are required.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
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

1. If all elements of <code>nums</code> are already equal, how many operations are needed?
2. The answer is either <code>0</code> or <code>1</code>.
3. The answer is <code>0</code> if all values in the array are initially equal, and <code>1</code> otherwise, since you can apply the AND operation on the whole array in one step.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 30.6 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
