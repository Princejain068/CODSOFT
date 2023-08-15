#include<bits/stdc++.h>
using namespace std;

double add(double a,double b){
    return a+b;
}
double subtraction(double a,double b){
    return a-b;
}
double mutiply(double a,double b){
    return a*b;
}
double divide(double a,double b){
    return a/b;
}



int main(){
    cout<<"----------CALCULATOR------------"<<endl;
    double a,b;

    while (true)
    {
        cout<<"1.ADD\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
        int choice;
        cin>>choice;
        if(choice==5){
            cout<<"Thanks for using calculator";
            exit(0);
        }
        else{
            cout<<"Enter two Number : ";
            cin>>a>>b;
        }
        switch (choice)
        {
        case 1:
            cout<<add(a,b)<<endl;;
            break;
        case 2:
            cout<<subtraction(a,b)<<endl;
            break;
        case 3:
            cout<<mutiply(a,b)<<endl;
            break;
        case 4:
            cout<<divide(a,b)<<endl;
            break;
        default:
            cout<<"Enter wrong input. Try again.";
            break;
        }
    }
    
    return 0;
}