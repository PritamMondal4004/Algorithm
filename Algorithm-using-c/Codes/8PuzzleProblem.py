class PuzzleSolver:
    def solve_puzzle(self, grid):
        state_dict = {}
        flattened = []
        
     
        for row in grid:
            flattened.extend(row)
        flattened = tuple(flattened)
        
   
        state_dict[flattened] = 0
        
   
        if flattened == (0, 1, 2, 3, 4, 5, 6, 7, 8):
            return 0
        
        return self.find_solution(state_dict)
    
    def find_solution(self, state_dict):
        steps = 0
        
        while True:
            current_states = [state for state in state_dict if state_dict[state] == steps]
            
            if not current_states:
                return -1 
            
            for state in current_states:
                next_states = self.generate_next_states(state)
                for next_state in next_states:
                    if next_state not in state_dict:
                        state_dict[next_state] = steps + 1
                    if next_state == (0, 1, 2, 3, 4, 5, 6, 7, 8):
                        return steps + 1
            
            steps += 1
    
    def generate_next_states(self, state):
        position_map = {
            0: [1, 3],
            1: [0, 2, 4],
            2: [1, 5],
            3: [0, 4, 6],
            4: [1, 3, 5, 7],
            5: [2, 4, 8],
            6: [3, 7],
            7: [4, 6, 8],
            8: [5, 7],
        }
        
        possible_states = []
        zero_pos = state.index(0)
        
        for move in position_map[zero_pos]:
            new_state = list(state)
 
            new_state[move], new_state[zero_pos] = new_state[zero_pos], new_state[move]
            possible_states.append(tuple(new_state))
        
        return possible_states


solver = PuzzleSolver()
initial_state = [
    [3, 1, 2],
    [4, 7, 5],
    [6, 8, 0]
]
print(solver.solve_puzzle(initial_state))
