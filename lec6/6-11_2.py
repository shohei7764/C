import numpy as np
import matplotlib as mpl
import matplotlib.pyplot as plt

def f(x):
	return x*x*9*10 + 100

mpl.rcParams['lines.linewidth']=10
#mpl.rcParams['lines.linestyle']='--'

t = np.arange(0,10,0.1)
plt.figure(1)
plt.plot(t,f(t))
plt.show()