#include <iostream>
#include <cstdlib>
using namespace std;

double Add(double a, double b)
{
    return a + b;
}

double Diff(double a, double b)
{
    return a - b;
}

double Mul(double a, double b)
{
    return a * b;
}

double Div(double a, double b)
{
    if (a == 0 || b == 0)
        return 1;
    else
        return a / b;
}

double Degr(double a, double b)
{
    return pow(a,b);
}

double Area(double a, double b)
{
    if (a <= 0 || b <= 0)
        return 1;
    else
        return a * b;
}

double Hypotenuse(double a, double b)
{
    if (a <= 0 || b <= 0)
        return 1;
    else
        return sqrt(Degr(a, 2) + Degr(b, 2));

}

int main()
{
    system("title = Eazy Calculator(Professional Edition)");
    int a;
    int b;
    char op;
    
    cout << "^ - Exponentiation\n";
    cout << "s - Find area of a square or rectangle\n";
    cout << "h - Find the hypotenuse of a right triangle(Pythagorean theorem)\n\n";

    cout << "Enter a: ";
    cin >> a;
    if (cin.fail()) {
        cout << "Error type!!!\n";
        return 1;
    }
    else {

        cout << "Enter b: ";
        cin >> b;
        if (cin.fail()){
            cout << "Error type!!!\n";
            return 1;
        }
        else {
            cout << "Enter operation(+, -, *, /, ^, s, h): ";
            cin >> op;

            if (op == '+')
                cout << "Result: " << Add(a, b) << endl;

            else if (op == '-')
                cout << "Result: " << Diff(a, b) << endl;

            else if (op == '*')
                cout << "Result: " << Mul(a, b) << endl;

            else if (op == '/') {
                if (Div(a, b) == 1)
                    cout << "Divide by zero!!!\n";
                else
                    cout << "Result: " << Div(a, b) << endl;
            }

            else if (op == '^')
                cout << "Result: " << Degr(a, b) << endl;

            else if (op == 's') {
                if (Area(a, b) == 1)
                    cout << "Side is less than or equal to 0!!!\n";
                else
                    cout << "Result: " << Mul(a, b) << endl;
            }

            else if (op == 'h')
                if (Area(a, b) == 1)
                    cout << "Side is less than or equal to 0!!!\n";
                else
                    cout << "Result: " << Hypotenuse(a, b) << endl;
            else
                cout << "Unknown operation!!!\n";
        }
    }

    system("pause");
}
