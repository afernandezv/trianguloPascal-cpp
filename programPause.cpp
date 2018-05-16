#include <iostream>
#include "programPause.h"

using namespace std;

void programPause(){
    cout << "\nPresione una tecla para continuar . . . " << flush;
    cin.ignore();
    cin.get();
}

