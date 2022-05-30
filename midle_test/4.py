# coding: UTF-8
#入力した値を素因数分解し、素因数を一つずつ表示するプログラム

n = input()
f = 2
while f*f<=n:
	while n % f==0:
			print(f)
			n = n // f
	f = f+1
if n != 1:
	print(n)



