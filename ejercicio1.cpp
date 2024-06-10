#include <iostream>
using namespace std;

int fact( int n);

int main (void)
{
    int n, res;
    cout << " Ingrese un numero entero " << "\n";
    cin >> n;

    cout << " El factorial de " << n << " es " << fact (n) << "\n";

    return 0;

}

int fact (int n)
{
    int res;
    if (n== 0)
    {
      cout << " El numero ingresado no es valido " << "\n";
    }

    else 
    {   res=1;
        for (int i =1; i <= n; i++)
        {
            res=res*i;
        }
    }
    return res;
}