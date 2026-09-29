## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a brute-force nested iteration approach to compare every pair of elements until their sum matched the target value. Dynamically allocated an array of size 2 on the heap using malloc to return the indices safely without stack memory decay.

### Complexity
- Time: $O(n^2)$
- Space: $O(1)$ auxiliary space (excluding the returned array)

### Notes
The returned array must be allocated with `malloc` because local stack arrays are destroyed once the function returns. A hash table approach can reduce time complexity to $O(n)$, but requires custom hash table implementation in pure C.
```[cite: 1]

---

### 3. Update `PROGRESS.md`
Open `PROGRESS.md` in the root folder and update the first row[cite: 1]:

```markdown
| Date | Problem | Topic | Difficulty | Status | Time Taken |
| :--- | :--- | :--- | :--- | :--- | :--- |
| 16/09 | Two Sum | Arrays & Strings | Easy | Solved | 15 min |
```[cite: 1]

---

### 4. Git Commit
Commit your work for this problem directly from the VS Code terminal[cite: 1]:

```bash
git add arrays-strings/ PROGRESS.md
git commit -m "Solve 01 Two Sum: add C solution, local tests, and docs"
```[cite: 1]

---

Your `arrays-strings/` folder now has `01-two-sum.c`, `01-two-sum.md`, and `01-result.png`[cite: 1]. Ready to tackle Problem 2 (**Reverse a String**) in C[cite: 1]?