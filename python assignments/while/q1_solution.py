#q1.bird = ['crows','pigeon','eagles','falcon','pigeon','falcon','falcon']
#Remove all the duplicates from the following list using while.
bird = ['crows','pigeon','eagles','falcon','pigeon','falcon','falcon']
x=len(bird)-1
while x!=0:
    y=bird[x]
    z=bird.count(y)
    if(z>1):
        bird.pop(x)
    x-=1
print(bird,"is the new un repeated list.")