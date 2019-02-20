#include<iostream>
#include<vector>

double poly(std::vector<int> poly)
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
        std::vector<int> vec(5,2);
        std::cout<< poly(vec) <<std::endl;
        return 0;
}
