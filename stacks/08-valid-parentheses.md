## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used a stack-based approach iterating through the string. Push opening brackets onto the stack. When encountering a closing bracket, pop the stack and verify it matches the corresponding opening bracket. Return false if any mismatch or if the stack isn't empty at the end.

### Complexity
- Time: $O(n)$ where n is the length of the string
- Space: $O(n)$ in the worst case for the stack (when all characters are opening brackets)

### Notes
The stack ensures that brackets are closed in the correct nested order. Using a fixed-size array stack with `MAX_SIZE 100` is sufficient for typical test cases, but a dynamic allocation could handle arbitrarily long inputs.
```[cite: 1]

---

### Step 3: Update `PROGRESS.md`
Open `PROGRESS.md` and mark the eighth row as solved:

```markdown
| 16/09 | Valid Parentheses | Stacks & Linked Lists | Easy | Solved | 18 min |
```[cite: 1]

---

### Step 4: Commit Your Work
In your VS Code terminal, commit your progress:

```bash
git add stacks/ PROGRESS.md
git commit -m "Solve 08 Valid Parentheses: add C solution, local tests, and docs"
```[cite: 1]