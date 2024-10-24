// tuples are used to store multiple datat types at once

#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    // creating a tuple
    tuple<int, float, string> data(101, 567.98, "Rahman");
    //acess tuple data
    cout<<get<0>(data)<<endl;
    cout<<get<1>(data)<<endl;
    cout<<get<2>(data)<<endl;

    return 0;

}