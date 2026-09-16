# 0915. Generate Random Point in a Circle

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 43.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 12 ms |
| Memory | 34.7 MB |
| Submission ID | 2003498349 |
| Solved On | 15 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/generate-random-point-in-a-circle/

---

<details>
<summary>Show problem statement</summary>

<p>Given the radius and the position of the center of a circle, implement the function <code>randPoint</code> which generates a uniform random point inside the circle.</p>

<p>Implement the <code>Solution</code> class:</p>

<ul>
	<li><code>Solution(double radius, double x_center, double y_center)</code> initializes the object with the radius of the circle <code>radius</code> and the position of the center <code>(x_center, y_center)</code>.</li>
	<li><code>randPoint()</code> returns a random point inside the circle. A point on the circumference of the circle is considered to be in the circle. The answer is returned as an array <code>[x, y]</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;Solution&quot;, &quot;randPoint&quot;, &quot;randPoint&quot;, &quot;randPoint&quot;]
[[1.0, 0.0, 0.0], [], [], []]
<strong>Output</strong>
[null, [-0.02493, -0.38077], [0.82314, 0.38945], [0.36572, 0.17248]]

<strong>Explanation</strong>
Solution solution = new Solution(1.0, 0.0, 0.0);
solution.randPoint(); // return [-0.02493, -0.38077]
solution.randPoint(); // return [0.82314, 0.38945]
solution.randPoint(); // return [0.36572, 0.17248]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;&nbsp;radius &lt;= 10<sup>8</sup></code></li>
	<li><code>-10<sup>7</sup> &lt;= x_center, y_center &lt;= 10<sup>7</sup></code></li>
	<li>At most <code>3 * 10<sup>4</sup></code> calls will be made to <code>randPoint</code>.</li>
</ul>


</details>

---

## 🏷 Tags

- Math
- Geometry
- Rejection Sampling
- Randomized

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Random Point in Non-overlapping Rectangles](https://leetcode.com/problems/random-point-in-non-overlapping-rectangles/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 12 ms | 34.7 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
