// control statements
#include <iostream>
using namespace std;
int main()
{
    // int age;
    // cout << "Enter age" << endl;
    // cin >> age;
    // // simple if()
    // if (age >= 18)
    // {
    //     cout << "You are eligible to vote" << endl;
    // }
    // else
    // {
    //     cout << "you are not eligible to vote" << endl;
    // }

    // double marks;
    // cout << "Enter marks" << endl;
    // cin >> marks;
    // // if else ladder
    // if (marks >= 90)
    // {
    //     cout << "you passed with 'A' grade" << endl;
    // }
    // else if (marks >= 80 && marks < 90)
    // {
    //     cout << "you passed with 'B' grade" << endl;
    // }
    // else if (marks >= 70 && marks < 80)
    // {
    //     cout << "you passed with 'C' grade" << endl;
    // }
    // else if (marks >= 60 && marks < 70)
    // {
    //     cout << "you passed with 'D' grade" << endl;
    // }
    // else if (marks >= 50 && marks < 60)
    // {
    //     cout << "you passed with 'E' grade" << endl;
    // }
    // else
    // {
    //     cout << "you failed" << endl;
    // }

    // switch
    int choice;
    cout << "Enter any number between 1-5" << endl;
    cin >> choice;

    // switch
    switch (choice)
    {
    case 1:
        cout << "you choose:1" << endl;
        break;
    case 2:
        cout << "you choose:2" << endl;
        break;
    case 3:
        cout << "you choose:3" << endl;
        break;
    case 4:
        cout << "you choose:4" << endl;
        break;
    case 5:
        cout << "you choose:5" << endl;
    default:
        cout << "please chose between 1-5 only" << endl;
        break;
    }

// loops
int num;
cout<<"enter a integer:"<<endl;
cin>>num;
cout<<"Table of given number is"<<endl;
for(int i=1;i<=10;i++){
    cout<<num*i<<endl;
}

    return 0;
}