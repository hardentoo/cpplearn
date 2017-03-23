ifeq ($(OS),Windows_NT)
 
all: main.exe

main.exe:
	clang++ --std=c++14 main.cpp -o main.exe

clean:
	del main main.exe

else
 
all: main

main:
	clang++ --std=c++14 main.cpp -o main

clean:
	rm -rf main main.exe

endif
