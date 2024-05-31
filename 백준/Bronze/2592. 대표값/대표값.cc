#include <iostream>
using namespace std;

int main()
{
    int num[10] = {};
    int count[1000] = {};
    int total = 0, max = 0, result = 0;
    
    for(int i = 0; i < 10; i++)
    {
        cin >> num[i];
        total += num[i];
        count[num[i] - 1]++;
    }
    
    for(int i = 0; i < 1000; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            result = i + 1;
        }
    }
    
    cout << total / 10 << endl; 
    cout << result << endl;
    
    return 0;
}