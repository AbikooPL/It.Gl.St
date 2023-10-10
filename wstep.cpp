// wstep.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
/*

using namespace std;
int main()
{
    int liczba;
        cout << "Podaj wartosc: ";
        cin >> liczba;
        //cout<< "Wpisaliśmy: "<< liczba<< endl;
        if ((liczba > 0) && (liczba < 21))
        {
            for (int i = 0; i < liczba; i++)
            {
                //cout << i <<endl
                cout << 'A';// "A" = 'A', 0

            }
            cout << endl;

           
        }
        else
            cout << "Przesadziles z wartoscia!:)" << endl;
      
        return 0;

}
*/
/*






*/
using namespace std;
int main()
{
    int liczba;
    cout << "Podaj wartosc:";
    cin >> liczba;
    cout << "Wpisaliśmy: " << liczba << endl;
    if ((liczba > 0) && (liczba < 21))
        for (int i = 0; i < liczba; i++)
        {
            cout << i << endl;
            cout << 'X';
        }



    else
        cout << endl;
       
       




       
      

   









}