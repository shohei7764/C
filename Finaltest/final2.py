A = [[5, 5, 8],[2, 6, 2],[5, 6, 3]]
B =[[1, 3, 2],[4, 8, 7],[1, 8, 3]]
c = [[0,0,0],[0,0,0],[0,0,0]]
for i in range(3):
	for k in range(3):
		for j in range(3):
			c[i][k]=c[i][k]+A[i][j]*B[j][k]
print(c)
		
