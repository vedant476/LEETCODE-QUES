# 3964. Number of ZigZag Arrays II

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 67.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 565 ms |
| Memory | 74.2 MB |
| Submission ID | 2044344774 |
| Solved On | 24 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/number-of-zigzag-arrays-ii/

---

<details>
<summary>Show problem statement</summary>

<p>You are given three integers <code>n</code>, <code>l</code>, and <code>r</code>.</p>

<p>A <strong>ZigZag</strong> array of length <code>n</code> is defined as follows:</p>

<ul>
	<li>Each element lies in the range <code>[l, r]</code>.</li>
	<li>No <strong>two</strong> adjacent elements are equal.</li>
	<li>No <strong>three</strong> consecutive elements form a <strong>strictly increasing</strong> or <strong>strictly decreasing</strong> sequence.</li>
</ul>

<p>Return the total number of valid <strong>ZigZag</strong> arrays.</p>

<p>Since the answer may be large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>A <strong>sequence</strong> is said to be <strong>strictly increasing</strong> if each element is strictly greater than its previous one (if exists).</p>

<p>A <strong>sequence</strong> is said to be <strong>strictly decreasing</strong> if each element is strictly smaller than its previous one (if exists).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 3, l = 4, r = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p>There are only 2 valid ZigZag arrays of length <code>n = 3</code> using values in the range <code>[4, 5]</code>:</p>

<ul>
	<li><code>[4, 5, 4]</code></li>
	<li><code>[5, 4, 5]</code></li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 3, l = 1, r = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">10</span></p>

<p><strong>Explanation:</strong></p>

<p>​​​​​​​There are 10 valid ZigZag arrays of length <code>n = 3</code> using values in the range <code>[1, 3]</code>:</p>

<ul>
	<li><code>[1, 2, 1]</code>, <code>[1, 3, 1]</code>, <code>[1, 3, 2]</code></li>
	<li><code>[2, 1, 2]</code>, <code>[2, 1, 3]</code>, <code>[2, 3, 1]</code>, <code>[2, 3, 2]</code></li>
	<li><code>[3, 1, 2]</code>, <code>[3, 1, 3]</code>, <code>[3, 2, 3]</code></li>
</ul>

<p>All arrays meet the ZigZag conditions.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= n &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= l &lt; r &lt;= 75</code>​​​​​​​</li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Dynamic Programming

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use matrix exponentiation
2. Encode states in a vector of length <code>2*m</code> where <code>m = r - l + 1</code>: first <code>m</code> entries = "next compare = down" for values, next <code>m</code> = "next compare = up".
3. Build a transition matrix <code>T</code> (size <code>2*m × 2*m</code>): from an <code>up,x</code> state go to <code>down,y</code> for every <code>y > x</code>, and from <code>down,x</code> go to <code>up,y</code> for every <code>y < x</code>.
4. Use fast matrix exponentiation to compute <code>T^(n-1)</code>, apply it to the initial vector (ones in the block for starting <code>up</code> and separately for starting <code>down</code>), sum final entries, and add both results (for <code>n=1</code> return <code>m</code>).

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 565 ms | 74.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
