#include <iostream>

using namespace std;

void input(int*, int*);
void output(int, int);

int main()
{
    setlocale(LC_ALL, "rus");

    int num1, num2;

    input(&num1,&num2;)
    cout <<"числа: " << num1 << ";" << num2 << endl;

    output(num1, num2);

    return 0;
}
void input(int *a, int*b)
{
    cout << "¬ведите первое число: ";
    cin >> *a;

    cout << "¬ведите второе число: ";
    cin >> *b;
}
void output(int num1, int num2)
{
    cout << "a + b = " << num1 + num2 << end1;
    cout << "a - b = " << num1 - num2 << end1;
    cout << "a * b = " << num1 * num2 << end1;
}
