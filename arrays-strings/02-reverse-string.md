## Problem: Reverse a String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Used a two-pointer technique with pointers starting at the beginning (`left`) and the end (`right`) of the array. Swapped elements in place and moved the pointers toward the center until they met.

### Complexity
- Time: $O(n)$
- Space: $O(1)$ auxiliary space

### Notes
The problem requires modifying the input array in-place with $O(1)$ extra memory. Two pointers avoid the need for any temporary buffer.
```[cite: 1]

---

### Step 3: Update `PROGRESS.md`
Open `PROGRESS.md` and mark the second row as solved[cite: 1]:

```markdown
| 16/09 | Reverse a String | Arrays & Strings | Easy | Solved | 10 min |
```[cite: 1]

---

### Step 4: Commit Your Work
In your VS Code terminal, commit your progress[cite: 1]:

```bash
git add arrays-strings/ PROGRESS.md
git commit -m "Solve 02 Reverse String: add C solution, local tests, and docs"
```[cite: 1]

---

Once committed, let's start Problem 3: **Valid Anagram**[cite: 1]. Ready for the C implementation and test cases[cite: 1]?