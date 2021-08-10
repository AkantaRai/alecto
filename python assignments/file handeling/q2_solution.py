#q2.Make a dictionary of all the unique words and their frequency  in ‘oldman.txt’.
import os
import sys
path="C:/Users/pavilion/Documents/repository alecto main/alecto/python assignments/file handeling/txt"
os.chdir(path)
text=open("oldman.txt","r+")
words=text.read()
words=words.split()
