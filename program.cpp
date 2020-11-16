//файл program.cpp
#include "stdafx.h"
#include <iostream>
#include "funcs.h"
using namespace std;
int main() {
cout << MySum(10, 3) << endl;
cout << MySub(10, 3) << endl;
cout << MyMul(10, 3) << endl;
cout << MyDiv(10, 3) << endl;
cout << MyPow(10, 3) << endl;
system("pause");
return 0;
}