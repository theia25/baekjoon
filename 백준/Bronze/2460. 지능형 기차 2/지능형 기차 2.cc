#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int total = 0, max = 0;;
    
    for(int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        total += (-a + b);
        
        if(total > max)
        {
        	max = total;
		}
    }
    
    cout << max << endl;
    
    return 0;
}
