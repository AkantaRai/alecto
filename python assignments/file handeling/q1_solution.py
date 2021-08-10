#q1.Count the total number of words in ‘oliver.txt’.
import os
import sys
path="C:/Users/pavilion/Documents/repository alecto main/alecto/python assignments/file handeling/txt"
os.chdir(path)
text=open("oliver.txt","r+")
words=text.read()
words=words.split()
print(len(words))
