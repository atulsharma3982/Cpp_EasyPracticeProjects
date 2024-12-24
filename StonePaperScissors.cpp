#include<iostream>
#include<time.h>
using namespace std;


int main()
{
    int n,flag=1,x,c1=0,u1=0;
    char c,u;
    cout<<"'R' for rock"<<endl<<"'P' for paper"<<endl<<"'S' for scissors"<<endl;
    cout<<"What will be the winning score??"<<endl;
    cin>>x;
    while(flag){
        srand(time(0));
        n=rand()%10;
        if(n<3) c='R';
        else if(n<7) c='P';
        else c='S';
        cout<<"Choose your move: "<<endl;
        cin>>u;
        switch(u){
            case 'R':
                if(c=='R'){
                    cout<<"Draw"<<endl;
                }
                else if(c=='P'){
                    cout<<"You Lose"<<endl;
                    c1++;
                }
                else{
                    cout<<"You Win"<<endl;
                    u1++;
                }
                break;
            case 'P':
                if(c=='P'){
                    cout<<"Draw"<<endl;
                }
                else if(c=='S'){
                    cout<<"You Lose"<<endl;
                    c1++;
                }
                else{
                    cout<<"You Win"<<endl;
                    u1++;
                }
                break;
            case 'S':
                if(c=='S'){
                    cout<<"Draw"<<endl;
                }
                else if(c=='R'){
                    cout<<"You Lose"<<endl;
                    c1++;
                }
                else{
                    cout<<"You Win"<<endl;
                    u1++;
                }
                break;
        }
        if(c1==x||u1==x){
            cout<<"Game Over"<<endl<<endl;
            break;
        }
    }
    if(c1==x){
        cout<<"Computer beat u with score: "<<c1<<"-"<<u1<<endl;
    }
    else if(u1==x){
        cout<<"You beat computer with score: "<<u1<<"-"<<c1<<endl;
    }
    return 0;
}