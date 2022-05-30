import matplotlib.pyplot as plt
import random

def roll():
	return random.randint(1,6)
	
target_score = 20
score = 0
num_rolls = 0
while score < target_score:
	die_roll = roll()
	num_rolls = num_rolls + 1
	print('Rolled:{0}'.format(die_roll))
	score = score + die_roll
	
print('You scored {0} in {1} rolls'.format(score,num_rolls))