#include<iostream>

using namespace std;

void getBoxScore(char box);

void printScore(char check);


void main()
{
  char box;
  cout<<"Enter The Box ";
  cin>>box;
  getBoxScore(box);

  
}

void getBoxScore(char box)
{
  // if box is red
  if(box=='r')
  {
    printScore('r');
  }
  // if box is blue
  else if(box=='b')
  {
    printScore('b');
  }
}

void printScore(char check)
{ 
  int score=0;
  if(check=='r')
  {
    score=10;;
  }
  else if(check=='b')
  {
    score=20;
  }
  else 
  {
    score=0;
  }
  cout<<"Your score is "<<score;

}