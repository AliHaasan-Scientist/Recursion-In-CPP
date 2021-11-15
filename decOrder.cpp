#include <iostream>
using namespace std;
void decOrder(int n)
{
    if (n == 0)
    {

        return;
    }

    cout << n << endl;
    decOrder(n - 1);
}
//
void incOrder(int n)
{
    if (n == 0)
    {

        return;
    }

    incOrder(n - 1);
    cout << n << endl;
}
int main(int argc, char const *argv[])
{
    decOrder(5);
    incOrder(5);
    return 0;
}
