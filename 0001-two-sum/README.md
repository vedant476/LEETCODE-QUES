# 0001. Two Sum

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 58.1% |
| Language | C |
| Status | ✅ Accepted |
| Runtime | 101 ms |
| Memory | 8.7 MB |
| Submission ID | 1742734053 |
| Solved On | 21 Aug 2025 |

---

## 🔗 Problem

https://leetcode.com/problems/two-sum/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array of integers <code>nums</code>&nbsp;and an integer <code>target</code>, return <em>indices of the two numbers such that they add up to <code>target</code></em>.</p>

<p>You may assume that each input would have <strong><em>exactly</em> one solution</strong>, and you may not use the <em>same</em> element twice.</p>

<p>You can return the answer in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,7,11,15], target = 9
<strong>Output:</strong> [0,1]
<strong>Explanation:</strong> Because nums[0] + nums[1] == 9, we return [0, 1].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,2,4], target = 6
<strong>Output:</strong> [1,2]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,3], target = 6
<strong>Output:</strong> [0,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><strong>Only one valid answer exists.</strong></li>
</ul>

<p>&nbsp;</p>
<strong>Follow-up:&nbsp;</strong>Can you come up with an algorithm that is less than <code>O(n<sup>2</sup>)</code><font face="monospace">&nbsp;</font>time complexity?

</details>

---

## 🏷 Tags

- Array
- Hash Table

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. A really brute force way would be to search for all possible pairs of numbers but that would be too slow. Again, it's best to try out brute force solutions just for completeness. It is from these brute force solutions that you can come up with optimizations.
2. So, if we fix one of the numbers, say <code>x</code>, we have to scan the entire array to find the next number <code>y</code> which is <code>value - x</code> where value is the input parameter. Can we change our array somehow so that this search becomes faster?
3. The second train of thought is, without changing the array, can we use additional space somehow? Like maybe a hash map to speed up the search?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [3Sum](https://leetcode.com/problems/3sum/) | 🟡 Medium |
| [4Sum](https://leetcode.com/problems/4sum/) | 🟡 Medium |
| [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | 🟡 Medium |
| [Two Sum III - Data structure design](https://leetcode.com/problems/two-sum-iii-data-structure-design/) | 🟢 Easy |
| [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | 🟡 Medium |
| [Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/) | 🟢 Easy |
| [Two Sum Less Than K](https://leetcode.com/problems/two-sum-less-than-k/) | 🟢 Easy |
| [Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/) | 🟡 Medium |
| [Count Good Meals](https://leetcode.com/problems/count-good-meals/) | 🟡 Medium |
| [Count Number of Pairs With Absolute Difference K](https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/) | 🟢 Easy |
| [Number of Pairs of Strings With Concatenation Equal to Target](https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/) | 🟡 Medium |
| [Find All K-Distant Indices in an Array](https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/) | 🟢 Easy |
| [First Letter to Appear Twice](https://leetcode.com/problems/first-letter-to-appear-twice/) | 🟢 Easy |
| [Number of Excellent Pairs](https://leetcode.com/problems/number-of-excellent-pairs/) | 🔴 Hard |
| [Number of Arithmetic Triplets](https://leetcode.com/problems/number-of-arithmetic-triplets/) | 🟢 Easy |
| [Node With Highest Edge Score](https://leetcode.com/problems/node-with-highest-edge-score/) | 🟡 Medium |
| [Check Distances Between Same Letters](https://leetcode.com/problems/check-distances-between-same-letters/) | 🟢 Easy |
| [Find Subarrays With Equal Sum](https://leetcode.com/problems/find-subarrays-with-equal-sum/) | 🟢 Easy |
| [Largest Positive Integer That Exists With Its Negative](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/) | 🟢 Easy |
| [Number of Distinct Averages](https://leetcode.com/problems/number-of-distinct-averages/) | 🟢 Easy |
| [Count Pairs Whose Sum is Less than Target](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C | 101 ms | 8.7 MB | [solution.c](./solution.c) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
