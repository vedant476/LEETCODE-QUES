# 0748. Largest Number At Least Twice of Others

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 53.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 13.8 MB |
| Submission ID | 2165716286 |
| Solved On | 08 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/largest-number-at-least-twice-of-others/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> where the largest integer is <strong>unique</strong>.</p>

<p>Determine whether the largest element in the array is <strong>at least twice</strong> as much as every other number in the array. If it is, return <em>the <strong>index</strong> of the largest element, or return </em><code>-1</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,6,1,0]
<strong>Output:</strong> 1
<strong>Explanation:</strong> 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> -1
<strong>Explanation:</strong> 4 is less than twice the value of 3, so we return -1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 50</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 100</code></li>
	<li>The largest element in <code>nums</code> is unique.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Scan through the array to find the unique largest element `m`, keeping track of it's index `maxIndex`.

Scan through the array again.  If we find some `x != m` with `m < 2*x`, we should return `-1`.

Otherwise, we should return `maxIndex`.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Keep Multiplying Found Values by Two](https://leetcode.com/problems/keep-multiplying-found-values-by-two/) | 🟢 Easy |
| [Largest Number After Digit Swaps by Parity](https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 13.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
