#include <iostream>

using namespace std;

int main(){
	int N;
	cin >>N;
	int cnt=0; int com=0;
	if (N % 5 == 0)
        cout << N / 5;
    else if (N % 5 != 0 && N % 3 == 0)
    {
        com = N / 3;
        while (N >= 3)
        {
            N -= 3;
            cnt++;
            if (N % 5 == 0)
            {
                cnt += N / 5;
                N %= 5;
            }
        }
        if (N != 0) { cnt = 0; }
        if (cnt != 0)
        {
            cout << (com > cnt ? cnt : com);
        }
    }
    else if (N % 5 != 0 && N % 3 != 0)
    {
        while (N >= 3)
        {
            N -= 3;
            cnt++;
            if (N % 5 == 0)
            {
                cnt += N / 5;
                N %= 5;
            }
        }
        if (N != 0)
            cout << "-1" << '\n';	
        else
            cout << cnt << '\n';
    }
    else
    cout << "-1" << '\n';
}       


