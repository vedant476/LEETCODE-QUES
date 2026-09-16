# 1983. Maximum Population Year

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 64.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 11 MB |
| Submission ID | 2023806157 |
| Solved On | 06 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/maximum-population-year/

---

<details>
<summary>Show problem statement</summary>

<p>You are given a 2D integer array <code>logs</code> where each <code>logs[i] = [birth<sub>i</sub>, death<sub>i</sub>]</code> indicates the birth and death years of the <code>i<sup>th</sup></code> person.</p>

<p>The <strong>population</strong> of some year <code>x</code> is the number of people alive during that year. The <code>i<sup>th</sup></code> person is counted in year <code>x</code>&#39;s population if <code>x</code> is in the <strong>inclusive</strong> range <code>[birth<sub>i</sub>, death<sub>i</sub> - 1]</code>. Note that the person is <strong>not</strong> counted in the year that they die.</p>

<p>Return <em>the <strong>earliest</strong> year with the <strong>maximum population</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> logs = [[1993,1999],[2000,2010]]
<strong>Output:</strong> 1993
<strong>Explanation:</strong> The maximum population is 1, and 1993 is the earliest year with this population.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> logs = [[1950,1961],[1960,1971],[1970,1981]]
<strong>Output:</strong> 1960
<strong>Explanation:</strong> 
The maximum population is 2, and it had happened in years 1960 and 1970.
The earlier year between them is 1960.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= logs.length &lt;= 100</code></li>
	<li><code>1950 &lt;= birth<sub>i</sub> &lt; death<sub>i</sub> &lt;= 2050</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Counting
- Prefix Sum

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For each year find the number of people whose birth_i ≤ year and death_i > year.
2. Find the maximum value between all years.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Shifting Letters II](https://leetcode.com/problems/shifting-letters-ii/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 11 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
