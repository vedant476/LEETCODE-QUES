# 2714. Left and Right Sum Differences

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 89.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 15 MB |
| Submission ID | 2023767817 |
| Solved On | 06 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/left-and-right-sum-differences/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a <strong>0-indexed</strong> integer array <code>nums</code> of size <code>n</code>.</p>

<p>Define two arrays <code>leftSum</code> and <code>rightSum</code> where:</p>

<ul>
	<li><code>leftSum[i]</code> is the sum of elements to the left of the index <code>i</code> in the array <code>nums</code>. If there is no such element, <code>leftSum[i] = 0</code>.</li>
	<li><code>rightSum[i]</code> is the sum of elements to the right of the index <code>i</code> in the array <code>nums</code>. If there is no such element, <code>rightSum[i] = 0</code>.</li>
</ul>

<p>Return an integer array <code>answer</code> of size <code>n</code> where <code>answer[i] = |leftSum[i] - rightSum[i]|</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [10,4,8,3]
<strong>Output:</strong> [15,1,11,22]
<strong>Explanation:</strong> The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1]
<strong>Output:</strong> [0]
<strong>Explanation:</strong> The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Prefix Sum

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For each index i, maintain two variables leftSum and rightSum.
2. Iterate on the range j: [0 … i - 1] and add nums[j] to the leftSum and similarly iterate on the range j: [i + 1 … nums.length - 1] and add nums[j] to the rightSum.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | 🟢 Easy |
| [Find the Middle Index in Array](https://leetcode.com/problems/find-the-middle-index-in-array/) | 🟢 Easy |
| [Find the Distinct Difference Array](https://leetcode.com/problems/find-the-distinct-difference-array/) | 🟢 Easy |
| [Find the N-th Value After K Seconds](https://leetcode.com/problems/find-the-n-th-value-after-k-seconds/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 15 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
