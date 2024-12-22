from tkinter import filedialog # select folder e click korle file select korar jonne popup window ashbe. oi popup window er jonne filedialog import korlam
from tkinter import *
import pygame
import os

root = Tk()
root.title('Music Player')
root.geometry("500x300")  # Use "x" instead of "*"

pygame.mixer.init()

#creating menu bar. menubar hoilo uporer section ta.
menubar = Menu(root)
root.config(menu=menubar)

# song loading er jonne variable declare korlam
songs = []
current_song =""
paused = False

def load_music():
  global current_song
  root.directory = filedialog.askdirectory()

  #ei loop er maddhome ami file search korbo jodi extension ta .mp3 hoy then add korbo
  for song in os.listdir(root.directory):
      name, ext =os.path.splitext(song)
      if ext =='.mp3':
        songs.append(song)

  for song in songs: #listbox e aro song add korlam
    songlist.insert("end",song)

  songlist.selection_set(0) # ei line er maddhome serial er shurur song ta select korbe
  current_song = songs[songlist.curselection()[0]]


def play_music():
    global current_song, paused

    if not paused:
        pygame.mixer.music.load(os.path.join(root.directory,current_song))
        pygame.mixer.music.play()
    else:
        pygame.mixer.music.unpaused()
        paused = False

def pause_music():
    global pause
    pygame.mixer.music.pause()
    paused = True

def next_music():
    global current_song, paused

    try:
        songlist.selection_clear(0,END)
        songlist.selection_set(songs.index(current_song) + 1)
        current_song = songs[songlist.curselection()[0]]
        play_music()
    except:
        pass

def prev_music():
    global current_song, paused

    try:
        songlist.selection_clear(0,END)
        songlist.selection_set(songs.index(current_song) - 1)
        current_song = songs[songlist.curselection()[0]]
        play_music()
    except:
        pass



#organise menu
organise_menu =Menu(menubar, tearoff=False) # menubar e click korle --- erokom line ashto. oita off korte tearoff = False use korlam
organise_menu.add_command(label='Select Folder', command=load_music) # load_music command er maddhome jokhon select folder e click korbo oita music select korbe
menubar.add_cascade(label='Organise',menu=organise_menu)

# ei dui line black box add korlo. ekhane song list create korlam
songlist = Listbox(root, bg="black", fg="white", width=100, height=15)
songlist.pack()

play_btn_image =PhotoImage(file='images/play.png')
pause_btn_image =PhotoImage(file='images/pause.png')
next_btn_image =PhotoImage(file='images/next.png')
prev_btn_image =PhotoImage(file='images/previous.png')

control_frame = Frame(root)
control_frame.pack()

play_btn = Button(control_frame,image=play_btn_image,borderwidth=0, command=play_music)
pause_btn = Button(control_frame,image=pause_btn_image,borderwidth=0, command=pause_music)
next_btn = Button(control_frame,image=next_btn_image,borderwidth=0, command=next_music)
prev_btn = Button(control_frame,image=prev_btn_image,borderwidth=0,command=prev_music)

play_btn.grid(row=0,column=1,padx=7,pady=10)
pause_btn.grid(row=0,column=2,padx=7,pady=10)
next_btn.grid(row=0,column=3,padx=7,pady=10)
prev_btn.grid(row=0,column=0,padx=7,pady=10)

root.mainloop()
