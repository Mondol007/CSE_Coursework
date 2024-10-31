from pyformlang.finite_automaton import EpsilonNFA, State, Symbol, Epsilon
from pyformlang.regular_expression import Regex

dfa = EpsilonNFA()

state0 = State('a')
state1 = State('b')
state2 = State('c')

sym_a = Symbol('0')
sym_b = Symbol('1')

dfa.add_start_state(state0)
dfa.add_final_state(state2)

dfa.add_transition(state0, sym_a, state1)
dfa.add_transition(state0, sym_b, state2)
dfa.add_transition(state1, sym_a, state0)
dfa.add_transition(state1, sym_b, state2)
dfa.add_transition(state2, sym_a, state1)
dfa.add_transition(state2, sym_b, state0)

regex = dfa.to_regex()
print(regex)