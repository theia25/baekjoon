#include <bits/stdc++.h>

using namespace std;

int S, P, Result = 0, CheckSecret = 0;
string A;
int checkArr[4];
int curArr[4];

void Add(char c);
void Remove(char c);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> S >> P;
    cin >> A;
    for(int i = 0; i < 4; ++i)
    {
        cin >> checkArr[i];
        
        // 비밀번호 개수와 같은 경우에만 카운트를 증가시킴
        if(0 == checkArr[i])
            ++CheckSecret;
    }
    
    for(int i = 0; i < P; ++i)
    {
        Add(A[i]);
    }
    
    if(4 == CheckSecret)
        ++Result;
    
    for(int i = P; i < S; ++i)
    {
        int j = i - P;
        Remove(A[j]);
        Add(A[i]);
        
        if(4 == CheckSecret)
            ++Result;
    
    }
    
    cout << Result << '\n';
    
    return 0;
}

void Add(char c)
{
    switch(c)
    {
        case 'A':
            ++curArr[0];
            if(checkArr[0] == curArr[0])
            {
                ++CheckSecret;
            }
            break;
        case 'C':
            ++curArr[1];
            if(checkArr[1] == curArr[1])
            {
                ++CheckSecret;
            }
            break;
       case 'G':
            ++curArr[2];
            if(checkArr[2] == curArr[2])
            {
                ++CheckSecret;
            }
            break;
        case 'T':
            ++curArr[3];
            if(checkArr[3] == curArr[3])
            {
                ++CheckSecret;
            }
            break;
    }
    
}

void Remove(char c)
{
    switch(c)
    {
        case 'A':
            if(checkArr[0] == curArr[0])
            {
                --CheckSecret;
            }
            --curArr[0];
            break;
        case 'C':
            if(checkArr[1] == curArr[1])
            {
                --CheckSecret;
            }
            --curArr[1];
            break;
       case 'G':
            if(checkArr[2] == curArr[2])
            {
                --CheckSecret;
            }
            --curArr[2];
            break;
        case 'T':
            if(checkArr[3] == curArr[3])
            {
                --CheckSecret;
            }
            --curArr[3];
            break;
    }
}