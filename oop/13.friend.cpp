// friend sebuah keyword yang dnantinya akan membuat funttion bisa mengakses member public atau non public contohnya private

#include <iostream>
#include <string>

using namespace std;

class Arrcer;

class StrongHero
{
private:
    string name;
    double health;

public:
    StrongHero(const char *name)
    {
        this->name = name;
        this->health = 100;
    }

    friend bool compare(const StrongHero &hero1, const Arrcer &hero2);
    // friend bool compare(const Arrcer &hero1, const StrongHero &hero2);
};

class Arrcer
{
private:
    string name;
    double health;

public:
    Arrcer(const char *name)
    {
        this->name = name;
        this->health = 50;
    }

    friend bool compare(const StrongHero &hero1, const Arrcer &hero2);
    // friend bool compare(const Arrcer &hero1, const StrongHero &hero2)
    // // {
    // //     // dan juga bisa di deklarasi di dalam class
    // //     cout << "fungsi ini berkerja di dalam scope " << endl;
    // //     return hero1.health > hero2.health;
    // // }
};

// bisa di deklarasi di luar sini
bool compare(const StrongHero &hero1, const Arrcer &hero2)
{
    cout << "fungsi ini berkerja di global scope " << endl;
    cout << "health hero 1 = " << hero1.health << endl;
    cout << "health hero 2 = " << hero2.health << endl;
    return hero1.health > hero2.health;
}

int main(int argc, char const *argv[])
{
    StrongHero hero1 = StrongHero("bejo");
    Arrcer hero2 = Arrcer("ucup");

    cout << compare(hero1, hero2) << endl;
    // cout << compare(hero2, hero1) << endl;
    return 0;
}
