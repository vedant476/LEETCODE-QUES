# 1362. Airplane Seat Assignment Probability

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 67.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.2 MB |
| Submission ID | 2000281537 |
| Solved On | 11 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/airplane-seat-assignment-probability/

---

<details>
<summary>Show problem statement</summary>

<p><code>n</code> passengers board an airplane with exactly <code>n</code> seats. The first passenger has lost the ticket and picks a seat randomly. But after that, the rest of the passengers will:</p>

<ul>
	<li>Take their own seat if it is still available, and</li>
	<li>Pick other seats randomly when they find their seat occupied</li>
</ul>

<p>Return <em>the probability that the </em><code>n<sup>th</sup></code><em> person gets his own seat</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 1.00000
<strong>Explanation: </strong>The first person can only get the first seat.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 0.50000
<strong>Explanation: </strong>The second person has a probability of 0.5 to get the second seat (when first person gets the first seat).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Dynamic Programming
- Brainteaser
- Probability and Statistics

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Let f(n) denote the probability of the n-th person getting correct seat in n-person case, then:

f(1) = 1 (base case, trivial)
f(2) = 1/2 (also trivial)
2. Try to calculate f(3), f(4), and f(5) using the base cases. What is the value of them?
f(i) for i >= 2 will also be 1/2.
3. Try to proof why f(i) = 1/2 for i >= 2.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.2 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
