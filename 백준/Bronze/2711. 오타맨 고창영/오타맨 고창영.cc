#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    int inputs[num] = {};
    string str[num] = {};
    
    for(int i = 0; i < num; i++)
    {
        cin >> inputs[i] >> str[i];
    }
    
    for(int i = 0; i < num; i++)
    {
        str[i] = str[i].replace(inputs[i]-1, 1, "");
    }
    
    for(int i = 0; i < num; i++)
    {
        cout << str[i] << endl;
    }
    
    return 0;
}