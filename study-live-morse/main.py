import tkinter

from engine import Process
from data import Inputs

def input_key_press(event):
    print (f"pressed: {event.char}")
    
# Definição da janela
root = tkinter.Tk()
root.geometry("700x305")
root.resizable(False, False)
root.title("Morse Translator")
root.iconbitmap("assets/coding.ico")

# title = tkinter.Label( text="Live morse code translator")
# title.place(x=300,y=20, anchor="center")

def b_press():
    Inputs.pro_input = ""
    Process.to_morse(Inputs.raw_input)
    Inputs.raw_input = ""
    o_input.delete(1.0, tkinter.END)
    o_input.insert(tkinter.END, Inputs.pro_input)

translate = tkinter.Button(text="Translate", command=b_press)
translate.place(height=50, width=80, x=695,y=150, anchor="e")

live = tkinter.Checkbutton(text="Live mode")
live.place(x=695,y=200, anchor="e")

i_frame = tkinter.LabelFrame(text="Input", height=150, width=605)
i_frame.pack_propagate(False)
i_frame.pack(anchor="w", padx=5)

o_frame = tkinter.LabelFrame(text="Output", height=150, width=605)
o_frame.pack_propagate(False)
o_frame.pack(anchor="w", padx=5)

i_input = tkinter.Text(i_frame)
i_input.pack(fill="both", expand=True)

o_input = tkinter.Text(o_frame)
o_input.pack(fill="both", expand=True)


def save_input_one():
    text = i_input.get("1.0", "end-1c")
    Inputs.raw_input = text
    # Process.to_morse(Inputs.raw_input)

def save_input_two():
    text = o_input.get("1.0", "end-1c")
    Inputs.raw_input = text
    # print(Inputs.raw_input)

i_input.bind("<KeyRelease>", lambda event: save_input_one())
o_input.bind("<KeyRelease>", lambda event: save_input_two())

root.mainloop()

