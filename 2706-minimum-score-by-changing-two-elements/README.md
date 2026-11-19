# 2706. Minimum Score by Changing Two Elements

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 50.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 13 ms |
| Memory | 37.8 MB |
| Submission ID | 2199135036 |
| Solved On | 19 Nov 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-score-by-changing-two-elements/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code>.</p>

<ul>
	<li>The <strong>low</strong> score of <code>nums</code> is the <strong>minimum</strong> absolute difference between any two integers.</li>
	<li>The <strong>high</strong> score of <code>nums</code> is the <strong>maximum</strong> absolute difference between any two integers.</li>
	<li>The <strong>score</strong> of <code>nums</code> is the sum of the <strong>high</strong> and <strong>low</strong> scores.</li>
</ul>

<p>Return the <strong>minimum score</strong> after <strong>changing two elements</strong> of <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,4,7,8,5]</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Change <code>nums[0]</code> and <code>nums[1]</code> to be 6 so that <code>nums</code> becomes [6,6,7,8,5].</li>
	<li>The low score is the minimum absolute difference: |6 - 6| = 0.</li>
	<li>The high score is the maximum absolute difference: |8 - 5| = 3.</li>
	<li>The sum of high and low score is 3.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,4,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Change <code>nums[1]</code> and <code>nums[2]</code> to 1 so that <code>nums</code> becomes [1,1,1].</li>
	<li>The sum of maximum absolute difference and minimum absolute difference is 0.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Greedy
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Changing the minimum or maximum values will only minimize the score.
2. Think about what all possible pairs of minimum and maximum values can be changed to form the minimum score.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 13 ms | 37.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
