# 0301. Remove Invalid Parentheses

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 50.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 10.9 MB |
| Submission ID | 2165704690 |
| Solved On | 08 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/remove-invalid-parentheses/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string <code>s</code> that contains parentheses and letters, remove the minimum number of invalid parentheses to make the input string valid.</p>

<p>Return <em>a list of <strong>unique strings</strong> that are valid with the minimum number of removals</em>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;()())()&quot;
<strong>Output:</strong> [&quot;(())()&quot;,&quot;()()()&quot;]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(a)())()&quot;
<strong>Output:</strong> [&quot;(a())()&quot;,&quot;(a)()()&quot;]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;)(&quot;
<strong>Output:</strong> [&quot;&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 25</code></li>
	<li><code>s</code> consists of lowercase English letters and parentheses <code>&#39;(&#39;</code> and <code>&#39;)&#39;</code>.</li>
	<li>There will be at most <code>20</code> parentheses in <code>s</code>.</li>
</ul>


</details>

---

## 🏷 Tags

- String
- Backtracking
- Breadth-First Search

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Since we do not know which brackets can be removed, we try all the options! We can use recursion.
2. In the recursion, for each bracket, we can either use it or remove it.
3. Recursion will generate all the valid parentheses strings but we want the ones with the least number of parentheses deleted.
4. We can count the number of invalid brackets to be deleted and only generate the valid strings in the recusrion.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | 🟢 Easy |
| [Minimum Number of Swaps to Make the String Balanced](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 10.9 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
