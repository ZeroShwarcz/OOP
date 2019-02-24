#include<iostream>
#include<cstring>
using namespace std;

bool norm_entr(char *s)
{
        const char *temp = "123456789-.";
        unsigned p_count = 0;

        for(int i(0); i<strlen(s); i++)
        {
        if(i>0 && s[i]=='+') return false;
        if(!strchr(temp,s[i])) return false;
        }
        return true;
}

int main()
{
        const int N = 256;
        char s[N];
        double a;

        cin.getline(s,N);
        while(!norm_entr(s))
        {
                cerr<<"Err\n";
                cin.getline(s,N);
        }

        a = atof(s);

        cout<<"a = "<< a*2<<endl;


}
