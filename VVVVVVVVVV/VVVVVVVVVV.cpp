#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, V, S1, S2; // a - длина ребра, V - объём, S1 - площадь поверхности, S2 - боковая площадь
    cout << "Input lenght of enge\n";
    cin >> a;
    V = pow(a, 3);
    cout << "V = " << V << endl;
    S1 = 6 * pow(a, 2);
    cout << "Surface area = " << S1 << endl;
    S2 = 4 * pow(a, 2);
    cout << "Side area = " << S2 << endl;
    return 0;
}
