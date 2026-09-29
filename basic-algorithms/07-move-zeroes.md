## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pass algorithm with a write pointer. First pass iterates through the array and moves all non-zero elements to the front while preserving their relative order. Second pass fills all remaining positions from the write pointer to the end with zeros.

### Complexity
- Time: $O(n)$
- Space: $O(1)$ auxiliary space — in-place modification without additional arrays

### Notes
The key insight is maintaining the relative order of non-zero elements by using a write pointer that only advances when a non-zero element is placed. This is more efficient than bubble sort-based approaches which would be O(n²).
```[cite: 1]

---

### Step 3: Update `PROGRESS.md`
Open `PROGRESS.md` and mark the seventh row as solved:

```markdown
| 16/09 | Move Zeroes | Basic Algorithms | Easy | Solved | 15 min |
```[cite: 1]

---

### Step 4: Commit Your Work
In your VS Code terminal, commit your progress:

```bash
git add basic-algorithms/ PROGRESS.md
git commit -m "Solve 07 Move Zeroes: add C solution, local tests, and docs"
```[cite: 1]