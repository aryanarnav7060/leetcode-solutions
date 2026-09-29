## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Iterated character by character across all strings, comparing each string's characters to the first string. Shortened the common length whenever a mismatch was found, stopping early if no common prefix remained.

### Complexity
- Time: $O(n \cdot m)$ where n is the number of strings and m is the length of the shortest string
- Space: $O(1)$ auxiliary space (excluding the returned malloc'd string)

### Notes
The algorithm starts with the full length of the first string and progressively reduces the common prefix length as mismatches are found across subsequent strings. Using `strncpy` to copy the result and null-terminating it safely.
```[cite: 1]

---

### Step 3: Update `PROGRESS.md`
Open `PROGRESS.md` and mark the fifth row as solved:

```markdown
| 16/09 | Longest Common Prefix | Arrays & Strings | Easy | Solved | 15 min |
```[cite: 1]

---

### Step 4: Commit Your Work
In your VS Code terminal, commit your progress:

```bash
git add arrays-strings/ PROGRESS.md
git commit -m "Solve 05 Longest Common Prefix: add C solution, local tests, and docs"
```[cite: 1]