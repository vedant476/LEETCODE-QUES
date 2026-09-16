# 2106. Find Greatest Common Divisor of Array

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 83.5% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 16.3 MB |
| Submission ID | 2072495545 |
| Solved On | 18 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-greatest-common-divisor-of-array/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer array <code>nums</code>, return<strong> </strong><em>the <strong>greatest common divisor</strong> of the smallest number and largest number in </em><code>nums</code>.</p>

<p>The <strong>greatest common divisor</strong> of two numbers is the largest positive integer that evenly divides both numbers.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,5,6,9,10]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [7,5,6,8,3]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The smallest number in nums is 3.
The largest number in nums is 8.
The greatest common divisor of 3 and 8 is 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,3]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The smallest number in nums is 3.
The largest number in nums is 3.
The greatest common divisor of 3 and 3 is 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Math
- Number Theory
- Euclidean Algorithm
- Greatest Common Divisor

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Find the minimum and maximum in one iteration. Let them be mn and mx.
2. Try all the numbers in the range [1, mn] and check the largest number which divides both of them.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/) | 🟢 Easy |
| [Number of Different Subsequences GCDs](https://leetcode.com/problems/number-of-different-subsequences-gcds/) | 🔴 Hard |
| [Three Divisors](https://leetcode.com/problems/three-divisors/) | 🟢 Easy |
| [Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/) | 🟢 Easy |
| [Number of Subarrays With GCD Equal to K](https://leetcode.com/problems/number-of-subarrays-with-gcd-equal-to-k/) | 🟡 Medium |
| [Find the Number of Subsequences With Equal GCD](https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd/) | 🔴 Hard |
| [Maximum Subarray With Equal Products](https://leetcode.com/problems/maximum-subarray-with-equal-products/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 16.3 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
