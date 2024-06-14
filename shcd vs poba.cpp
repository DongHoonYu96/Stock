

// CPP program to implement log() function
#include <bits/stdc++.h>
using namespace std;

int target_year, money;

double schd(int year, double val) {
    if (year == target_year) {
        return val;
    }

    schd(year+1, (val + money) * 1.08);
}

double gong(int year, double val) {
    if (year == target_year) {
        return val;
    }

    gong(year + 1, (val+ money) * 1.0487);
}
// driver program to test the above function
int main()
{
    cout << fixed;
    cout.precision(2);

    cout << "납입년도 입력 : ";
    cin>>target_year; //납입년도
    cout << "월 납입금액 입력 : ";
    cin >> money; //월 납입금액

    cout << "슈드(8%복리) : " << schd(0, 1) << " + 배당금3.5% : "<< schd(0, 1)*0.035 << "\n";
    cout << "공제회(4.87%복리) : " << gong(0, 1) << "\n";
        
    return 0;
}