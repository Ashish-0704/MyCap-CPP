#include <iostream>
using namespace std;

int main()
{
    int age,ch;
    cout<<"Enter your age";
    cin>>age;
    if(age < 18)
    {
        cout<<"\nYou are not yet eligible to cast your vote";
    }
    else
    {
        cout<<"\nEnter your choice whom you want to vote";
        cout<<"\n1: A";
        cout<<"\n2: B";
        cout<<"\n3: C";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"\nYou have voted for A";
                    break;
            case 2: cout<<"\nYou have voted for B";
                    break;
            case 3: cout<<"\nYou have voted for C";
                    break;
            default: cout<<"\nInvalid choice";
                    break;
        }
    }
    return 0;
}