import random
import string

SIZE=0

with open("data/numbers32.txt",'w') as f:
    data=""
    cnt=0
    while(len(data)<SIZE):
        cnt+=1
        data+=str(random.randint(1,1e9))+" "
    f.write(str(cnt)+"\n"+data)

with open("data/numbers64.txt",'w') as f:
    data=""
    cnt=0
    while(len(data)<SIZE):
        cnt+=1
        data+=str(random.randint(1,1e18))+" "
    f.write(str(cnt)+"\n"+data)

with open("data/chars.txt",'w') as f:
    data=""
    cnt=0
    while(len(data)<SIZE):
        cnt+=1
        data+=random.choice(string.ascii_letters)+" "
    f.write(str(cnt)+"\n"+data)

with open("data/strings.txt",'w') as f:
    data=""
    cnt=0
    while(len(data)<SIZE):
        cnt+=1
        data+="".join([random.choice(string.ascii_letters) for e in range(random.randint(1,2e4))])+" "
    f.write(str(cnt)+"\n"+data)

