#include <iostream>
using namespace std;

int getBoxPoints(char boxColor);
int streakPoints(char previous,char current,int streak,int point);
int CalculateBoxPoints(char myBox[10]);


int main() 
{
  char myBox[8] = {'R','R','R','R','R','X','X','X'};
  int score;
  score = CalculateBoxPoints(myBox);
  cout<<"Your Score Is "<<score<<endl;
  
}

int getBoxPoints(char boxColor)
{
  if(boxColor=='R')
  {
    return 10;
  }
  else if(boxColor=='B')
  {
    return 20;
  }
  else
  {
    return 0;
  }
}

int getStreakPoints(char previous,char current,int streak,int point)
{
  if(previous==current)
  {
    return streak*point;
  }
  else
  {
    return 0;
  }
}

int CalculateBoxPoints(char myBox[7])
{ 

  int totalScore = 0, score = 0, streak=1,streakPoint=0;
  
  for(int i=0;i<8;i++)
  {
     score = getBoxPoints(myBox[i]);
     totalScore = totalScore + score;  
     if(i>0)
     {
       streakPoint = getStreakPoints(myBox[i-1],myBox[i],streak,score);
       if(streakPoint==0)
       {
         streak = 1;
       }
       else
       {
         streak++;
       }
     }
     totalScore = totalScore + streakPoint;
  }
  return totalScore;

}
//Assignment 1 - Streak
//** Watch the video till end or else you won't understand the question well **

//*For a given input  string of boxes say box[] = R,R,R,B,R,X,M to your code
//- The points be as R gives 10 points and B gives 20 points and anything else gives 0 points
///- So total Score is 50 as 3R that amounts to 30 and 1B amounts upto a 20 hence 40 +20 = 60 and 50+0+0 as 0 for X,M  so total is 60

//*Now you need to code a streak wherein if say ElementA comes after ElementA Score for such Streak gets a Point Bonus.
//Add +10 points for all consecutive ElementA As - 

//- Input -> box[] = R,R,R,B,R,X,M  Output -> Total Score = 90 

/*Explanation as -
- First character in array is R so score is 10
- Second is also R (Red) so now 10 for R and as the previous was R so 10+10 = 20
- Now as third one is also R add another 10 to previous score as 10 + 20(as last two were two as well ) ie. 30
- Now fourth element in array is B so its not R and Streak is Broken so add Score For B which is set as 20
- For Fifth Element we have R but as previous was Blue so no streak bonus and score of R was reset so add 10 now 
- Add 0 for X and M element 
- hence total score is 10+20+30+20+10 = 90
                                     R    R     R    B    R */

// Submission Process - 
// 1. Click "Fork" button at the top of this page if you are using C++ for the assignment
//    (for any other language - refer to the instructions at the top of the page)
// 2. Right your code and test it, make sure it runs as expected 
// 3. Once complete please share  your solution link as the answer to this very question we will review it and get back to you 
//Your solution Repl link (copy the url of your solution and paste it as answer)
// (Note: please do not share with us text/zip files/attachments to showcase your solution)