# 4078. Maximum Alternating Sum of Squares

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 61.2% |
| Language | Python3 |
| Status | ✅ Accepted |
| Runtime | 45 ms |
| Memory | 44.7 MB |
| Submission ID | 2171597304 |
| Solved On | 14 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/maximum-alternating-sum-of-squares/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code>. You may <strong>rearrange the elements</strong> in any order.</p>

<p>The <strong>alternating score</strong> of an array <code>arr</code> is defined as:</p>

<ul>
	<li><code>score = arr[0]<sup>2</sup> - arr[1]<sup>2</sup> + arr[2]<sup>2</sup> - arr[3]<sup>2</sup> + ...</code></li>
</ul>

<p>Return an integer denoting the <strong>maximum possible alternating score</strong> of <code>nums</code> after rearranging its elements.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">12</span></p>

<p><strong>Explanation:</strong></p>

<p>A possible rearrangement for <code>nums</code> is <code>[2,1,3]</code>, which gives the maximum alternating score among all possible rearrangements.</p>

<p>The alternating score is calculated as:</p>

<p><code>score = 2<sup>2</sup> - 1<sup>2</sup> + 3<sup>2</sup> = 4 - 1 + 9 = 12</code></p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,-1,2,-2,3,-3]</span></p>

<p><strong>Output:</strong> <span class="example-io">16</span></p>

<p><strong>Explanation:</strong></p>

<p>A possible rearrangement for <code>nums</code> is <code>[-3,-1,-2,1,3,2]</code>, which gives the maximum alternating score among all possible rearrangements.</p>

<p>The alternating score is calculated as:</p>

<p><code>score = (-3)<sup>2</sup> - (-1)<sup>2</sup> + (-2)<sup>2</sup> - (1)<sup>2</sup> + (3)<sup>2</sup> - (2)<sup>2</sup> = 9 - 1 + 4 - 1 + 9 - 4 = 16</code></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-4 * 10<sup>4</sup> &lt;= nums[i] &lt;= 4 * 10<sup>4</sup></code></li>
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

1. The score uses squares of values. The original signs of <code>nums</code> don't affect the squared terms.
2. In the alternating sum, even indices contribute positively and odd indices negatively.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| Python3 | 45 ms | 44.7 MB | [solution.py](./solution.py) |
| C++ | 10 ms | 176.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
