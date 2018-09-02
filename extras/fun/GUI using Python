from tkinter import *

root = Tk()    #Tk() opens up a blank window, and we've set it equal to root

topFrame = Frame(root) #It's better to split your window layout into parts, which here, are called frames
topFrame.pack() #pack literally means to stuff 'things' into the window, here we stuffed in one frame

bottomFrame = Frame(root)
bottomFrame.pack()

 #What's a GUI without having something to click on?

B1 = Button(topFrame, text = "button 1", fg="red")

 # Button() creates, well, a button which can be given many parameters, example - the text, colour of text, foreground - background colour etc
 # Here, we're creating buttons and storing them.
B2 = Button(topFrame, text = "button 2", fg="blue")


B3 = Button(topFrame, text = "button 3", fg="green")


B4 = Button(topFrame, text = "button 4", fg="purple")

B1.pack(side=LEFT) #As discussed above, we've created a button and now need to 'stuff' it in the window. Pack() is, again, the way to go
B2.pack(side=LEFT) #Pack too has it's own parameters. 'side' is pretty self explanatory. There are better ways to define locations for objects, Google is your friend.
B3.pack(side=LEFT)
B4.pack(side=BOTTOM)

#We've created some buttons, great. It'd be even better to assign some functions to them, so lets define some -

def eventB1(event):
    print('You Pressed B1')

def eventB2(event):
    print('You Pressed B2')

def eventB3(event):
    print('You Pressed B3')

def eventB4(event):
    print('You Pressed B4')




B1.bind("<Button-1>", eventB1)

# bind() can bind specified buttons to a function, which can be called upon by the binded keys specified here
# <Button-1> is your left mouse button, <Button-2> and <Button-3> are middle and right mouse buttons respectively
# Here, clicking on the button with your left mouse button will call the function, using other keys (unless specified) won't work

B2.bind("<Button-1>", eventB2)
B3.bind("<Button-1>", eventB3)
B4.bind("<Button-1>", eventB4)



root.mainloop() # Main loop keeps the program running. Go ahead and try running the code without this line.
