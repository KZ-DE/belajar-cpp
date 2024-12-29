#include <iostream>
#include <string>

using namespace std;

// deklarasi class
class Player
{
private:
    string name;

public:
    // delkarasi method prototipe
    Player(const char *name);

    // contoh bukan bentuk prototipe
    void display()
    {
        cout << "nama player = " << this->name << endl;
    }

    string getName();

    ~Player();
};

// penjabaran method dari prototipe
Player::Player(const char *name)
{
    this->name = name;
}
string Player::getName()
{
    return this->name;
}
Player::~Player()
{
    cout << this->name << " telah di hapus" << endl;
}

int main(int argc, char const *argv[])
{
    Player *Player1 = new Player("Bejo");
    Player1->display();
    cout << "get name = " << Player1->getName() << endl;
    delete Player1;
    return 0;
}
