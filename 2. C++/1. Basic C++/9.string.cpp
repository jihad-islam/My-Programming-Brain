#include <iostream>
#include <string>   //for c++
#include <string.h> // for c. string er length ber korte jei library function strlen(a) use kora hoy oita c er library function.
using namespace std;

int main()
{
    int a;
    char s[100];

    cin >> a;
    getchar(); // getchar() jekono input newa character ke delete kore dey. fgets() or cin.getline() input newar aage enter paile r input nibe na. tai enter ta delete kore dewar jonne getchar() use kora hoise.

    // fgets(s, 100, stdin);
    cin.getline(s, 100); // cin.getline() diye c++ e string input  newa hoy. etaw fgets er moto enter input ney.

    cout << a << endl;
    cout << s << endl;

    return 0;
}