#include <iostream>
#include "olcNoiseMaker.h"
using namespace std;

int main()
{
    vector <wstring> devices = olcNoiseMaker<short>::Enumerate;
    return 0;
}
