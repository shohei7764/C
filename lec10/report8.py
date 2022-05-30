import tkinter as tk
import random

def make_result():
    number = random.randint(0,4)
    if number==0:
        result = '大吉'
    if number==1:
        result = '中吉'
    if number==2:
        result = '吉'
    if number==3:
        result = '凶'
    if number==4:
        result = '大凶'
        
    return(result)

#clickイベント
def click():
    result = make_result()
    result_box.delete(0,tk.END)
    result_box.insert(0, result)

#GUI画面作成
root = tk.Tk()
root.geometry('400x250')
root.title('おみくじ')

#結果出るところ
result_box = tk.Entry(width=10)
result_box.place(x= 72, y=113)

#ボタン
btn = tk.Button(root, text='おみくじを引いてください', font=("MSゴシック", "20", "bold"), command=click)
btn.place(x=50,y=50)

#画面を表示
root.mainloop()
