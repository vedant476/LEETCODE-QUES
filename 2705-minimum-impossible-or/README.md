# 2705. Minimum Impossible OR

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 59.5% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 50.2 MB |
| Submission ID | 2008642373 |
| Solved On | 21 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-impossible-or/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a <strong>0-indexed</strong>&nbsp;integer array <code>nums</code>.</p>

<p>We say that an integer x is <strong>expressible</strong> from <code>nums</code> if there exist some integers <code>0 &lt;= index<sub>1</sub> &lt; index<sub>2</sub> &lt; ... &lt; index<sub>k</sub> &lt; nums.length</code> for which <code>nums[index<sub>1</sub>] | nums[index<sub>2</sub>] | ... | nums[index<sub>k</sub>] = x</code>. In other words, an integer is expressible if it can be written as the bitwise OR of some subsequence of <code>nums</code>.</p>

<p>Return <em>the minimum <strong>positive non-zero integer</strong>&nbsp;that is not </em><em>expressible from </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,1]
<strong>Output:</strong> 4
<strong>Explanation:</strong> 1 and 2 are already present in the array. We know that 3 is expressible, since nums[0] | nums[1] = 2 | 1 = 3. Since 4 is not expressible, we return 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [5,3,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong> We can show that 1 is the smallest number that is not expressible.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
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

1. Think about forming numbers in the powers of 2 using their bit representation.
2. The minimum power of 2 not present in the array will be the first number that could not be expressed using the given operation.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 50.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
