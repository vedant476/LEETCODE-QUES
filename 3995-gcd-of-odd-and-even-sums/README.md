# 3995. GCD of Odd and Even Sums

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 89.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.5 MB |
| Submission ID | 2068288442 |
| Solved On | 15 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/gcd-of-odd-and-even-sums/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer <code>n</code>. Your task is to compute the <strong>GCD</strong> (greatest common divisor) of two values:</p>

<ul>
	<li>
	<p><code>sumOdd</code>: the sum of the smallest&nbsp;<code>n</code>&nbsp;positive odd numbers.</p>
	</li>
	<li>
	<p><code>sumEven</code>: the sum of the smallest&nbsp;<code>n</code>&nbsp;positive even numbers.</p>
	</li>
</ul>

<p>Return the GCD of <code>sumOdd</code> and <code>sumEven</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 4</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Sum of the first 4 odd numbers <code>sumOdd = 1 + 3 + 5 + 7 = 16</code></li>
	<li>Sum of the first 4 even numbers <code>sumEven = 2 + 4 + 6 + 8 = 20</code></li>
</ul>

<p>Hence, <code>GCD(sumOdd, sumEven) = GCD(16, 20) = 4</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Sum of the first 5 odd numbers <code>sumOdd = 1 + 3 + 5 + 7 + 9 = 25</code></li>
	<li>Sum of the first 5 even numbers <code>sumEven = 2 + 4 + 6 + 8 + 10 = 30</code></li>
</ul>

<p>Hence, <code>GCD(sumOdd, sumEven) = GCD(25, 30) = 5</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10​​​​​​​00</code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Number Theory

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. The first <code>n</code> odd numbers sum to <code>n * n</code>
2. First <code>n</code> even numbers sum to <code>n * (n + 1)</code>
3. <code>gcd(n, n + 1) = 1</code>, so the answer is <code>n</code>

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
