using namespace std;
#include <iostream>
//Watermelon

int main()
{
    int w;
    cin >> w;
    if (w > 3 && w <= 100) // 2 is only even number that wont work
    {
        (w % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}