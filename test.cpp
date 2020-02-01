#include<iostream>

using namespace std;

int sub(int x, int y)
{
    return x-y;
}
int add(int a, int b)
{
    return a+b;
}
<<<<<<< HEAD
int div(int a, int b)
{
    return a/b;
=======
int multiply(int a,int b)
{
    return a*b;
>>>>>>> 85b00788c057479ea9172afd7241de5c8dbde1de
}
int main() 
{
    cout<<sub(10,2);
    int a=5,b=5;
    cout<<add(a,b)<<endl;
    //Add multiply - Nomaan
<<<<<<< HEAD
    cout<<div(55,5);
=======
    //Nomaan - BRANCH123
    cout<<multiply(a,b);
    //Add divie - Devam
>>>>>>> 85b00788c057479ea9172afd7241de5c8dbde1de
}

