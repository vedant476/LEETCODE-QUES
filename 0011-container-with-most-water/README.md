# 0011. Container With Most Water

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 60.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 1 ms |
| Memory | 63 MB |
| Submission ID | 2000979776 |
| Solved On | 12 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/container-with-most-water/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>height</code> of length <code>n</code>. There are <code>n</code> vertical lines drawn such that the two endpoints of the <code>i<sup>th</sup></code> line are <code>(i, 0)</code> and <code>(i, height[i])</code>.</p>

<p>Find two lines that together with the x-axis form a container, such that the container contains the most water.</p>

<p>Return <em>the maximum amount of water a container can store</em>.</p>

<p><strong>Notice</strong> that you may not slant the container.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg" style="width: 600px; height: 287px;" />
<pre>
<strong>Input:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong>Output:</strong> 49
<strong>Explanation:</strong> The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> height = [1,1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == height.length</code></li>
	<li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= height[i] &lt;= 10<sup>4</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Two Pointers
- Greedy

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. If you simulate the problem, it will be O(n^2) which is not efficient.
2. Try to use two-pointers. Set one pointer to the left and one to the right of the array. Always move the pointer that points to the lower line.
3. How can you calculate the amount of water at each step?

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | 🔴 Hard |
| [Maximum Tastiness of Candy Basket](https://leetcode.com/problems/maximum-tastiness-of-candy-basket/) | 🟡 Medium |
| [House Robber IV](https://leetcode.com/problems/house-robber-iv/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 1 ms | 63 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
