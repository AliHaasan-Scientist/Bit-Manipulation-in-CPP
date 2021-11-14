#include <iostream>
using namespace std;
int checkPower(int n)
{
    return (n & !(n & n - 1));
}
int main(int argc, char const *argv[])
{
    cout << checkPower(3);

    return 0;
}
