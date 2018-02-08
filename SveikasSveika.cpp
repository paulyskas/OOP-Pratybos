#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::string;

//Paulius Pocius ISI

int main()
{

    string vardas{};
    string sveikas{};
    string visas{};
    const auto k = 5;



    cout << "Iveskit savo varda\n";
    cin >> vardas;
    cout << vardas << "\n";
    char kas = vardas.back();

    if( kas == 's') sveikas ="* Sveikas, ";
    else sveikas="* Sveika, ";

    visas = sveikas+vardas+"! *";

    int t{visas.length()};

    for (int m = 0; m < k; m++ )
    {
        if( m  == 0 || m == 4)
        {
            for( int i = 0; i < t; i++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        if ( m == 1 || m == 3)
        {
            cout << "*";
            for( int i = 0; i < t-2; i++)
            {
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }

        if ( m == 2) cout << visas <<"\n";
    }




    return 0;
}



