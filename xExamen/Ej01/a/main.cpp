#include <iostream>
#include <vector>
#include <cstdlib>   // Para srand y rand
#include <ctime>     // Para time

const int RMAX = 100;

void Usage(const char* prog_name);
void Get_args(int argc, char* argv[], int& n, char& g_i);
void Generate_list(std::vector<int>& a);
void Print_list(const std::vector<int>& a, const char* title);
void Read_list(std::vector<int>& a);
void Odd_even_sort(std::vector<int>& a);

int main(int argc, char* argv[]) {
    int n;
    char g_i;
    std::vector<int> a;

    Get_args(argc, argv, n, g_i);
    a.resize(n);
    
    if (g_i == 'g') {
        Generate_list(a);
        Print_list(a, "Before sort");
    } else {
        Read_list(a);
    }

    Odd_even_sort(a);

    Print_list(a, "After sort");
    
    return 0;
}

/*-----------------------------------------------------------------
 * Function:  Usage
 * Purpose:   Summary of how to run program
 */
void Usage(const char* prog_name) {
    std::cerr << "usage:   " << prog_name << " <n> <g|i>\n";
    std::cerr << "   n:   number of elements in list\n";
    std::cerr << "  'g':  generate list using a random number generator\n";
    std::cerr << "  'i':  user input list\n";
}

/*-----------------------------------------------------------------
 * Function:  Get_args
 * Purpose:   Get and check command line arguments
 * In args:   argc, argv
 * Out args:  n_p, g_i_p
 */
void Get_args(int argc, char* argv[], int& n, char& g_i) {
    if (argc != 3) {
        Usage(argv[0]);
        exit(0);
    }
    n = std::atoi(argv[1]);
    g_i = argv[2][0];

    if (n <= 0 || (g_i != 'g' && g_i != 'i')) {
        Usage(argv[0]);
        exit(0);
    }
}

/*-----------------------------------------------------------------
 * Function:  Generate_list
 * Purpose:   Use random number generator to generate list elements
 * In args:   n
 * Out args:  a
 */
void Generate_list(std::vector<int>& a) {
    std::srand(static_cast<unsigned>(std::time(0)));  // Usar la hora actual como semilla
    for (int& elem : a) {
        elem = std::rand() % RMAX;
    }
}

/*-----------------------------------------------------------------
 * Function:  Print_list
 * Purpose:   Print the elements in the list
 * In args:   a, title
 */
void Print_list(const std::vector<int>& a, const char* title) {
    std::cout << title << ":\n";
    for (int num : a) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
}

/*-----------------------------------------------------------------
 * Function:  Read_list
 * Purpose:   Read elements of list from stdin
 * In args:   a
 */
void Read_list(std::vector<int>& a) {
    std::cout << "Please enter the elements of the list\n";
    for (int& elem : a) {
        if (!(std::cin >> elem)) {
            std::cerr << "Invalid input\n";
            exit(1);
        }
    }
}

/*-----------------------------------------------------------------
 * Function:     Odd_even_sort
 * Purpose:      Sort list using odd-even transposition sort
 * In args:      n
 * In/out args:  a
 */
void Odd_even_sort(std::vector<int>& a) {
    int n = a.size();
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        // Even phase
        for (int i = 1; i < n; i += 2) {
            if (a[i - 1] > a[i]) {
                std::swap(a[i - 1], a[i]);
                sorted = false;
            }
        }
        // Odd phase
        for (int i = 1; i < n - 1; i += 2) {
            if (a[i] > a[i + 1]) {
                std::swap(a[i], a[i + 1]);
                sorted = false;
            }
        }
    }
}
/*
Complejidad algoritmica
Odd_even_sort: Tiempo O(n^2)
Generate_list: Tiempo O(n)
Print_list: Tiempo O(n)
Read_list: Tiempo O(n)
Get_args: Tiempo O(1)
Usage: Tiempo O(1)