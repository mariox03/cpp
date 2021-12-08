#include <iostream>
using namespace std;

void nekaFunkcija()
{
    cout << "bilo sta" << endl;
}

void multipl_pozivac()
{
    nekaFunkcija();
    nekaFunkcija();
    nekaFunkcija();
}
int main()
{
    multipl_pozivac();

    return 0;
}