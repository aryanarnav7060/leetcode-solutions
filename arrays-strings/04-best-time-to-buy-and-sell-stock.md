## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Used a single-pass greedy approach tracking the minimum price seen so far and calculating potential profit at each step. This ensures we find the maximum profit with just one traversal, O(n) time complexity.

### Complexity
- Time: $O(n)$
- Space: $O(1)$ auxiliary space

### Notes
The key insight is that we don't need to check all pairs — we simply track the lowest price seen so far and the best profit achievable selling at each subsequent price. This is the optimal O(n) solution for this problem.
```[cite: 1]

---

### Step 3: Update `PROGRESS.md`
Open `PROGRESS.md` and mark the fourth row as solved:

```markdown
| 16/09 | Best Time to Buy and Sell Stock | Arrays & Strings | Easy | Solved | 20 min |
```[cite: 1]

---

### Step 4: Commit Your Work
In your VS Code terminal, commit your progress:

```bash
git add arrays-strings/ PROGRESS.md
git commit -m "Solve 04 Best Time to Buy and Sell Stock: add C solution, local tests, and docs"
```[cite: 1]