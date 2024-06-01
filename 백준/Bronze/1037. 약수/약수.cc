#include <iostream>

using namespace std;

int main()
{
    int num, min, max;
    
    cin >> num;
    
    int divisor[num] = {};
    
    for(int i = 0; i < num; i++)
    {
        cin >> divisor[i];
    }
    
    min = divisor[0];
    max = divisor[0];
    
    for(int i = 0; i < num; i++)
    {
        if(min > divisor[i])
            min = divisor[i];
        
        if(max < divisor[i])
            max = divisor[i];
    }
    
    cout << min*max << endl;
    
    return 0;
}