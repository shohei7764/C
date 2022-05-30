import tkinter
import random

def g():
    number = random.randint(0,5)
    if number==0:
        result = '大吉'
    if number==1:
        result = '中吉'
    if number==2:
        result = '吉'
    if number==3:
        result = '小吉'
    if number==4:
        result = '凶'
    if number==5:
        result = '大凶'
    else:
        result = 'エラー'
    return(result)

def btn_click():
    Appearance = g()
    Appearance_box.delete(0,tkinter.END)
    Appearance_box.insert(0, result)

tki = tkinter.Tk()
tki.geometry('300x200')
tki.title('おみくじ')


Appearance_box = tkinter.Entry(width=10)
Appearance_box.place(x=100, y=150)

btn = tkinter.Button(tki, text='おみくじを引く', command=btn_click)
btn.place(x=100,y=80)

tki.mainloop()