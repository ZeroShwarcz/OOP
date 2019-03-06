#include<iostream>
#include <limits>
#include <iomanip>

using namespace std;

long double buff = 0.0;

long double my_sqrt(long double a)
{
        if(a==0 || a==1)
                return a;
        long double  x = 20.0;
        for(int i = 0; i<100000; ++i)
{
            x=0.5*(x+a/x);
            if(x == buff)
                return x;
            buff = x;

            cout << x << "\n********************************\n" << buff << endl;
}
        return 0;
}

int main()
{
        long double sqrt;
        cout<<"Введите число, корень которого хотите вычислить: ";
        while (!(cin>>sqrt) || cin.get()!='\n')
        {
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cout<<"что-то пошло не так!!! \nповторите ввод: ";
        }
        if(sqrt > 0)
            cout<<"Корень = "<< my_sqrt(sqrt)<<endl;
        else cout << "Нет корней из отрицательного числа" << endl;


        return 0;
}

