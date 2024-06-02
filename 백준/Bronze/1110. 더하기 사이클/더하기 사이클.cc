#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int count = 0;
	int bp;
	
	cin >> a;
	
	bp = a;
	
	while(true)
	{
		b = a / 10;
		c = a % 10;
		a = c*10 + ((b+c)%10);
		
		count++;
		
		if(a == bp)
			break;
	}
	
	cout << count;
	
	return 0;
}