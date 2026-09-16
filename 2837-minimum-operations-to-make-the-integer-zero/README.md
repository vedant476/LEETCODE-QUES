# 2837. Minimum Operations to Make the Integer Zero

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 58.0% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 8.1 MB |
| Submission ID | 2008650161 |
| Solved On | 21 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/minimum-operations-to-make-the-integer-zero/

---

<details>
<summary>Show problem statement</summary>

<p>You are given two integers <code>num1</code> and <code>num2</code>.</p>

<p>In one operation, you can choose integer <code>i</code> in the range <code>[0, 60]</code> and subtract <code>2<sup>i</sup> + num2</code> from <code>num1</code>.</p>

<p>Return <em>the integer denoting the <strong>minimum</strong> number of operations needed to make</em> <code>num1</code> <em>equal to</em> <code>0</code>.</p>

<p>If it is impossible to make <code>num1</code> equal to <code>0</code>, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num1 = 3, num2 = -2
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can make 3 equal to 0 with the following operations:
- We choose i = 2 and subtract 2<sup>2</sup> + (-2) from 3, 3 - (4 + (-2)) = 1.
- We choose i = 2 and subtract 2<sup>2</sup>&nbsp;+ (-2) from 1, 1 - (4 + (-2)) = -1.
- We choose i = 0 and subtract 2<sup>0</sup>&nbsp;+ (-2) from -1, (-1) - (1 + (-2)) = 0.
It can be proven, that 3 is the minimum number of operations that we need to perform.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num1 = 5, num2 = 7
<strong>Output:</strong> -1
<strong>Explanation:</strong> It can be proven, that it is impossible to make 5 equal to 0 with the given operation.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num1 &lt;= 10<sup>9</sup></code></li>
	<li><code><font face="monospace">-10<sup>9</sup>&nbsp;&lt;= num2 &lt;= 10<sup>9</sup></font></code></li>
</ul>


</details>

---

## 🏷 Tags

- Bit Manipulation
- Brainteaser
- Enumeration

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. If we want to make integer n equal to 0 by only subtracting powers of 2 from n, in how many operations can we achieve it?
2. We need at least - the number of bits in the binary representation of n, and at most - n.
3. Notice that, if it is possible to make num1 equal to 0, then we need at most 60 operations.
4. Iterate on the number of operations.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Broken Calculator](https://leetcode.com/problems/broken-calculator/) | 🟡 Medium |
| [Minimum Operations to Reduce X to Zero](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 8.1 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
