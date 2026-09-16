# 1297. Maximum Number of Balloons

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 64.3% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 9 MB |
| Submission ID | 2041603265 |
| Solved On | 22 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/maximum-number-of-balloons/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string <code>text</code>, you want to use the characters of <code>text</code> to form as many instances of the word <strong>&quot;balloon&quot;</strong> as possible.</p>

<p>You can use each character in <code>text</code> <strong>at most once</strong>. Return the maximum number of instances that can be formed.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/09/05/1536_ex1_upd.JPG" style="width: 132px; height: 35px;" /></strong></p>

<pre>
<strong>Input:</strong> text = &quot;nlaebolko&quot;
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/09/05/1536_ex2_upd.JPG" style="width: 267px; height: 35px;" /></strong></p>

<pre>
<strong>Input:</strong> text = &quot;loonbalxballpoon&quot;
<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;leetcode&quot;
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= text.length &lt;= 10<sup>4</sup></code></li>
	<li><code>text</code> consists of lower case English letters only.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Note:</strong> This question is the same as <a href="https://leetcode.com/problems/rearrange-characters-to-make-target-string/description/" target="_blank"> 2287: Rearrange Characters to Make Target String.</a></p>


</details>

---

## 🏷 Tags

- Hash Table
- String
- Counting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Count the frequency of letters in the given string.
2. Find the letter than can make the minimum number of instances of the word "balloon".

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
