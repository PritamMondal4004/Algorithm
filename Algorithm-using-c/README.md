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


Step 1: SET STATUS = 1 (ready state) for each node in G.

Step 2: Push the starting node A onto the STACK and set its STATUS (waiting state) = 2.

Step 3: Repeat Steps 4 and 5 until the STACK is empty.

Step 4: Pop a node N from the STACK. Process it and set its STATUS (processed state) = 3.

Step 5: Push all the neighbors of N that are in the ready state (whose STATUS = 1) onto the STACK and set their STATUS = 2 (waiting state).[END OF LOOP]

Step 6: EXIT.


![download](https://github.com/user-attachments/assets/1416aca1-9fcd-4d9a-9486-f6bddab44fe9)


# N-Queen Algorithm


Step 1: SET STATUS = 1 (ready state) for each position on the N x N chessboard.

Step 2: Start with the first column, SET the column as the starting column A, and SET its STATUS = 2 (waiting state).

Step 3: Repeat Steps 4 to 7 until a solution is found or all columns are processed.

Step 4: Place a queen in the first available position in column A and SET the position's STATUS = 3 (processed state).

Step 5: Check if this position is safe (i.e., no other queens can attack this position).

i) If the position is safe:
    
        a) Move to the next column and SET its STATUS = 2 (waiting state).
        
        b) Repeat from Step 4 for the new column.
        
    ii) If the position is not safe:
    
        a) Remove the queen from the current position and SET its STATUS back to 1 (ready state).
        
        b) Move to the next available position in the same column and repeat Step 4.
        
        c) If no positions are left in the column, backtrack to the previous column and try a new position.
        
Step 6: If all queens are placed successfully and all columns are processed, a solution is found. EXIT.

Step 7: If no positions are available and all backtracking is exhausted, the solution does not exist. EXIT.


![download](https://github.com/user-attachments/assets/0d15077a-3b5c-443d-9b74-88ac6e580fbb)


# Monkey-Tiger-Cabbage-Goat problem


Step 1: SET STATUS = 1 (ready state) for Monkey, Tiger, Cabbage, Goat, and Boat.

Step 2: Enqueue the starting state (Monkey, Tiger, Cabbage, Goat on the left side, Boat on the left side) and set its STATUS (waiting state) = 2.

Step 3: Repeat Steps 4 and 5 until QUEUE is empty.

Step 4: Dequeue a state S. Process it (check for goal state, if all items are safely on the other side, exit) and set its STATUS (processed state) = 3.

Step 5: Enqueue all valid successor states of S that are in the ready state (whose STATUS = 1) and set their STATUS = (waiting state) 2.

    Valid successor states are those where the Monkey moves an item (or himself alone) across the river without violating any rules (e.g., Tiger cannot be left alone with Goat, Goat cannot be left alone with Cabbage).
    
Step 6: If a goal state is reached where Monkey, Tiger, Cabbage, and Goat are all safely on the other side, EXIT.


![download](https://github.com/user-attachments/assets/defec598-5a45-4564-9978-edb77acf873d)


# 8-Puzzle Problem Algorithm


Step 1: SET STATUS = 1 (ready state) for each node in the state space graph.

Step 2: Enqueue the initial state (starting node) A and set its STATUS = 2 (waiting state).

Step 3: Repeat Steps 4 and 5 until QUEUE is empty or the goal state is reached.

Step 4: Dequeue a node N.

    Process it (check if N is the goal state).
    
    If N is the goal state, print the solution and EXIT.

    If not, set its STATUS = 3 (processed state).

Step 5: Enqueue all valid and unvisited neighboring states of N (those with STATUS = 1) and set their STATUS = 2 (waiting state).

[END OF LOOP]

Step 6: EXIT

![download](https://github.com/user-attachments/assets/9060bebe-26dd-4a9a-9019-51f727d9ea02)
