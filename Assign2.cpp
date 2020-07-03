#include<iostream>

using namespace std;

class Player
{ 
    private:
    int score, health, attackPower;
    
    protected:

    bool isAlive()
    {
      if(health>0)
         return true;

       return false;

    }
    public:
    void damage(int damage)
    {
        if(isAlive())
        {
            health = health - damage;
            cout<<"Player's current health is :"<<health<<endl;
        }
        else
        {
            cout<<"Player is dead";
        }
        
    }
    
};

class HighHealthPlayer : public Player
{
  int health = 1000;
  int attackPower = 25;
  
};

class MediumHealthPlayer : public Player
{
   int health = 700;
   int attackPower = 50;

};

class LowHealthPlayer : public Player
{
   int health = 400;
   int attackPower = 100;
};

int main()
{
    LowHealthPlayer player1;
    player1.damage(10);
    return 0;
}