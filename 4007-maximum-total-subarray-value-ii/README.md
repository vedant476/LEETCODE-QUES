# 4007. Maximum Total Subarray Value II

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 41.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 361 ms |
| Memory | 251 MB |
| Submission ID | 2028964308 |
| Solved On | 10 Jun 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/maximum-total-subarray-value-ii/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> of length <code>n</code> and an integer <code>k</code>.</p>

<p>You must select <strong>exactly</strong> <code>k</code> <strong>distinct</strong> <span data-keyword="subarray-nonempty">subarrays</span> <code>nums[l..r]</code> of <code>nums</code>. Subarrays may overlap, but the exact same subarray (same <code>l</code> and <code>r</code>) <strong>cannot</strong> be chosen more than once.</p>

<p>The <strong>value</strong> of a subarray <code>nums[l..r]</code> is defined as: <code>max(nums[l..r]) - min(nums[l..r])</code>.</p>

<p>The <strong>total value</strong> is the sum of the <strong>values</strong> of all chosen subarrays.</p>

<p>Return the <strong>maximum</strong> possible total value you can achieve.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,3,2], k = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<p>One optimal approach is:</p>

<ul>
	<li>Choose <code>nums[0..1] = [1, 3]</code>. The maximum is 3 and the minimum is 1, giving a value of <code>3 - 1 = 2</code>.</li>
	<li>Choose <code>nums[0..2] = [1, 3, 2]</code>. The maximum is still 3 and the minimum is still 1, so the value is also <code>3 - 1 = 2</code>.</li>
</ul>

<p>Adding these gives <code>2 + 2 = 4</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [4,2,5,1], k = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">12</span></p>

<p><strong>Explanation:</strong></p>

<p>One optimal approach is:</p>

<ul>
	<li>Choose <code>nums[0..3] = [4, 2, 5, 1]</code>. The maximum is 5 and the minimum is 1, giving a value of <code>5 - 1 = 4</code>.</li>
	<li>Choose <code>nums[1..3] = [2, 5, 1]</code>. The maximum is 5 and the minimum is 1, so the value is also <code>4</code>.</li>
	<li>Choose <code>nums[2..3] = [5, 1]</code>. The maximum is 5 and the minimum is 1, so the value is again <code>4</code>.</li>
</ul>

<p>Adding these gives <code>4 + 4 + 4 = 12</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == nums.length &lt;= 5 * 10<sup>​​​​​​​4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= k &lt;= min(10<sup>5</sup>, n * (n + 1) / 2)</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Greedy
- Segment Tree
- Heap (Priority Queue)

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. For fixed <code>l</code>, the sequence <code>v(l,r)=max(nums[l..r])−min(nums[l..r])</code> is non-increasing as <code>r</code> moves left.
2. Build RMQs (sparse tables) for range max/min so each <code>v(l,r)</code> is queryable in <code>O(1)</code>.
3. Use a max-heap with <code>v(l,n-1)</code> for all <code>l</code>; pop the largest <code>k</code> times, and after popping an entry from <code>(l,r)</code> push <code>(l,r-1)</code> if <code>r>l</code>.

</details>

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 361 ms | 251 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
