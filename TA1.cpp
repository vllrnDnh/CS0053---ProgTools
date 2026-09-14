#include <iostream>
#include <string>
using namespace std;

double calc(double a,double b,double c){
    double x=(a+b+c)/3;
    return x;
}

void show(string n,double x){
    cout<<"-----------------------------"<<endl;
    cout<<"Student: "<<n<<endl;
    cout<<"Average: "<<x<<endl;

    if(x>=75){
        cout<<"Result: PASSED"<<endl;
    }else{
        cout<<"Result: FAILED"<<endl;
    }
    cout<<"-----------------------------"<<endl;
}  

int main(){
    string n;
    double a, b, c;
    char again='y';

    while(again=='y'){
        cout<<"Enter student name: ";
        getline(cin,n);

        cout<<"Enter score 1: ";
        cin>>a;
        cout<<"Enter score 2: ";
        cin>>b;
        cout<<"Enter score 3: ";
        cin>>c;

        double x=calc(a,b,c);

        show(n,x);

        cout<<"Process another student? (y/n): ";
        cin>>again;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    return 0;
}