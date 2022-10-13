#include <iostream>

using namespace std;

int main()
{
    int a=3;

    switch(a){
    case 1:
        cout<<"1 is  stored in a ";
        break;
    case 2:
        cout<<"2 is stored in a";
        break;

    case 3:
        cout<<"3 is stored in a ";
        break;
    default:
        cout<<"none of the value matches";
        break;


    }
    return 0;
}
