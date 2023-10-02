#include <iostream>
#include <cstdlib>
using namespace std;
unsigned long long kdaodjajfgian(int n)

{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n* kdaodjajfgian(n-1);
    }
}


int main(){
    int n;
    cout << "Masukan nilai faktor yang dicari ";
    cin >> n;
    cout << "Faktorial dari " << n << " = " << kdaodjajfgian(n) << '\n';
    
    return 0;
}
