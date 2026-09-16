# 0448. Find All Numbers Disappeared in an Array

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 64.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 6 ms |
| Memory | 54.9 MB |
| Submission ID | 2043070304 |
| Solved On | 23 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array <code>nums</code> of <code>n</code> integers where <code>nums[i]</code> is in the range <code>[1, n]</code>, return <em>an array of all the integers in the range</em> <code>[1, n]</code> <em>that do not appear in</em> <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [4,3,2,7,8,2,3,1]
<strong>Output:</strong> [5,6]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,1]
<strong>Output:</strong> [2]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= n</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you do it without extra space and in <code>O(n)</code> runtime? You may assume the returned list does not count as extra space.</p>


</details>

---

## 🏷 Tags

- Array
- Hash Table

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. This is a really easy problem if you decide to use additional memory. For those trying to write an initial solution using additional memory, think <b>counters!</b>
2. However, the trick really is to not use any additional space than what is already available to use. Sometimes, multiple passes over the input array help find the solution. However, there's an interesting piece of information in this problem that makes it easy to re-use the input array itself for the solution.
3. The problem specifies that the numbers in the array will be in the range [1, n] where n is the number of elements in the array. Can we use this information and modify the array in-place somehow to find what we need?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [First Missing Positive](https://leetcode.com/problems/first-missing-positive/) | 🔴 Hard |
| [Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/) | 🟡 Medium |
| [Find Unique Binary String](https://leetcode.com/problems/find-unique-binary-string/) | 🟡 Medium |
| [Append K Integers With Minimal Sum](https://leetcode.com/problems/append-k-integers-with-minimal-sum/) | 🟡 Medium |
| [Replace Elements in an Array](https://leetcode.com/problems/replace-elements-in-an-array/) | 🟡 Medium |
| [Maximum Number of Integers to Choose From a Range I](https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/) | 🟡 Medium |
| [Maximum Number of Integers to Choose From a Range II](https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-ii/) | 🟡 Medium |
| [Find All Numbers Disappeared in an Array II](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array-ii/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 6 ms | 54.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
