ifeq ($(OS),Windows_NT)

all: lam.exe

lam.exe:
	g++ lam.cpp -o lam --std=c++11

clean:
	del lam lam.exe

else

all: lam lam.exe

lam:
	g++ lam.cpp -o lam --std=c++11

lam.exe:
	x86_64-w64-mingw32-g++ --static lam.cpp -o lam.exe --std=c++11

clean:
	rm -rf lam lam.exe

endif
