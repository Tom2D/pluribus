# This folder hosts different variants of CFR

`node`
---
This file hosts the classes for Information Sets and the base class Node

`regret_min`
---
[Regret Minimization](http://modelai.gettysburg.edu/2013/cfr/cfr.pdf) (found in section 2) algorithm implemented here. Through regret matching, minimize regrets and create an average strategy that minimizes regrets over time



`vanilla_cfr`
---
[Vanilla CFR](http://modelai.gettysburg.edu/2013/cfr/cfr.pdf) (section 3) uses the regret matchin algorithm to calculate an average strategy that *can* converge to a Nash Equilibrium in some scenarios (guaranteed for 2 player games). This implementation of CFR is for 2 and 3 player Kuhn poker. 

`mccfr`
---
[Monte Carlo CFR](https://science.sciencemag.org/content/sci/suppl/2019/07/10/science.aay2400.DC1/aay2400-Brown-SM.pdf) (Equilibrium Finding and Algorithm 1) is the algorithm used in Pluribus as the blueprint strategy. This is currently implemented for 2 and 3 player Kuhn Poker with actions 2 (Pass/Bet) and 4 (Fold/Pass/Call/Raise) actions. 

Generally running both CFR implementations for 10000 iterations is sufficient.

- [x] 2 player Kuhn Poker 
- [x] 3 player Kuhn Poker
- [x] 2 and 3 player 4 action Kuhn Poker 
- [ ] 2 and 3 player multiround Kuhn Poker

`main`
---
This allows for a user to run each algorithm for a certain number of players and iterations.