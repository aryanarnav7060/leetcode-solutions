## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Implemented the classic binary search algorithm with left and right pointers. Calculated the middle index as `left + (right - left) / 2` to prevent potential integer overflow. The search space is halved each iteration by comparing the middle element to the target.

### Complexity
- Time: $O(\log n)$
- Space: $O(1)$ auxiliary space

### Notes
The binary search only works on a sorted array. Using `mid = left + (right - left) / 2` instead of `(left + right) / 2` avoids overflow for large arrays. The loop condition `left <= right` ensures we check the last remaining element.
```[cite: 1]

---

### Step 3: Update `PROGRESS.md`
Open `PROGRESS.md` and mark the sixth row as solved:

```markdown
| 16/09 | Binary Search | Basic Algorithms | Easy | Solved | 12 min |
```[cite: 1]

---

### Step 4: Commit Your Work
In your VS Code terminal, commit your progress:

```bash
git add basic-algorithms/ PROGRESS.md
git commit -m "Solve 06 Binary Search: add C solution, local tests, and docs"
```[cite: 1]