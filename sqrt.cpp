#include<iostream>

double my_sqrt(double a)
{
	      if(a<0) a*=-1;
        if(a==0)
                return a;
        double x = 1.0;
        for(int i(0); i<10; ++i)
                x=0.5*(x+a/x);
        return x;
}

int main()
{
        int sqrt=0.0;
        std::cout<<"Введите число, корень которого хотите вычислить: ";
        while (!(std::cin>>sqrt) || std::cin.get()!='\n')
        {
                std::cout << "Неверное значение" << std::endl;
                std::cin.clear();     //сбрасывает все потоки бита
                std::cin.sync();      //очищает  поток ввода
                std::cout << "Повторите ввод: ";
        }
        std::cout<<"Корень = "<< my_sqrt(sqrt)<<std::endl;
        return 0;
}
