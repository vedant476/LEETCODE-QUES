# 4075. Count Subarrays With Majority Element II

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 64.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 1 ms |
| Memory | 95.6 MB |
| Submission ID | 2046527822 |
| Solved On | 26 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-subarrays-with-majority-element-ii/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> and an integer <code>target</code>.</p>

<p>Return the number of <strong><span data-keyword="subarray-nonempty">subarrays</span></strong> of <code>nums</code> in which <code>target</code> is the <strong>majority element</strong>.</p>

<p>The <strong>majority element</strong> of a subarray is the element that appears <strong>strictly more than half</strong> of the times in that subarray.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,2,3], target = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong></p>

<p>Valid subarrays with <code>target = 2</code> as the majority element:</p>

<ul>
	<li><code>nums[1..1] = [2]</code></li>
	<li><code>nums[2..2] = [2]</code></li>
	<li><code>nums[1..2] = [2,2]</code></li>
	<li><code>nums[0..2] = [1,2,2]</code></li>
	<li><code>nums[1..3] = [2,2,3]</code></li>
</ul>

<p>So there are 5 such subarrays.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,1,1,1], target = 1</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation: </strong></p>

<p><strong>​​​​​​​</strong>All 10 subarrays have 1 as the majority element.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3], target = 4</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p><code>target = 4</code> does not appear in <code>nums</code> at all. Therefore, there cannot be any subarray where 4 is the majority element. Hence the answer is 0.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>​​​​​​​5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>​​​​​​​9</sup></code></li>
	<li><code>1 &lt;= target &lt;= 10<sup>9</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Divide and Conquer
- Segment Tree
- Merge Sort
- Prefix Sum

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Convert to +1/-1: let <code>arr[i] = 1</code> if <code>nums[i] == target</code> else <code>-1</code>.
2. Build prefix sums: <code>pref[0]=0</code>, <code>pref[k] = pref[k - 1] + arr[k - 1]</code> for <code>k=1..n</code>.
3. Count pairs <code>(i < j)</code> with <code>pref[j] > pref[i]</code> (these correspond to subarrays where <code>target</code> is majority).
4. Use coordinate compression on all <code>pref</code> values and a Fenwick tree / ordered map: iterate <code>k</code> from <code>0..n</code>, query how many previous <code>pref</code> are < current, add to <code>ans</code>, then update.
5. If <code>target</code> never appears return <code>0</code>.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 1 ms | 95.6 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
