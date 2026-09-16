# 3067. Modify Columns

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 92.3% |
| Language | pythondata |
| Status | ✅ Accepted |
| Runtime | 284 ms |
| Memory | 66.3 MB |
| Submission ID | 1994809250 |
| Solved On | 04 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/modify-columns/

---

<details>
<summary>Show problem statement</summary>

<pre>
DataFrame <code>employees</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| name        | object |
| salary      | int    |
+-------------+--------+
</pre>

<p>A company intends to give its employees a pay rise.</p>

<p>Write a solution to <strong>modify</strong> the <code>salary</code> column by multiplying each salary by 2.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>DataFrame employees
+---------+--------+
| name    | salary |
+---------+--------+
| Jack    | 19666  |
| Piper   | 74754  |
| Mia     | 62509  |
| Ulysses | 54866  |
+---------+--------+
<strong>Output:
</strong>+---------+--------+
| name    | salary |
+---------+--------+
| Jack    | 39332  |
| Piper   | 149508 |
| Mia     | 125018 |
| Ulysses | 109732 |
+---------+--------+
<strong>Explanation:
</strong>Every salary has been doubled.</pre>


</details>

---

## 🏷 Tags

- None

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Considering multiplying each salary value by 2, using a simple assignment operation. The calculation of the value is done column-wise.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| pythondata | 284 ms | 66.3 MB | [solution.pythondata](./solution.pythondata) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
