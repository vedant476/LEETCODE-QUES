# 2301. Count Array Pairs Divisible by K

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 31.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 103 ms |
| Memory | 68.9 MB |
| Submission ID | 2165756278 |
| Solved On | 08 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-array-pairs-divisible-by-k/

---

<details>
<summary>Show problem statement</summary>

<p>Given a <strong>0-indexed</strong> integer array <code>nums</code> of length <code>n</code> and an integer <code>k</code>, return <em>the <strong>number of pairs</strong></em> <code>(i, j)</code> <em>such that:</em></p>

<ul>
	<li><code>0 &lt;= i &lt; j &lt;= n - 1</code> <em>and</em></li>
	<li><code>nums[i] * nums[j]</code> <em>is divisible by</em> <code>k</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4,5], k = 2
<strong>Output:</strong> 7
<strong>Explanation:</strong> 
The 7 pairs of indices whose corresponding products are divisible by 2 are
(0, 1), (0, 3), (1, 2), (1, 3), (1, 4), (2, 3), and (3, 4).
Their products are 2, 4, 6, 8, 10, 12, and 20 respectively.
Other pairs such as (0, 2) and (2, 4) have products 3 and 15 respectively, which are not divisible by 2.    
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4], k = 5
<strong>Output:</strong> 0
<strong>Explanation:</strong> There does not exist any pair of indices whose corresponding product is divisible by 5.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], k &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Math
- Counting
- Number Theory
- Euclidean Algorithm
- Greatest Common Divisor

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For any element in the array, what is the smallest number it should be multiplied with such that the product is divisible by k?
2. The smallest number which should be multiplied with nums[i] so that the product is divisible by k is k / gcd(k, nums[i]). Now think about how you can store and update the count of such numbers present in the array efficiently.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Number of Single Divisor Triplets](https://leetcode.com/problems/number-of-single-divisor-triplets/) | 🟡 Medium |
| [Check If Array Pairs Are Divisible by k](https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/) | 🟡 Medium |
| [Find the Number of Good Pairs II](https://leetcode.com/problems/find-the-number-of-good-pairs-ii/) | 🟡 Medium |
| [Find the Number of Good Pairs I](https://leetcode.com/problems/find-the-number-of-good-pairs-i/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 103 ms | 68.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
