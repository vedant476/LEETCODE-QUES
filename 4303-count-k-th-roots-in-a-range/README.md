# 4303. Count K-th Roots in a Range

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 24.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 3 ms |
| Memory | 8.9 MB |
| Submission ID | 2010471358 |
| Solved On | 23 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-k-th-roots-in-a-range/

---

<details>
<summary>Show problem statement</summary>

<p>You are given three integers <code>l</code>, <code>r</code>, and <code>k</code>.</p>

<p>An integer <code>y</code> is said to be a <strong>perfect k<sup>th</sup> power</strong> if there exists an integer <code>x</code> such that <code>y = x<sup>k</sup></code>.</p>

<p>Return the number of integers <code>y</code> in the range <code>[l, r]</code> (inclusive) that are <strong>perfect k<sup>th</sup> powers</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">l = 1, r = 9, k = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>
The perfect cubes in the range <code>[1, 9]</code> are:

<ul>
	<li><code>1 = 1<sup>3</sup></code></li>
	<li><code>8 = 2<sup>3</sup></code></li>
</ul>
Hence, the answer is 2.</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">l = 8, r = 30, k = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>
The perfect squares in the range <code>[8, 30]</code> are:

<ul>
	<li><code>9 = 3<sup>2</sup></code></li>
	<li><code>16 = 4<sup>2</sup></code></li>
	<li><code>25 = 5<sup>2</sup></code></li>
</ul>
Hence, the answer is 3.</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= l &lt;= r &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= k &lt;= 30</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Binary Search

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Count how many perfect <code>k<sup>th</sup></code> powers are at most <code>r</code>, then subtract how many are less than <code>l</code>.
2. For <code>k >= 2</code>, we can bruteforce the largest <code>x</code> such that <code>x<sup>k</sup> <= r</code> .
3. Be careful of edge case: <code>k == 1</code>.
4. Be careful of this edge case: <code>l == 0</code>.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 3 ms | 8.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
