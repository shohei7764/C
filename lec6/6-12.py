import numpy as np
import matplotlib as mpl
import matplotlib.pyplot as plt

mpl.rcParams['lines.linewidth']=10
mpl.rcParams['lines.linestyle']='--'

t = np.arange(0,2*np.pi,0.01)
plt.figure(1)
for i in range(1,30):
	plt.plot(t,np.sin(t-0.2*i))
	plt.pause(0.1)
	plt.clf()