#include <iostream>
#include <string>
using namespace std;

class Hero
{
private:
    string name;
    double health;
    double power;

public:
    Hero(const char *name = "player", double health = 10)
    {
        this->name = name;
        this->health = health;
    }
    // Hero(const char *name = "player", double health = 10, double power)
    // {
    //     this->name = name;
    //     this->health = health;
    //     this->power = power;
    // }
    void display()
    {
        cout << "\nNama player " << this->name << endl;
        cout << "Health " << this->health << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero *hero1 = new Hero("bejo", 20);
    hero1->display();
    Hero hero2 = Hero();
    hero2.display();
    Hero *hero3 = new Hero("otong");
    hero3->display();
    return 0;
}
