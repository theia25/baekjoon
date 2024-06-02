#include <iostream>

using namespace std;

int main()
{
    int score[5][4] = {};
    int cook[5] = {};
    int num[5] = {};
    int best = 0;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> score[i][j];
            cook[i] += score[i][j];
            num[i] += score[i][j];
        }
    }
    
    for(int j = 0; j < 4; j++)
    {
        if(cook[j] > cook[j+1])
        {
            int temp = 0;
            temp = cook[j];
            cook[j] = cook[j+1];
            cook[j+1] = temp;
        }
    }
  
	for(int i = 0; i < 5; i++)
	{
		if(cook[4] == num[i])
			best = i + 1;
		
	}
    
    cout << best << ' ';
	cout << cook[4] << endl;
    
    return 0;
}