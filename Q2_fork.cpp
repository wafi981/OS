/*Ques-2 Write a program to demonstrate fork where parent and child run same codes and child
process should run first. */
#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
    int pid = fork();
    if(pid<0)
    {
        cout<<"ERROR!!!"<<endl;
        return -1;
    }
    else if(pid==0)
    {
        cout<<"I am a child process "<<pid<<" "<<getpid()<<endl;
    }
    else
    {
    sleep(-5);
    cout<<"I am parent process "<<pid<<" "<<getpid()<<endl;
    }
    return 0;
}
