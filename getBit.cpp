#include <iostream>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & 1 << pos != 0));
}
// Set Bit
int setBit(int n, int pos)
{
    return ((n | 1 << pos));
}
//Clear Bit
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return ((n & mask));
}
//Update Bit
int updateBit(int n, int pos, int value)

{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | value << pos);
}
//
int main(int argc, char const *argv[])
{

    int result = updateBit(5, 1, 1);
    cout << result;
    return 0;
}
