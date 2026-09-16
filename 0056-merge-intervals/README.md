# 0056. Merge Intervals

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 52.7% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 3 ms |
| Memory | 23.8 MB |
| Submission ID | 2014663070 |
| Solved On | 27 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/merge-intervals/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array&nbsp;of <code>intervals</code>&nbsp;where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, merge all overlapping intervals, and return <em>an array of the non-overlapping intervals that cover all the intervals in the input</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[1,3],[2,6],[8,10],[15,18]]
<strong>Output:</strong> [[1,6],[8,10],[15,18]]
<strong>Explanation:</strong> Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[1,4],[4,5]]
<strong>Output:</strong> [[1,5]]
<strong>Explanation:</strong> Intervals [1,4] and [4,5] are considered overlapping.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[4,7],[1,4]]
<strong>Output:</strong> [[1,7]]
<strong>Explanation:</strong> Intervals [1,4] and [4,7] are considered overlapping.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= intervals.length &lt;= 10<sup>4</sup></code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 10<sup>4</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Sorting
- Quicksort

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Insert Interval](https://leetcode.com/problems/insert-interval/) | 🟡 Medium |
| [Meeting Rooms](https://leetcode.com/problems/meeting-rooms/) | 🟢 Easy |
| [Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) | 🟡 Medium |
| [Teemo Attacking](https://leetcode.com/problems/teemo-attacking/) | 🟢 Easy |
| [Add Bold Tag in String](https://leetcode.com/problems/add-bold-tag-in-string/) | 🟡 Medium |
| [Range Module](https://leetcode.com/problems/range-module/) | 🔴 Hard |
| [Employee Free Time](https://leetcode.com/problems/employee-free-time/) | 🔴 Hard |
| [Partition Labels](https://leetcode.com/problems/partition-labels/) | 🟡 Medium |
| [Interval List Intersections](https://leetcode.com/problems/interval-list-intersections/) | 🟡 Medium |
| [Amount of New Area Painted Each Day](https://leetcode.com/problems/amount-of-new-area-painted-each-day/) | 🔴 Hard |
| [Longest Substring of One Repeating Character](https://leetcode.com/problems/longest-substring-of-one-repeating-character/) | 🔴 Hard |
| [Count Integers in Intervals](https://leetcode.com/problems/count-integers-in-intervals/) | 🔴 Hard |
| [Divide Intervals Into Minimum Number of Groups](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/) | 🟡 Medium |
| [Determine if Two Events Have Conflict](https://leetcode.com/problems/determine-if-two-events-have-conflict/) | 🟢 Easy |
| [Count Ways to Group Overlapping Ranges](https://leetcode.com/problems/count-ways-to-group-overlapping-ranges/) | 🟡 Medium |
| [Points That Intersect With Cars](https://leetcode.com/problems/points-that-intersect-with-cars/) | 🟢 Easy |
| [Count Days Without Meetings](https://leetcode.com/problems/count-days-without-meetings/) | 🟡 Medium |
| [Minimize Connected Groups by Inserting Interval](https://leetcode.com/problems/minimize-connected-groups-by-inserting-interval/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 3 ms | 23.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
