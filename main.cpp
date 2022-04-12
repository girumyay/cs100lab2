
#include "c-echo.h"
using namespace std;

int main(int argv, char** argc) {
    cout << "Count of output: " << count(echo(argv,argc)) << endl;
}

