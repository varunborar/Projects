#include <iostream>

using namespace std;

class Player
{
    int health;
    string name;

public:
    //   void SetHealth()
    //   {
    //       health = 100;
    //       cout<<"Health set to "<<health<<" using setHealth Function"<<endl;
    //   }
    Player()
    {
        health = 100;
        name = "Varun";
        cout << "Health of " << name << " set to " << health << " using Default Constructor" << endl;
    }
    Player(int giveMeHealth, string playerName)
    {
        name = playerName;
        health = giveMeHealth;
        cout << "Health of " << name << " set to " << health << " using Custom Constructor" << endl;
    }
};

int main()
{

    Player *playerObject = new Player();
    // playerObject->SetHealth();
    delete playerObject;
    Player *newPlayer = new Player(50, "GhostRider");
    delete newPlayer;
    return 0;
}