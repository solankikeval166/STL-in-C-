#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 4> a;

    a.fill(1); // fill 1 to all index

    cout << "array fill function-> ";

    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    a[0] = 1;
    a[1] = 3;
    a[2] = 4;
    a[3] = 2;

    cout << "Array 'at' function-> " << a.at(2) << endl;
    cout << "Before sorting->";

    for (auto i : a)
    {
        cout << " " << i;
    }

    cout << endl;

    sort(a.begin(), a.end());

    cout << "After sorting->";

    for (auto i : a)
    {
        cout << " " << i;
    }

    cout << endl;
    cout << "Maximum Element-> " << *max_element(a.begin(), a.end()) << endl;
    cout << "Minimum Element-> " << *min_element(a.begin(), a.end()) << endl;

    return 0;
}