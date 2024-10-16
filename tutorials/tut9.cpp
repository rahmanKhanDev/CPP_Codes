// control statements
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age"<<endl;
    cin>>age;
    //simple if()
    if(age>=18){
        cout<<"You are eligible to vote"<<endl;
    }
    else{
        cout<<"you are not eligible to vote"<<endl;
    }


    double marks;
    cout<<"Enter marks"<<endl;
    cin>>marks;
// if else ladder
if(marks>=90){
    cout<<"you passed with 'A' grade"<<endl;
}else if(marks>=80&& marks<90){
    cout<<"you passed with 'B' grade"<<endl;
}else if(marks>=70&&marks<80){
    cout<<"you passed with 'C' grade"<<endl;
}else if(marks>=60&& marks<70){
    cout<<"you passed with 'D' grade"<<endl;
}else if(marks>=50&&marks<60){
    cout<<"you passed with 'E' grade"<<endl;
}else{
    cout<<"you failed"<<endl;
}
return 0;
}