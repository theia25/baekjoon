#include <iostream>

using namespace std;

int Rev(int x)
{
    int sum = 0;
    
    while(x != 0)
    {
        sum = sum*10 + x%10;
        x /= 10;
    }
    
    return sum;
}

int main()
{
    int x, y;
    
    cin >> x >> y;
    
    cout << Rev(Rev(x) + Rev(y)) << endl;
    
    return 0;
}