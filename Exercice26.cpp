/*Quels résultats fournira ce programme*/

#include <iostream>
using namespace std ;
int n=10, q=2 ;
int main()
{
int fct (int) ;
void f (void) ;
int n=0, p=5 ;
n = fct(p) ;
cout << "A : dans main, n = " << n << " p = " << p
<< " q = " << q << "\n" ;
f() ;
}
int fct (int p)
{
int q ;
q = 2 * p + n ;
cout << "B : dans fct, n = " << n << " p = " << p
<< " q = " << q << "\n" ;
return q ;
}
void f (void)
{
int p = q * n ;
cout << "C : dans f, n = " << n << " p = " << p
<< " q = " << q << "\n" ;
}

/*Résultat :
B : dans fct, n = 10 p = 5 q = 20
A : dans main, n = 20 p = 5 q = 2
C : dans f, n = 10 p = 20 q = 2


=== Code Execution Successful ===
*/
