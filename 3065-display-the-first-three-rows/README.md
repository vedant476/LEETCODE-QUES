# 3065. Display the First Three Rows

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 93.0% |
| Language | pythondata |
| Status | ✅ Accepted |
| Runtime | 285 ms |
| Memory | 66.2 MB |
| Submission ID | 1994803472 |
| Solved On | 04 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/display-the-first-three-rows/

---

<details>
<summary>Show problem statement</summary>

<pre>
DataFrame: <code>employees</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| employee_id | int    |
| name        | object |
| department  | object |
| salary      | int    |
+-------------+--------+
</pre>

<p>Write a solution to display the <strong>first <code>3</code> </strong>rows<strong> </strong>of this DataFrame.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>DataFrame employees
+-------------+-----------+-----------------------+--------+
| employee_id | name      | department            | salary |
+-------------+-----------+-----------------------+--------+
| 3           | Bob       | Operations            | 48675  |
| 90          | Alice     | Sales                 | 11096  |
| 9           | Tatiana   | Engineering           | 33805  |
| 60          | Annabelle | InformationTechnology | 37678  |
| 49          | Jonathan  | HumanResources        | 23793  |
| 43          | Khaled    | Administration        | 40454  |
+-------------+-----------+-----------------------+--------+
<strong>Output:</strong>
+-------------+---------+-------------+--------+
| employee_id | name    | department  | salary |
+-------------+---------+-------------+--------+
| 3           | Bob     | Operations  | 48675  |
| 90          | Alice   | Sales       | 11096  |
| 9           | Tatiana | Engineering | 33805  |
+-------------+---------+-------------+--------+
<strong>Explanation:</strong> 
Only the first 3 rows are displayed.</pre>


</details>

---

## 🏷 Tags

- None

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Consider using a built-in function in pandas library to retrieve the initial rows.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| pythondata | 285 ms | 66.2 MB | [solution.pythondata](./solution.pythondata) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
