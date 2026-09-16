# 2608. Count the Digits That Divide a Number

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 86.2% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 7.9 MB |
| Submission ID | 2070434811 |
| Solved On | 17 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/count-the-digits-that-divide-a-number/

---

<details>
<summary>Show problem statement</summary>

<p>Given an integer <code>num</code>, return <em>the number of digits in <code>num</code> that divide </em><code>num</code>.</p>

<p>An integer <code>val</code> divides <code>nums</code> if <code>nums % val == 0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 7
<strong>Output:</strong> 1
<strong>Explanation:</strong> 7 divides itself, hence the answer is 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 121
<strong>Output:</strong> 2
<strong>Explanation:</strong> 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = 1248
<strong>Output:</strong> 4
<strong>Explanation:</strong> 1248 is divisible by all of its digits, hence the answer is 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 10<sup>9</sup></code></li>
	<li><code>num</code> does not contain <code>0</code> as one of its digits.</li>
</ul>


</details>

---

## 🏷 Tags

- Math

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use mod by 10 to retrieve the least significant digit of the number
2. Divide the number by 10, then round it down so that the second least significant digit becomes the least significant digit of the number
3. Use your language’s mod operator to see if a number is a divisor of another.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Happy Number](https://leetcode.com/problems/happy-number/) | 🟢 Easy |
| [Self Dividing Numbers](https://leetcode.com/problems/self-dividing-numbers/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 7.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
