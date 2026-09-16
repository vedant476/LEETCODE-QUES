# 0003. Longest Substring Without Repeating Characters

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 39.9% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 5 ms |
| Memory | 19.2 MB |
| Submission ID | 2137849923 |
| Solved On | 10 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/longest-substring-without-repeating-characters/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string <code>s</code>, find the length of the <strong>longest</strong> <span data-keyword="substring-nonempty"><strong>substring</strong></span> without duplicate characters.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcabcbb&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The answer is &quot;abc&quot;, with the length of 3. Note that <code>&quot;bca&quot;</code> and <code>&quot;cab&quot;</code> are also correct answers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;bbbbb&quot;
<strong>Output:</strong> 1
<strong>Explanation:</strong> The answer is &quot;b&quot;, with the length of 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;pwwkew&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The answer is &quot;wke&quot;, with the length of 3.
Notice that the answer must be a substring, &quot;pwke&quot; is a subsequence and not a substring.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of English letters, digits, symbols and spaces.</li>
</ul>


</details>

---

## 🏷 Tags

- Hash Table
- String
- Sliding Window

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. There are less than 100 unique characters. We can check all substrings with length at most 100 for example. This is a good enough approximation.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/) | 🟡 Medium |
| [Longest Substring with At Most K Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/) | 🟡 Medium |
| [Subarrays with K Different Integers](https://leetcode.com/problems/subarrays-with-k-different-integers/) | 🔴 Hard |
| [Maximum Erasure Value](https://leetcode.com/problems/maximum-erasure-value/) | 🟡 Medium |
| [Number of Equal Count Substrings](https://leetcode.com/problems/number-of-equal-count-substrings/) | 🟡 Medium |
| [Minimum Consecutive Cards to Pick Up](https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/) | 🟡 Medium |
| [Longest Nice Subarray](https://leetcode.com/problems/longest-nice-subarray/) | 🟡 Medium |
| [Optimal Partition of String](https://leetcode.com/problems/optimal-partition-of-string/) | 🟡 Medium |
| [Count Complete Subarrays in an Array](https://leetcode.com/problems/count-complete-subarrays-in-an-array/) | 🟡 Medium |
| [Find Longest Special Substring That Occurs Thrice II](https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-ii/) | 🟡 Medium |
| [Find Longest Special Substring That Occurs Thrice I](https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 5 ms | 19.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
