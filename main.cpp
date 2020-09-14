#include <iostream>
 
using namespace std;
int main()
{
    int x;
    int y; 
    cout << "VVedite chisla" <<endl;
    cin >> x;
    cin >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << " x=" << x << " y=" << y << endl;
    return 0;
}
