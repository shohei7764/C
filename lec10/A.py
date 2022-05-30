import tkinter as tk

def clk():
	print("click event")

root = tk.Tk()
root.geometry("200x50")

button = tk.Button(root, text="OK", command=clk)
button.pack()

root.mainloop()