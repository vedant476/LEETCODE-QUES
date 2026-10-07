# 2121. Find if Path Exists in Graph

| Property | Value |
|----------|-------|
| Difficulty | 🟢 Easy |
| Acceptance Rate | 55.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 8 ms |
| Memory | 205 MB |
| Submission ID | 2165745303 |
| Solved On | 08 Oct 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/find-if-path-exists-in-graph/

---

<details>
<summary>Show problem statement</summary>

<p>There is a <strong>bi-directional</strong> graph with <code>n</code> vertices, where each vertex is labeled from <code>0</code> to <code>n - 1</code> (<strong>inclusive</strong>). The edges in the graph are represented as a 2D integer array <code>edges</code>, where each <code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>]</code> denotes a bi-directional edge between vertex <code>u<sub>i</sub></code> and vertex <code>v<sub>i</sub></code>. Every vertex pair is connected by <strong>at most one</strong> edge, and no vertex has an edge to itself.</p>

<p>You want to determine if there is a <strong>valid path</strong> that exists from vertex <code>source</code> to vertex <code>destination</code>.</p>

<p>Given <code>edges</code> and the integers <code>n</code>, <code>source</code>, and <code>destination</code>, return <code>true</code><em> if there is a <strong>valid path</strong> from </em><code>source</code><em> to </em><code>destination</code><em>, or </em><code>false</code><em> otherwise</em><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/14/validpath-ex1.png" style="width: 141px; height: 121px;" />
<pre>
<strong>Input:</strong> n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2
<strong>Output:</strong> true
<strong>Explanation:</strong> There are two paths from vertex 0 to vertex 2:
- 0 &rarr; 1 &rarr; 2
- 0 &rarr; 2
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/14/validpath-ex2.png" style="width: 281px; height: 141px;" />
<pre>
<strong>Input:</strong> n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no path from vertex 0 to vertex 5.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>0 &lt;= edges.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>edges[i].length == 2</code></li>
	<li><code>0 &lt;= u<sub>i</sub>, v<sub>i</sub> &lt;= n - 1</code></li>
	<li><code>u<sub>i</sub> != v<sub>i</sub></code></li>
	<li><code>0 &lt;= source, destination &lt;= n - 1</code></li>
	<li>There are no duplicate edges.</li>
	<li>There are no self edges.</li>
</ul>


</details>

---

## 🏷 Tags

- Depth-First Search
- Breadth-First Search
- Union-Find
- Graph Theory

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Valid Arrangement of Pairs](https://leetcode.com/problems/valid-arrangement-of-pairs/) | 🔴 Hard |
| [Paths in Maze That Lead to Same Room](https://leetcode.com/problems/paths-in-maze-that-lead-to-same-room/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 8 ms | 205 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
