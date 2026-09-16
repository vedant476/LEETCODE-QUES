# 2609. Distinct Prime Factors of Product of Array

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 55.3% |
| Language | JavaScript |
| Status | ✅ Accepted |
| Runtime | 73 ms |
| Memory | 58.5 MB |
| Submission ID | 2070440120 |
| Solved On | 17 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array of positive integers <code>nums</code>, return <em>the number of <strong>distinct prime factors</strong> in the product of the elements of</em> <code>nums</code>.</p>

<p><strong>Note</strong> that:</p>

<ul>
	<li>A number greater than <code>1</code> is called <strong>prime</strong> if it is divisible by only <code>1</code> and itself.</li>
	<li>An integer <code>val1</code> is a factor of another integer <code>val2</code> if <code>val2 / val1</code> is an integer.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,4,3,7,10,6]
<strong>Output:</strong> 4
<strong>Explanation:</strong>
The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 2<sup>5</sup> * 3<sup>2</sup> * 5 * 7.
There are 4 distinct prime factors so we return 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,4,8,16]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The product of all the elements in nums is: 2 * 4 * 8 * 16 = 1024 = 2<sup>10</sup>.
There is 1 distinct prime factor so we return 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>2 &lt;= nums[i] &lt;= 1000</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Math
- Number Theory
- Prime Factorization
- Euclidean Algorithm
- Primality Test
- Greatest Common Divisor
- Sieve Theory
- Prime Number Sieve

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Do not multiply all the numbers together, as the product is too big to store.
2. Think about how each individual number's prime factors contribute to the prime factors of the product of the entire array.
3. Find the prime factors of each element in nums, and store all of them in a set to avoid duplicates.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [2 Keys Keyboard](https://leetcode.com/problems/2-keys-keyboard/) | 🟡 Medium |
| [Largest Component Size by Common Factor](https://leetcode.com/problems/largest-component-size-by-common-factor/) | 🔴 Hard |
| [Closest Divisors](https://leetcode.com/problems/closest-divisors/) | 🟡 Medium |
| [Smallest Value After Replacing With Sum of Prime Factors](https://leetcode.com/problems/smallest-value-after-replacing-with-sum-of-prime-factors/) | 🟡 Medium |
| [Count the Number of Square-Free Subsets](https://leetcode.com/problems/count-the-number-of-square-free-subsets/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| JavaScript | 73 ms | 58.5 MB | [solution.js](./solution.js) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
