#include <iostream>
#include <string>

using namespace std;

class Hero
{
private:
    string name;

public:
    Hero(const char *name)
    {
        this->name = name;
    }

    void display() const // menambahkan "const" pada fungsi agar dapat di gunakan pada objek yang bertipe const maupun non const
    {
        cout << "player name " << this->name << endl;
    }

    void setName(const char *name) // untuk setter tidak bisa di tambahkan "const" sehingga hanya di gunakan untuk objek non const
    {
        this->name = name;
    }

    string getName() const
    {
        return this->name;
    }
};

int main(int argc, char const *argv[])
{
    Hero *player = new Hero("ucup");
    player->display();

    const Hero *player1 = new Hero("Dedi"); // menggunakan objek constant
    player1->display();

    player->setName("bejo");
    player->display();

    cout << "player utama name " << player->getName() << endl;
    cout << "player1 name " << player1->getName() << endl;

    // kesimpulan
    /*
    1.jika objeknya non const maka semua member funttion bisa di panggil
    2.sedangkan jika objeknya conts hanya bisa memanggil member funttion yang bertipe const yang bisa di panggil
    */
    return 0;
}
