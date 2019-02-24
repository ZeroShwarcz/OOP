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
        double sqrt=0;
        std::cout<<"Введите число, корень которого хотите вычислить: ";
        std::cin>>sqrt;
        std::cout<<"Корень = "<< my_sqrt(sqrt)<<std::endl;
        return 0;
}
