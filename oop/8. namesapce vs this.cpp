#include <iostream>
#include <string>

using namespace std;

// data member
class ClassType
{
public:
    string dataStr;
    double dataDouble;

    // membuat variabel member dari class dengan menambahkan m_ di awal nama variabel untuk membedakan
    double m_dataDouble;

    // constructor
    ClassType(const char *dataStr, double dataDouble)
    {
        // dengan menggunakan namespace dari class
        ClassType::dataStr = dataStr;

        // dengan menggunakan "this" [berlaku pada objek heap]
        // this sebenarnya hanya pointer saja
        cout << this << endl;

        // bisa juga di gunakan untuk mengakses variabel member dari class tersebut
        this->dataDouble = dataDouble;

        // bisa juga menggunakan cariabel member
        m_dataDouble = dataDouble;
    }

    ~ClassType()
    {
        cout << "\n"
             << this->dataStr << " di hapus" << endl;
    }
};

// member function
class player
{
public:
    string name;
    double power;
    int health;

    player(const char *name, double power)
    {
        // menggunkan namespace
        player::setName(name);

        // menggunakan this
        this->setPower(power);
    }

    void setName(const char *name)
    {
        this->name = name;
    }

    void setPower(double power)
    {
        this->power = power;
    }

    // prototipe member function
    void setHealth(int);

    ~player()
    {
        cout << "\n"
             << this->name << " di hapus" << endl;
    }
};

// function member prototipe
void player::setHealth(int health)
{
    this->health = health;
}

int main(int argc, char const *argv[])
{
    ClassType stack("stack", 0.5);
    ClassType *heap = new ClassType("heap", 0.5);

    // ketika di print maka pada objek stack akan eror
    // cout << stack << endl;
    cout << heap->dataStr << endl;
    cout << heap->dataDouble << endl;
    cout << heap->m_dataDouble << endl;
    cout << "---- \n"
         << endl;

    // member function
    player *player1 = new player("ucup", 100);
    cout << player1->name << endl;
    cout << player1->power << endl;
    player1->setHealth(200);
    cout << player1->health << endl;

    delete heap;
    delete player1;
    return 0;
}
