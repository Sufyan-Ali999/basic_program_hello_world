#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter Your Name : ";
    getline (cin,name);
    if (name == "Sufyan Ali")
    {
        cout << "Your Name is Corrected";
    }
    else
    {
        cout << "Your Name is Not Corrected";
    }
    
    return 0;
}