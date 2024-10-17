#include <iostream>
using namespace std;

 struct employee
{
    int eId;
    string name;
    float salary;
    // string favColors[];
} ;

int main()
{
    struct  employee rahman; // structure ref
    // assign values to employee rahman
    rahman.eId = 101;
    rahman.name = "rahman khan";
    rahman.salary = 7865.09f;
    // rahman.favColors = {"white", "black", "red"};

    //access values of employee rahman
    cout<<"emp id:"<<rahman.eId<<"\n"<<"emp name:"<<rahman.name<<"\n"<<"emp salary:"<<rahman.salary<<"\n";
    // int size=sizeof(rahman.favColors)/sizeof(rahman.favColors[0]);
  
    

    return 0;
}
