# 2481. Strictly Palindromic Number

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 90.4% |
| Language | Racket |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 102.1 MB |
| Submission ID | 2003432476 |
| Solved On | 15 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/strictly-palindromic-number/

---

<details>
<summary>Show problem statement</summary>

<p>An integer <code>n</code> is <strong>strictly palindromic</strong> if, for <strong>every</strong> base <code>b</code> between <code>2</code> and <code>n - 2</code> (<strong>inclusive</strong>), the string representation of the integer <code>n</code> in base <code>b</code> is <strong>palindromic</strong>.</p>

<p>Given an integer <code>n</code>, return <code>true</code> <em>if </em><code>n</code><em> is <strong>strictly palindromic</strong> and </em><code>false</code><em> otherwise</em>.</p>

<p>A string is <strong>palindromic</strong> if it reads the same forward and backward.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 9
<strong>Output:</strong> false
<strong>Explanation:</strong> In base 2: 9 = 1001 (base 2), which is palindromic.
In base 3: 9 = 100 (base 3), which is not palindromic.
Therefore, 9 is not strictly palindromic so we return false.
Note that in bases 4, 5, 6, and 7, n = 9 is also not palindromic.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> false
<strong>Explanation:</strong> We only consider base 2: 4 = 100 (base 2), which is not palindromic.
Therefore, we return false.

</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>4 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Two Pointers
- Brainteaser

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Consider the representation of the given number in the base n - 2.
2. The number n in base (n - 2) is always 12, which is not palindromic.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | 🟢 Easy |
| [Stone Game](https://leetcode.com/problems/stone-game/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| Racket | 0 ms | 102.1 MB | [solution.rkt](./solution.rkt) |
| Erlang | 0 ms | 43.5 MB | [solution.erl](./solution.erl) |
| Elixir | 0 ms | 56.8 MB | [solution.ex](./solution.ex) |
| Scala | 0 ms | 53.5 MB | [solution.scala](./solution.scala) |
| Dart | 0 ms | 147.5 MB | [solution.dart](./solution.dart) |
| PHP | 0 ms | 20.5 MB | [solution.php](./solution.php) |
| Ruby | 0 ms | 211.2 MB | [solution.rb](./solution.rb) |
| Rust | 0 ms | 2.1 MB | [solution.rs](./solution.rs) |
| Swift | 0 ms | 19 MB | [solution.swift](./solution.swift) |
| Kotlin | 0 ms | 39.8 MB | [solution.kt](./solution.kt) |
| Go | 0 ms | 4 MB | [solution.go](./solution.go) |
| C | 0 ms | 8.5 MB | [solution.c](./solution.c) |
| C# | 0 ms | 30.8 MB | [Solution.cs](./Solution.cs) |
| TypeScript | 0 ms | 55.7 MB | [solution.ts](./solution.ts) |
| Python3 | 0 ms | 19.2 MB | [solution.py](./solution.py) |
| JavaScript | 0 ms | 54.6 MB | [solution.js](./solution.js) |
| Python | 0 ms | 12.2 MB | [solution.python.py](./solution.python.py) |
| Java | 0 ms | 42.1 MB | [Solution.java](./Solution.java) |
| C++ | 0 ms | 7.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
