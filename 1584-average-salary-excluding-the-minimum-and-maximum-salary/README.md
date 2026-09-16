# 1584. Average Salary Excluding the Minimum and Maximum Salary

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 63.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9.5 MB |
| Submission ID | 2004282067 |
| Solved On | 16 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an array of <strong>unique</strong> integers <code>salary</code> where <code>salary[i]</code> is the salary of the <code>i<sup>th</sup></code> employee.</p>

<p>Return <em>the average salary of employees excluding the minimum and maximum salary</em>. Answers within <code>10<sup>-5</sup></code> of the actual answer will be accepted.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> salary = [4000,3000,1000,2000]
<strong>Output:</strong> 2500.00000
<strong>Explanation:</strong> Minimum salary and maximum salary are 1000 and 4000 respectively.
Average salary excluding minimum and maximum salary is (2000+3000) / 2 = 2500
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> salary = [1000,2000,3000]
<strong>Output:</strong> 2000.00000
<strong>Explanation:</strong> Minimum salary and maximum salary are 1000 and 3000 respectively.
Average salary excluding minimum and maximum salary is (2000) / 1 = 2000
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= salary.length &lt;= 100</code></li>
	<li><code>1000 &lt;= salary[i] &lt;= 10<sup>6</sup></code></li>
	<li>All the integers of <code>salary</code> are <strong>unique</strong>.</li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Get the total sum and subtract the minimum and maximum value in the array.  Finally divide the result by n - 2.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 9.5 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
