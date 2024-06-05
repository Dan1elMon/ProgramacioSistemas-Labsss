#include <bits/stdc++.h>
using namespace std;
void imprimirtodaslascadenasgrabadas(char set[], string prefix, int n, int k)
{
    if (k==0)
    {
    cout << (prefix) << endl;
    return;
    }
    for (int i = 0; i < n; i ++)
    {
    string newPrefix;
    newPrefix = prefix + set[i];

    imprimirtodaslascadenasgrabadas(set, newPrefix, n, k - 1);
    }
}
void imprimirtodaslascadenas(char set[], int k, int n)
{
    imprimirtodaslascadenasgrabadas(set, "", n, k);
}
int main()
{
    cout << "primera prueba" << endl;
    char set1[] = {'a', 'b'};
    int k =3;
    imprimirtodaslascadenas(set1, k, 2);
}