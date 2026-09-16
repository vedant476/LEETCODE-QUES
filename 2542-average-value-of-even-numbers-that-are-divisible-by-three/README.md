# 2542. Average Value of Even Numbers That Are Divisible by Three

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 63.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 17.2 MB |
| Submission ID | 2070420022 |
| Solved On | 17 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer array <code>nums</code> of <strong>positive</strong> integers, return <em>the average value of all even integers that are divisible by</em> <code>3</code><i>.</i></p>

<p>Note that the <strong>average</strong> of <code>n</code> elements is the <strong>sum</strong> of the <code>n</code> elements divided by <code>n</code> and <strong>rounded down</strong> to the nearest integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,6,10,12,15]
<strong>Output:</strong> 9
<strong>Explanation:</strong> 6 and 12 are even numbers that are divisible by 3. (6 + 12) / 2 = 9.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,4,7,10]
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no single number that satisfies the requirement, so return 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. What is the property of a number if it is divisible by both 2 and 3 at the same time?
2. It is equivalent to finding all the numbers that are divisible by 6.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Binary Prefix Divisible By 5](https://leetcode.com/problems/binary-prefix-divisible-by-5/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 17.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
