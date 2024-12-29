#include <iostream>
#include <string>

using namespace std;

class DenganConstruktor{
    public:
        string data;

        DenganConstruktor(const char* data){
            DenganConstruktor::data = data;
        }

        void show(){
            cout<< "Dengan Construktor " << DenganConstruktor::data << endl;
        }
};

class TanpaConstructor{
    public:
        string data;

        void show(){
            cout<< "Tanpa Construktor" << endl;
        }
};

int main(int argc, char const *argv[])
{
    // memori ada di stack
    // 1. cara membuat objek dengan constructor
    DenganConstruktor objek1("objek1");
    objek1.show();


    // memori ada di heap menggunkan ->
    // 2. dengan heap (*)
    DenganConstruktor* objek2 = new DenganConstruktor("objek2");
    objek2->show();

    // 3. dengan construktor di baris lain
    DenganConstruktor* objek3;
    objek3 = new DenganConstruktor("objek3");
    objek3->show();
    return 0;
}
