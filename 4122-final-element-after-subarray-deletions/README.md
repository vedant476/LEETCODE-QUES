# 4122. Final Element After Subarray Deletions

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 41.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 179.8 MB |
| Submission ID | 2003465401 |
| Solved On | 15 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/final-element-after-subarray-deletions/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code>.</p>

<p>Two players, Alice and Bob, play a game in turns, with Alice playing first.</p>

<ul>
	<li>In each turn, the current player chooses any <strong><span data-keyword="subarray-nonempty">subarray</span></strong> <code>nums[l..r]</code> such that <code>r - l + 1 &lt; m</code>, where <code>m</code> is the <strong>current length</strong> of the array.</li>
	<li>The selected <strong>subarray is removed</strong>, and the remaining elements are <strong>concatenated</strong> to form the new array.</li>
	<li>The game continues until <strong>only one</strong> element remains.</li>
</ul>

<p>Alice aims to <strong>maximize</strong> the final element, while Bob aims to <strong>minimize</strong> it. Assuming both play optimally, return the value of the final remaining element.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,5,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p>One valid optimal strategy:</p>

<ul>
	<li>Alice removes <code>[1]</code>, array becomes <code>[5, 2]</code>.</li>
	<li>Bob removes <code>[5]</code>, array becomes <code>[2]</code>​​​​​​​. Thus, the answer is 2.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,7]</span></p>

<p><strong>Output:</strong> <span class="example-io">7</span></p>

<p><strong>Explanation:</strong></p>

<p>Alice removes <code>[3]</code>, leaving the array <code>[7]</code>. Since Bob cannot play a turn now, the answer is 7.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Brainteaser
- Game Theory

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Observe which positions Alice can force to survive her first move so that Bob cannot remove them afterward.
2. Any middle element can always be removed by Bob, so only the endpoints can be protected.
3. Alice chooses the better endpoint: the answer is <code>max(nums[0], nums[len(nums) - 1])</code>.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 179.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
