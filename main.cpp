#include <iostream>

using namespace std;

class sqrtm
{
private:
    double x = 3.0;
    double sq;
public:

    void calc(double a)
    {
        sq = a;
        for (int i(0); i<100; i++)
        {
            x = 0.5*(x+(sq/x));
        }
    }
    void Print()
    {
        cout << "корень из "<< sq<<" = "<< x<<endl;
    }

};

int main()
{
    sqrtm first;
    int a;
    cout<< "Введите число из которого хотите вычислить корень: ";
    cin >> a;
    first.calc(a);
    first.Print();

    return 0;
}
