#include <cstdlib>
#include <iostream>
#include <unistd.h>

#ifdef _WIN32
#include <conio.h>
#endif

using namespace std;

int main (){

    cout << "Hello, world!" << endl;

    #ifdef __linux

    cout << "Linux" << endl;

    //getchar();
    //sleep(3);
    pause();

    #elif _WIN32

    cout << "Windows" << endl;

    //getchar();
    while (1) if (kbhit()) break; 

    #else

    #endif

    return 0;
}
