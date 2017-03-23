
ifeq ($(OS),Windows_NT)
 
all: hello.exe

hello.exe:
	g++ hello.cpp -o hello.exe --std=c++14

clean:
	del hello hello.exe

else
 
all: hello hello.exe

hello:
	g++ hello.cpp -o hello

hello.exe:
	x86_64-w64-mingw32-g++ --static hello.cpp -o hello.exe

clean:
	rm -rf hello hello.exe

endif
