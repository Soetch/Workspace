from time import *
from tkinter import *
from tkinter import ttk

def _initApp():
    root = Tk()
    root.geometry("1280x720")
    
    frm = ttk.Frame(root, padding=10)
    frm.grid()
    ttk.Label(frm, text="Hello World").grid(column=5, row=0)
    ttk.Button(frm, text="Quit", command=root.destroy).grid(column=5, row=5)
    root.mainloop()
    
_initApp()