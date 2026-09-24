# 3811. Reverse Degree of a String

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 89.0% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9.7 MB |
| Submission ID | 2147954129 |
| Solved On | 20 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/reverse-degree-of-a-string/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string <code>s</code>, calculate its <strong>reverse degree</strong>.</p>

<p>The <strong>reverse degree</strong> is calculated as follows:</p>

<ol>
	<li>For each character, multiply its position in the <em>reversed</em> alphabet (<code>&#39;a&#39;</code> = 26, <code>&#39;b&#39;</code> = 25, ..., <code>&#39;z&#39;</code> = 1) with its position in the string <strong>(1-indexed)</strong>.</li>
	<li>Sum these products for all characters in the string.</li>
</ol>

<p>Return the <strong>reverse degree</strong> of <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;abc&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">148</span></p>

<p><strong>Explanation:</strong></p>

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;">Letter</th>
			<th style="border: 1px solid black;">Index in Reversed Alphabet</th>
			<th style="border: 1px solid black;">Index in String</th>
			<th style="border: 1px solid black;">Product</th>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>&#39;a&#39;</code></td>
			<td style="border: 1px solid black;">26</td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">26</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>&#39;b&#39;</code></td>
			<td style="border: 1px solid black;">25</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">50</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>&#39;c&#39;</code></td>
			<td style="border: 1px solid black;">24</td>
			<td style="border: 1px solid black;">3</td>
			<td style="border: 1px solid black;">72</td>
		</tr>
	</tbody>
</table>

<p>The reversed degree is <code>26 + 50 + 72 = 148</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;zaza&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">160</span></p>

<p><strong>Explanation:</strong></p>

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;">Letter</th>
			<th style="border: 1px solid black;">Index in Reversed Alphabet</th>
			<th style="border: 1px solid black;">Index in String</th>
			<th style="border: 1px solid black;">Product</th>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>&#39;z&#39;</code></td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">1</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>&#39;a&#39;</code></td>
			<td style="border: 1px solid black;">26</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">52</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>&#39;z&#39;</code></td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">3</td>
			<td style="border: 1px solid black;">3</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>&#39;a&#39;</code></td>
			<td style="border: 1px solid black;">26</td>
			<td style="border: 1px solid black;">4</td>
			<td style="border: 1px solid black;">104</td>
		</tr>
	</tbody>
</table>

<p>The reverse degree is <code>1 + 52 + 3 + 104 = 160</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s</code> contains only lowercase English letters.</li>
</ul>


</details>

---

## 🏷 Tags

- String
- Simulation

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Simulate the operations as described.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 9.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
