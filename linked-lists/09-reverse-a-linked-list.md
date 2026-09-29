## Problem: Reverse a Linked List (Medium)
**Link:** https://leetcode.com/problems/reverse-a-linked-list/

### Approach
Used an iterative three-pointer technique: `prev`, `current`, and `nextNode`. Traversed the list while reversing each node's `next` pointer to point to the previous node. Finally, returned `prev` as the new head of the reversed list.

### Complexity
- Time: $O(n)$ where n is the number of nodes in the list
- Space: $O(1)$ auxiliary space — in-place reversal without recursion

### Notes
The iterative approach avoids the recursion stack overhead and O(n) space complexity. The three-pointer technique ensures we don't lose the reference to the rest of the list during reversal. Could also be solved recursively with O(n) stack space.
```[cite: 1]

---

### Step 3: Update `PROGRESS.md`
Open `PROGRESS.md` and mark the ninth row as solved:

```markdown
| 16/09 | Reverse a Linked List | Stacks & Linked Lists | Medium | Solved | 25 min |
```[cite: 1]

---

### Step 4: Commit Your Work
In your VS Code terminal, commit your progress:

```bash
git add linked-lists/ PROGRESS.md
git commit -m "Solve 09 Reverse a Linked List: add C solution, local tests, and docs"
```[cite: 1]