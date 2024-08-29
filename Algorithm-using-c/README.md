# BFS Algorithm :


Step 1: SET STATE = UNVISITED (value = 1) for each node in GRAPH.

Step 2: Add the starting node START_NODE to the QUEUE and set its STATE = IN_QUEUE (value = 2).

Step 3: Repeat Steps 4 and 5 until the QUEUE is empty.

Step 4: Remove the front node CURRENT_NODE from the QUEUE, process it, and set its STATE = PROCESSED (value = 3).

Step 5: Add all NEIGHBORS of CURRENT_NODE that are in the UNVISITED state (value = 1) to the QUEUE and set their STATE = IN_QUEUE (value = 2).
[END OF LOOP]

Step 6: EXIT.

![download](https://github.com/user-attachments/assets/76f7c200-2a88-4f60-a8c4-b18f2c1b4b19)


# DFS Algorithm:


Step 1: SET STATE = NOT_VISITED (value = 1) for each node in the GRAPH.

Step 2: Push the starting node START_NODE onto the STACK and set its STATE = IN_STACK (value = 2).

Step 3: Repeat Steps 4 and 5 until the STACK is empty.

Step 4: Pop a node CURRENT_NODE from the STACK, process it, and set its STATE = VISITED (value = 3).

Step 5: Push all the ADJACENT_NODES of CURRENT_NODE that are in the NOT_VISITED state (value = 1) onto the STACK and set their STATE = IN_STACK (value = 2).
[END OF LOOP]

Step 6: EXIT.


![download](https://github.com/user-attachments/assets/1416aca1-9fcd-4d9a-9486-f6bddab44fe9)


# N-Queen Algorithm


Step 1: Initialize an empty BOARD of size N x N with each cell set to UNOCCUPIED (value = 1).

Step 2: Begin with the first row, setting CURRENT_ROW to the first row and COLUMN_INDEX to 0.

Step 3: Repeat Steps 4 to 7 until a solution is found or all rows are exhausted.

Step 4: Try placing a QUEEN in the CURRENT_ROW at the COLUMN_INDEX.

Check if placing the QUEEN here is valid:
Ensure that no other QUEEN can attack this position horizontally, vertically, or diagonally.
i) If the position is safe:

a) Mark the cell as OCCUPIED (value = 3).
b) Move to the next row by setting CURRENT_ROW to CURRENT_ROW + 1.
c) Reset COLUMN_INDEX to 0.
ii) If the position is not safe:

a) Move to the next column by setting COLUMN_INDEX to COLUMN_INDEX + 1.
Step 5: If COLUMN_INDEX exceeds N (i.e., no valid position is found in the current row), backtrack:

a) Decrease CURRENT_ROW by 1 to revisit the previous row.
b) Remove the QUEEN from the previously OCCUPIED cell, setting it back to UNOCCUPIED.
c) Set COLUMN_INDEX to the column after the last placed QUEEN.
Step 6: If all QUEENS are placed (i.e., CURRENT_ROW exceeds N), a solution is found. Mark the solution and EXIT.

Step 7: If no valid position is available and all rows have been backtracked through, conclude that no solution exists. EXIT.

![download](https://github.com/user-attachments/assets/0d15077a-3b5c-443d-9b74-88ac6e580fbb)


# Monkey-Tiger-Cabbage-Goat problem

Step 1: SET STATE = INITIAL (value = 1) for Person, Lion, Lettuce, Sheep, and Raft.

Step 2: Add the starting configuration (with Person, Lion, Lettuce, Sheep, and Raft all on the left side) to the QUEUE and set its STATE = IN_PROGRESS (value = 2).

Step 3: Repeat Steps 4 and 5 until the QUEUE is empty.

Step 4: Remove a configuration CURRENT_STATE from the QUEUE. Process it by:

Checking if it matches the goal configuration (where all items are on the right side).
If the goal configuration is reached, EXIT.
Step 5: Identify all possible valid NEXT_STATES that can be derived from CURRENT_STATE by moving the Person and possibly one other item across the river on the Raft. Each NEXT_STATE must:

Follow the rules (e.g., Lion cannot be left alone with Sheep; Sheep cannot be left alone with Lettuce).
Have STATE = INITIAL (value = 1).
If valid, add NEXT_STATE to the QUEUE and set its STATE = IN_PROGRESS (value = 2).
Step 6: If a configuration is reached where Person, Lion, Lettuce, and Sheep are all safely on the right side, EXIT.




![download](https://github.com/user-attachments/assets/defec598-5a45-4564-9978-edb77acf873d)


# 8-Puzzle Problem Algorithm


Step 1: SET STATE = UNVISITED (value = 1) for each node in the SEARCH_GRAPH.

Step 2: Add the INITIAL_STATE (starting node) START_NODE to the QUEUE and set its STATE = IN_QUEUE (value = 2).

Step 3: Repeat Steps 4 and 5 until the QUEUE is empty or the GOAL_STATE is found.

Step 4: Remove the front node CURRENT_NODE from the QUEUE.

Check if CURRENT_NODE is the GOAL_STATE.
If CURRENT_NODE is the GOAL_STATE, print the solution path and EXIT.
If not, mark CURRENT_NODE as VISITED (value = 3).
Step 5: Identify all valid and UNVISITED neighboring nodes of CURRENT_NODE (those with STATE = UNVISITED).

For each valid neighbor NEIGHBOR_NODE, add it to the QUEUE and set its STATE = IN_QUEUE (value = 2).

Optionally, record the path or parent of each NEIGHBOR_NODE to trace back the solution path later.

[END OF LOOP]

Step 6: If the QUEUE is empty and no goal state is found, EXIT with a message indicating that no solution exists.
![download](https://github.com/user-attachments/assets/9060bebe-26dd-4a9a-9019-51f727d9ea02)
