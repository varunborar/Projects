#include <iostream>

using namespace std;

enum typePlayer
{
    commonPlayerType,
    tankPlayerType,
    highDamagePlayerType

};


class Player
{
    int health;
    int score;
    int attackPower;
    typePlayer type = commonPlayerType;

public:
    int getType()
    {
        return type;
    }
};

class TankPlayer : public Player
{
    typePlayer type = tankPlayerType;
};

class HighDamagePlayer : public Player
{
    typePlayer type = highDamagePlayerType;
};

void showType(TankPlayer myPlayer)
{
        cout << "Tank Player \n";
}
void showType(HighDamagePlayer myPlayer)
{
     cout << "High Damage Player \n";
}
void showType(Player myPlayer)
{
    cout << "Regular player \n";  
}

// void showType(Player myPlayer)
// {
//     if (myPlayer.getType() == commonPlayerType)
//       cout<<"Common Player"<<endl;
//     else if (myPlayer.getType() == tankPlayerType) 
//       cout<<"Tank Player"<<endl;
//     else
//       cout<<"High Damage Player"<<endl;
     
// }

int main()
{

    TankPlayer p1;
    Player p2;
    HighDamagePlayer p3;

    showType(p1);
    showType(p2);
    showType(p3);

    return 0;
}