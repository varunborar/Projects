#include<iostream>
#include<stdio.h>
#include<time.h>
#include<dos.h>



using namespace std;


int main()
{
    int counter=0;
    time_t rawTime;
    struct tm *currentTime;  // pointer for time
    char a[100];

    while(counter<60)
    {
      system("cls");
      counter++;

      rawTime = time(NULL);
      currentTime = localtime(&rawTime);
      strftime(a, 100, "%I:%M:%S", currentTime);
      cout<<a<<" ";
 

      strftime(a, 100, "%p", currentTime);
      cout<<a<<endl;

      strftime(a, 100, "%a, %d %b, %Y", currentTime);
      cout<<a<<endl;

      _sleep(1000); 
    }
}

