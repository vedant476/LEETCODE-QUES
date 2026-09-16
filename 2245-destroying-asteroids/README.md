# 2245. Destroying Asteroids

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 59.8% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 0 ms |
| Memory | 106.8 MB |
| Submission ID | 2018383514 |
| Solved On | 31 May 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/destroying-asteroids/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer <code>mass</code>, which represents the original mass of a planet. You are further given an integer array <code>asteroids</code>, where <code>asteroids[i]</code> is the mass of the <code>i<sup>th</sup></code> asteroid.</p>

<p>You can arrange for the planet to collide with the asteroids in <strong>any arbitrary order</strong>. If the mass of the planet is <b>greater than or equal to</b> the mass of the asteroid, the asteroid is <strong>destroyed</strong> and the planet <strong>gains</strong> the mass of the asteroid. Otherwise, the planet is destroyed.</p>

<p>Return <code>true</code><em> if <strong>all</strong> asteroids can be destroyed. Otherwise, return </em><code>false</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> mass = 10, asteroids = [3,9,19,5,21]
<strong>Output:</strong> true
<strong>Explanation:</strong> One way to order the asteroids is [9,19,5,3,21]:
- The planet collides with the asteroid with a mass of 9. New planet mass: 10 + 9 = 19
- The planet collides with the asteroid with a mass of 19. New planet mass: 19 + 19 = 38
- The planet collides with the asteroid with a mass of 5. New planet mass: 38 + 5 = 43
- The planet collides with the asteroid with a mass of 3. New planet mass: 43 + 3 = 46
- The planet collides with the asteroid with a mass of 21. New planet mass: 46 + 21 = 67
All asteroids are destroyed.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> mass = 5, asteroids = [4,9,23,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> 
The planet cannot ever gain enough mass to destroy the asteroid with a mass of 23.
After the planet destroys the other asteroids, it will have a mass of 5 + 4 + 9 + 4 = 22.
This is less than 23, so a collision would not destroy the last asteroid.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= mass &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= asteroids.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= asteroids[i] &lt;= 10<sup>5</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Greedy
- Sorting

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Choosing the asteroid to collide with can be done greedily.
2. If an asteroid will destroy the planet, then every bigger asteroid will also destroy the planet.
3. You only need to check the smallest asteroid at each collision. If it will destroy the planet, then every other asteroid will also destroy the planet.
4. Sort the asteroids in non-decreasing order by mass, then greedily try to collide with the asteroids in that order.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 0 ms | 106.8 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
