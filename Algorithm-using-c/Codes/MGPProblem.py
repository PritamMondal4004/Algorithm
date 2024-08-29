
initial_state = {'man': 'left', 'wolf': 'left', 'goat': 'left', 'cabbage': 'left'}


possible_moves = [{'man': 'right'}, {'man': 'left', 'goat': 'right'},
                  {'man': 'right', 'goat': 'right'}, {'man': 'left', 'cabbage': 'right'},
                  {'man': 'right', 'cabbage': 'right'}, {'man': 'left', 'wolf': 'right'},
                  {'man': 'right', 'wolf': 'right'}, {'man': 'left'}]


def is_state_valid(state):
    if state['goat'] == state['wolf'] and state['man'] != state['wolf']:
        return False
    if state['goat'] == state['cabbage'] and state['man'] != state['cabbage']:
        return False
    return True


steps = []


current_state = initial_state.copy()
steps.append(current_state)


current_state.update(possible_moves[1]) 
steps.append(current_state.copy())

current_state.update(possible_moves[0]) 
steps.append(current_state.copy())

current_state.update(possible_moves[3]) 
steps.append(current_state.copy())

current_state.update(possible_moves[7]) 
current_state.update(possible_moves[0])  
steps.append(current_state.copy())

current_state.update(possible_moves[6])  
steps.append(current_state.copy())

current_state.update(possible_moves[0])  
current_state.update(possible_moves[1]) 
steps.append(current_state.copy())

current_state.update(possible_moves[4])  
steps.append(current_state.copy())


if not is_state_valid(current_state):
    print('Invalid final state')
else:
   
    print('Solution:')
    for i, state in enumerate(steps):
        print(f'Step {i}: {state}')
