# Interview exercise: n-indirections Problem

## Overview
This is my corrected solution for the n-indirections problem from the OWL-Services interview.

## What I Learned
After reviewing my code, I identified the problem I had:

**Original (incorrect):**
```c
for(int i = 0; i < indirections - 1; i++){
    ptr = *(int**) initial;  // Always dereferences 'initial'
}
```
<img width="723" height="168" alt="Screenshot From 2025-11-14 17-12-18" src="https://github.com/user-attachments/assets/a0085d47-8320-462b-9b0a-b369696416c5" />


**Corrected:**
```c
for(int i = 0; i < indirections - 1; i++){
    ptr = *(int**) ptr;  // Updates 'ptr' itself to follow the chain
}
```
<img width="723" height="168" alt="Screenshot From 2025-11-14 17-04-54" src="https://github.com/user-attachments/assets/ab0852bf-51db-420c-b115-a3c4fa7e1943" />


The issue was that I was repeatedly dereferencing the initial pointer instead of following the chain by updating `ptr` at each step.

## Full Solution
See `n_indirections.c` for the complete working code.

Thank you for the opportunity to learn from this challenge!
