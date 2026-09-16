# 3799. Unique 3-Digit Even Numbers

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 70.5% |
| Language | Python3 |
| Status | ✅ Accepted |
| Runtime | 83 ms |
| Memory | 19.4 MB |
| Submission ID | 2138742035 |
| Solved On | 11 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/unique-3-digit-even-numbers/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array of digits called <code>digits</code>. Your task is to determine the number of <strong>distinct</strong> three-digit even numbers that can be formed using these digits.</p>

<p><strong>Note</strong>: Each <em>copy</em> of a digit can only be used <strong>once per number</strong>, and there may <strong>not</strong> be leading zeros.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">digits = [1,2,3,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">12</span></p>

<p><strong>Explanation:</strong> The 12 distinct 3-digit even numbers that can be formed are 124, 132, 134, 142, 214, 234, 312, 314, 324, 342, 412, and 432. Note that 222 cannot be formed because there is only 1 copy of the digit 2.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">digits = [0,2,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong> The only 3-digit even numbers that can be formed are 202 and 220. Note that the digit 2 can be used twice because it appears twice in the array.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">digits = [6,6,6]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong> Only 666 can be formed.</p>
</div>

<p><strong class="example">Example 4:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">digits = [1,3,5]</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong> No even 3-digit numbers can be formed.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= digits.length &lt;= 10</code></li>
	<li><code>0 &lt;= digits[i] &lt;= 9</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Hash Table
- Recursion
- Enumeration

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Use brute force to try all possibilities

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Finding 3-Digit Even Numbers](https://leetcode.com/problems/finding-3-digit-even-numbers/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| Python3 | 83 ms | 19.4 MB | [solution.py](./solution.py) |
| C++ | 1 ms | 28.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
