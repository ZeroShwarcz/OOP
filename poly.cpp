#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

double poly(vector<int> poly)
{
    double sum = 0;
    for(int i(0); i<poly.size();i++)
    {
        sum += 1.0/poly[i]*3.0;
    }
    return sum;
}


int main(int argc, char* argv[])
{
    string s="-poly";
    vector <int> vec;
if(argv[1]==s)       //первый флаг
    for (int i(2);i<argc;i++)       //значения после флага
        vec.push_back(atoi(argv[i]));   //пореобразование строки в число
    //for (int i(0);i<vec.size();i++)  //вывод вектора
        cout<<poly(vec)<<endl;

    return 0;
}
