#include <iostream>
using namespace std;
int main()
{
    int i, num;
    cout << "enter any number you want to print table;" << endl;
    cin >> num;
    for (i = 1; i <= 10; i++)
    {
        cout << num << "*" << i << " = " << num * i << endl;
    }
    return 0;
}