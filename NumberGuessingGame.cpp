#include<iostream>
#include<time.h>
using namespace std;


int main()
{
    int n,u,i=0;
    srand(time(0));
    n=rand()%100;
    cout<<"Guess a number between 0 to 99"<<endl;
    cin>>u;
    while(1){
        i++;
        if(u==n){
            cout<<endl<<"U guessed the number in "<<i<<" turns"<<endl;
            break;
        }
        else if(u<n){
            cout<<"Guess a larger number"<<endl;
            cin>>u;
        }
        else{
            cout<<"Guess a smaller number"<<endl;
            cin>>u;
        }
    }
    return 0;
}