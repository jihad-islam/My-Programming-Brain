#include <bits/stdc++.h>
using namespace std;
int main()
{
     string a = "HelloWorld";

     // a.erase()
     a.erase(4); // 4 no index er por ja ase shob delete kore dibe. 1 holo first index
     cout << a << endl
          << endl;

     a.erase(4, 3); // ekahne bole ditesi 4 no index er por 3 ta character delete korbo. koma diye kichu na bolle 4 no index er por ja ase shob delete korbe.
     cout << a << endl
          << endl;

     // a.replace()
     a.replace(4, 3, "_jihad_"); // 4 no index er por 3 ta character muche dibe and oi jaygay _jihad_ replace korbe.
     cout << a << endl
          << endl;

     a.replace(4, 0, "_jihad_"); // 4 no index e 'o' ase. 0 deway 4 no index e _jihad_ print korse then 4 no index er 'o' ke _jihad_ er pore pathay dise.
     cout << a << endl
          << endl;

     // a.replace()
     a.insert(5, "_jihad_"); // ami hello and world er majhe amar nam dekhte chai. hello sesh hoise index 4 e. amar nam index 5 theke print hobe. tai paranthesese 5 disi.

     cout << a << endl
          << endl;

     return 0;
}