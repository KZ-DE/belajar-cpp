#include <iostream>
#include <string>

using namespace std;

class player{
    public:
        string nama;

        // constructor ( di eksekusi saat objek di buat )
        player(const char* nama){
            player::nama = nama;
            cout << player:: nama << " di buat" << endl;
        }
        // destructor ( akan di eksekusi ketika objek di hapus oleh sistem )
        ~player(){
            cout << player:: nama << " di hapus" << endl;
        }
};

// simualasikan di dalam fungsi
void membatPlayerStack1(){
    player stackplayer("satck player 1");

}

void membuaPlayerHeap1(){
    player* heapPlayer = new player("Heap player 1");
    delete heapPlayer;
}

void membuatPlayerPointer(player* &playerPointer){
    cout << &playerPointer << endl;
    cout << playerPointer << endl;
    player stackplayer("palyer stack pointer");

}

int main(int argc, char const *argv[])
{
    // membatPlayerStack1();
    // {
    //     // objek stack
    //     // kenapa di hapus? karena masuk di dalam kurung kurawal, dan berlaku di semua perintah yang menggunakan kurung kurawal seperti if , while , loop dan fungsi
    //     player stackplayer("satck player");
    //     cout << "test di dalam scope" << endl; // scope adalah yang berada di dalam kurung kurawal
    // }

    // cout << "test di luar scope" << endl;
    // membuaPlayerHeap1();

    // {
    //     // heap objek
    //     // ketika menggunakan heap objek maka dekstructor tidak akan di eksekusi, sehingga constructor saja yang di eksekusi
    //     player* heapPlayer = new player("heap player");

    //     // sedangkan untk menghapus maka menggunakan perintah delete
    //     // hal ini akan menghapus memori heap yang di guankan oleh objek heap tersebut
    //     // intinya setiap membuat new harus di delete
    //     delete heapPlayer;
    // }

    // simulasi memori leak
    cout << "\n memori leak" << endl;

    player* plyaerpointer1;
    membuatPlayerPointer(plyaerpointer1);


    return 0;
}
