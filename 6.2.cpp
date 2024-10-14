#include <iostream>
#include <iomanip>
using namespace std;
// пошук мінімального елемента починаючи з позиції i – це
// визначається початковими значеннями параметрів min, imin, j
void Min(int* a, const int size, int &max, int &imax, int j)
{
    if (max<a[j])
    {
        max = a[j];
        imax = j;
    }
    if (j<size-1)
    Min(a, size, max, imax, j+1);
}
void Sort(int* a, const int size, int i) // i - параметр зовнішнього циклу
{
    int max = a[i];
    int imax = i;
    Min(a, size, max, imax, i + 1);

    // Виконуємо обмін значеннями
    int temp = a[i];
    a[i] = a[imax];
    a[imax] = temp;

    // Рекурсія продовжується
    if (i < size - 2)
        Sort(a, size, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i<size-1)
        Print(a, size, i+1);
    else
        cout << endl;
}
int main()
{
    const int n=5;
    int a[n] = {9, 3, 7, 5, 8};
    Print(a, n, 0);
    Sort(a, n, 0);
    Print(a, n, 0);
    return 0;
}