//Re-write and clean up the test code, this will be our final file
//also:
//(libary)
//(global vars)
//(function and struct declration)
//(main)
//(function and struct intialization)
// we gonna make docs for each thing, so it will much better if we liveshare to do the rewrite -t1ar

#include <iostream> //basic io for terminal
#include <fstream> //file handling for write/read
#include <string> // TODO : i forgot what string for, pls write 
using namespace std;

//global variables
const int MAX = 9;
int Wallet = 20000;    //buyer's wallet
int Money, pilihan;   // Mr. Krabs : Money! | global var 
string Nama_Item, Jumlah, Harga;
struct structItem { 
    string Nama;
    int Jumlah;
    int Harga;
} Item[MAX], Storage[MAX];

//Function declarations
void BuyStock();
void Restock();
void Beli();
void StockView();
void Pilih();
void Menu();
void read();

//main program
int main() {
    ifstream profit ("Profit.txt"), 
    stock ("Stock.txt"), 
    warehouse ("Storage.txt"); // initialize data from file, Money for profit, structItem for stock,
    
    profit >> Money; //get the line for MONEYYYYYY
    profit.close();
    read(Item, stock);
    stock.close();
    read(Storage, warehouse);
    warehouse.close();
    
    Menu();
    cout << "\nGoodbye!\n"; 
}

//TODO : complete all function definitions below
//Should we reorder the functions?
