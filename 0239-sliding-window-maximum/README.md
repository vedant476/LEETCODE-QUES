# 0239. Sliding Window Maximum

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 49.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 11 ms |
| Memory | 132.5 MB |
| Submission ID | 2010174818 |
| Solved On | 22 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/sliding-window-maximum/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array of integers&nbsp;<code>nums</code>, there is a sliding window of size <code>k</code> which is moving from the very left of the array to the very right. You can only see the <code>k</code> numbers in the window. Each time the sliding window moves right by one position.</p>

<p>Return <em>the max sliding window</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,-1,-3,5,3,6,7], k = 3
<strong>Output:</strong> [3,3,5,5,6,7]
<strong>Explanation:</strong> 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       <strong>3</strong>
 1 [3  -1  -3] 5  3  6  7       <strong>3</strong>
 1  3 [-1  -3  5] 3  6  7      <strong> 5</strong>
 1  3  -1 [-3  5  3] 6  7       <strong>5</strong>
 1  3  -1  -3 [5  3  6] 7       <strong>6</strong>
 1  3  -1  -3  5 [3  6  7]      <strong>7</strong>
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1], k = 1
<strong>Output:</strong> [1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Queue
- Sliding Window
- Heap (Priority Queue)
- Monotonic Queue
- Range Minimum/Maximum Query

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. How about using a data structure such as deque (double-ended queue)?
2. The queue size need not be the same as the window’s size.
3. Remove redundant elements and the queue should store only elements that need to be considered.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | 🔴 Hard |
| [Min Stack](https://leetcode.com/problems/min-stack/) | 🟡 Medium |
| [Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/) | 🟡 Medium |
| [Paint House II](https://leetcode.com/problems/paint-house-ii/) | 🔴 Hard |
| [Jump Game VI](https://leetcode.com/problems/jump-game-vi/) | 🟡 Medium |
| [Maximum Number of Robots Within Budget](https://leetcode.com/problems/maximum-number-of-robots-within-budget/) | 🔴 Hard |
| [Maximum Tastiness of Candy Basket](https://leetcode.com/problems/maximum-tastiness-of-candy-basket/) | 🟡 Medium |
| [Maximal Score After Applying K Operations](https://leetcode.com/problems/maximal-score-after-applying-k-operations/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 11 ms | 132.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
