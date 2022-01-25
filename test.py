import os

def readtime():
    with open("time.txt",'r') as f:
        return float(f.read())
def run(cmd:str):
    os.system("(/usr/bin/time -f \"%s\" %s) 2> time.txt"%("%e",cmd))


print("TEST:           numbers32")

os.system("g++ iostream-test/numbers32.cpp -o run -std=c++17")
run("./run < data/numbers32.txt")
print("iostream:       %s"%(readtime()))

os.system("g++ scanf-test/numbers32.cpp -o run -std=c++17")
run("./run < data/numbers32.txt")
print("scanf:          %s"%(readtime()))

os.system("g++ getchar-test/numbers32.cpp -o run -std=c++17")
run("./run < data/numbers32.txt")
print("getchar:        %s"%(readtime()))

os.system("g++ getchar-fast-test/numbers32.cpp -o run -std=c++17")
run("./run < data/numbers32.txt")
print("getchar-fast:   %s"%(readtime()))

os.system("g++ fastio-test/numbers32.cpp -o run -std=c++17")
run("./run < data/numbers32.txt")
print("fastio:         %s"%(readtime()))

###########################################################
print("\nTEST:           numbers64")

os.system("g++ iostream-test/numbers64.cpp -o run -std=c++17")
run("./run < data/numbers64.txt")
print("iostream:       %s"%(readtime()))

os.system("g++ scanf-test/numbers64.cpp -o run -std=c++17")
run("./run < data/numbers64.txt")
print("scanf:          %s"%(readtime()))

os.system("g++ getchar-test/numbers64.cpp -o run -std=c++17")
run("./run < data/numbers64.txt")
print("getchar:        %s"%(readtime()))

os.system("g++ getchar-fast-test/numbers64.cpp -o run -std=c++17")
run("./run < data/numbers64.txt")
print("getchar-fast:   %s"%(readtime()))

os.system("g++ fastio-test/numbers64.cpp -o run -std=c++17")
run("./run < data/numbers64.txt")
print("fastio:         %s"%(readtime()))

###########################################################
print("\nTEST:           chars")

os.system("g++ iostream-test/chars.cpp -o run -std=c++17")
run("./run < data/chars.txt")
print("iostream:       %s"%(readtime()))

os.system("g++ scanf-test/chars.cpp -o run -std=c++17")
run("./run < data/chars.txt")
print("scanf:          %s"%(readtime()))

os.system("g++ getchar-test/chars.cpp -o run -std=c++17")
run("./run < data/chars.txt")
print("getchar:        %s"%(readtime()))

os.system("g++ getchar-fast-test/chars.cpp -o run -std=c++17")
run("./run < data/chars.txt")
print("getchar-fast:   %s"%(readtime()))

os.system("g++ fastio-test/chars.cpp -o run -std=c++17")
run("./run < data/chars.txt")
print("fastio:         %s"%(readtime()))

###########################################################
print("\nTEST:           strings")

os.system("g++ iostream-test/strings.cpp -o run -std=c++17")
run("./run < data/strings.txt")
print("iostream:       %s"%(readtime()))

os.system("g++ scanf-test/strings.cpp -o run -std=c++17")
run("./run < data/strings.txt")
print("scanf:          %s"%(readtime()))


os.system("g++ getchar-test/strings.cpp -o run -std=c++17")
run("./run < data/strings.txt")
print("getchar:        %s"%(readtime()))


os.system("g++ getchar-fast-test/strings.cpp -o run -std=c++17")
run("./run < data/strings.txt")
print("getchar-fast:   %s"%(readtime()))

os.system("g++ fastio-test/strings.cpp -o run -std=c++17")
run("./run < data/strings.txt")
print("fastio:         %s"%(readtime()))
os.system("rm run")