#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Función para generar y mostrar permutaciones de los números del 1 a n
void permutaciones(int n) {
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }

    cout << "Permutaciones de los números del 1 al " << n << ":\n";
    do {
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));
}

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de números (n): ";
    cin >> cantidad;

    if (cantidad < 1) {
        cout << "La cantidad debe ser un número entero positivo." << endl;
        return 1;
    }

    permutaciones(cantidad);

    return 0;
}
