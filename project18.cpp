#include <iostream>
#include<conio.h>>
using namespace std;

int main()
{
    int age;
    int n;
    cout<<" vared kardan aazae khanevade: ";
    cin>>n;
    int sum=0;
    float average;
    char ch;
    for(int i=1;i<=n;i++)
    {
        do{
        cout<<" enter age: ";
        cin>>age;
        }
        while(age<0);
            sum=sum+age;
    }
    average=sum/n;
    cout <<"\n average is:"<<average;
    getch();
}
