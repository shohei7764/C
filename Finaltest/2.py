import numpy as np

a = np.array([[0., 1., 2.],
              [3., 4., 5.],
              [6., 7., 8.]])
b =  np.array([[0., 1.],
               [2., 3.],
               [4., 5.]])
x = np.zeros((3, 2))
ii = 3
kk = 3
jj = 2

for i in range(ii):
    for j in range(jj):
        for k in range(kk):
            x[i][j] = x[i][j] + a[i][k] * b[k][j]
print(x)