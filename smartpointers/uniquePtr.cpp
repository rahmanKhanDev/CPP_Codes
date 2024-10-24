#include <iostream>
#include <memory>
using namespace std;

int main()
{

    unique_ptr<int> ptr1 = make_unique<int>(50);
    cout << "Unique pointer value is:" << *ptr1 << endl;

    return 0;
}