#include <iostream>

using namespace std;
 
int main()
{
    int iChoise= 0;//переменная отвечающая за ввод пользователя
    bool bWork = true;//флаг продолжения работы алгоритма
    while( bWork )
    {
        cout<<"\tMENU"<<endl;
        cout<<"1 - Item1"<<endl;
        cout<<"2 - Item2"<<endl;
        cout<<"0 - Exit"<<endl;
        cout<<"Your choise : ";
        if(!(cin>>iChoise) || cin.get() != '\n') 
        {
            cout<<"Incorrect input!"<<endl;
            cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
            cin.sync();//Удалим данные из буффера
        }
        else
        {
            switch(iChoise)
            {
            case 1:
                cout<<"Run Item1"<<endl;
                break;
            case 2:
                cout<<"Run Item2"<<endl;
                break;
            case 0:
                bWork = false;
                break;
            default:
                cout<<"Unsupperted choise"<<endl;
                break;
            }
        }
    }
    return 0;
}
