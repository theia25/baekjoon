#include <iostream>

int main()
{
    int A, B;
    int a1, a2, a3;
    int b1, b2, b3;
    int output;

    std::cin >> A;
    std::cin >> B;

    a1 = A / 100;
    a2 = (A-a1*100) / 10;
    a3 = (A-a1*100-a2*10);
    A = a3*100+a2*10+a1;

    b1 = B / 100;
    b2 = (B-b1*100) / 10;
    b3 = (B-b1*100-b2*10);
    B = b3*100+b2*10+b1;

    output = (A > B ) ? A : B;

    std::cout << output;
    
    return 0;
}
