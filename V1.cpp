#include <bits/stdc++.h>
using namespace std;


void leap(int year){
    if(year%4==0 && year%100!=0){
        cout<<year<<"  is Leap year\n";
    }
    else{
        cout<<year<<" is not a Leap year\n";
    }
}
void pleap(int y1,int y2){
    cout<<"Leap years are : ";
    while (y1<=y2)
    {
        if (y1 % 4 == 0 && y1 % 100 != 0)
        {
            cout << y1 << " ";
        }
        y1++;
    }
    cout<<endl;
   
}
void Fah(float u){
    float f=u*9/5+32;
    cout<<"The temperature in Fahrenheit is : "<<f<<endl;
}
void Cel(float u){
    float c=((u-32)*5/9);
    cout<<"The temperature in Celcius is : "<<c<<endl;
}
void CI_1(float a, float b, float t)
{
    float C = (a * pow((1 + b / 100), t) - a);
    cout << "The Compound Interest of The amount " << a << " is " << C << endl;
}
void CI_2(float a, float b, float t)
{
    float C = (a * pow((1 + b / 200), 2 * t) - a);
    cout << "The Compound Interest of The amount " << a << " is " << C << endl;
}
void PEven(int n)
{
    int i = 2;
    cout << "Even nos are : ";
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }
}
void POdd(int n)
{
    int i = 1;
    cout << "Odd nos are : ";
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }
}
void SumEven(int n)
{
    int i = 2;
    int sum = 0;
    while (i <= n)
    {

        sum += i;

        i += 2;
    }

    cout << "The Sum of the even numbers is " << sum << endl;
}
void Sum(int n)
{
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "The sum of  the number is : " << sum << endl;
}
void Fib(int y)
{
    int fib1 = 0, fib2 = 1, fibnext;
    cout << "The Fibonacci numbers are: " << fib1 << " " << fib2;
    int i = 1;
    while (i <= y)
    {
        fibnext = fib1 + fib2;
        cout << fibnext << " ";
        int temp = fib2;
        fib1 = temp;
        fib2 = fibnext;
        i++;
    }
}
int Fib2(int y)
{
    int fib1 = 0, fib2 = 1, fibnext;
    // cout<<"The Fibonacci numbers are: "<<fib1<<" " <<fib2;
    int i = 1;

    while (i <= y)
    {
        fibnext = fib1 + fib2;
        //    cout<<fibnext<<" ";

        int temp = fib2;
        fib1 = temp;
        fib2 = fibnext;
        i++;
        if (fibnext == y)
        {
            return i;
        }
    }

    return -1;
}
void Fact(int m)
{

    int fact = 1;
    while (m != 0)
    {
        fact *= m;
        m--;
    }
    cout << "The Factorial oof a number is : " << fact << endl;
}
void isPrime(int m)
{
    cout << "Result: \n";
    bool isprime = true;
    int i = 2;
    while (i < m)
    {
        if (m % i == 0)
        {
            cout << "Non Prime\n";
            isprime = false;
            break;
        }
        i++;
    }
    if (isprime == true)
    {
        cout << "Prime Number\n";
    }
}
void printPrime(int m)
{
    cout << "Prime numbers are: ";
    int i = 2;
    while (i <= m)
    {
        bool prime = 1;
        int j = 2;
        while (j < i)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            j++;
        }
        if (prime == 1)
        {
            cout << i << " ";
        }
        i++;
    }
}
int main()
{
    cout << endl;
    cout << "Welcome to the Mankotia Coding Platform\n";
    while (true)
    {

        cout << "\n1. Print Prime Numbers\n";
        cout << "2. Check whether a number is prime or not\n";
        cout << "3. Factorial of a number\n";
        cout << "4. Fibonacci Number\n";
        cout << "5. Fibonacci Number Index\n";
        cout << "6. Sum of the number\n";
        cout << "7. Sum of the all Even  numbers\n";
        cout << "8. Print   Even  numbers\n";
        cout << "9. Print   Odd  numbers\n";
        cout << "10. Print Compound Interest Annually\n";
        cout << "11. Print Compound Interest Half yearly\n";
        cout << "12. Convert Temperature in from Celcius to fahrenheit\n";
        cout << "13. Convert Temperature in from Fahrenheit to Celcius\n";
        cout<<"14. To Check Whether a year is leap or not \n";
        cout<<"15. Print Leap years\n";
        cout << "99. To exit: \n";

        int ch;
        cout << "Enter the Choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter a  number\n";
            int m;
            cin >> m;
            printPrime(m);
            break;
        case 2:
            cout << "Enter a number\n";
            int b;
            cin >> b;
            isPrime(b);
            break;
        case 3:
            cout << "Enter a number\n";
            int c;
            cin >> c;
            Fact(c);
            break;
        case 4:
            cout << "Enter a number\n";
            int c1;
            cin >> c1;
            Fib(c1);
            break;
        case 5:
            cout << "Enter a number\n";
            int c11;
            cin >> c11;
            cout << Fib2(c11);
            break;
        case 6:
            cout << "Enter a number\n";
            int c111;
            cin >> c111;
            Sum(c111);
            break;
        case 7:
            cout << "Enter a number\n";
            int c1111;
            cin >> c1111;
            SumEven(c1111);
            break;
        case 8:
            cout << "Enter a number\n";
            int c11111;
            cin >> c11111;
            PEven(c11111);
            break;
        case 9:
            cout << "Enter a number\n";
            int c111111;
            cin >> c111111;
            POdd(c111111);
            break;
        case 10:
            cout << "Enter amount of Principal\n";
            float a;
            cin >> a;
            cout << "Enter the Rate of the Interest\n";
            float i;
            cin >> i;
            cout << "Enter the time period\n";
            float i1;
            cin >> i1;
            CI_1(a, i, i1);
            break;
        case 11:
            cout << "Enter amount of Principal\n";
            float a1;
            cin >> a1;
            cout << "Enter the Rate of the Interest\n";
            float i3;
            cin >> i3;
            cout << "Enter the time period\n";
            float i11;
            cin >> i11;
            CI_2(a1, i3, i11);
            break;
        case 12:
            cout << "Enter temp in Celcius\n";
            float y;
            cin>>y;
            Fah(y);

           
            break;
        case 13:
            cout << "Enter temp in Fahrenheit\n";
            float y1;
            cin >> y1;
          Cel(y1);
            break;
            case 14:
            cout<<"Enter a year\n";
            int g;
            cin>>g;
            leap(g);
            break;
            case 15:
            cout<<"Enter two years\n";
            int g1 ,g2;
            cin>>g1>>g2;
            pleap(g1,g2);
            break;
        case 99:
            exit(0);
            break;

        default:
            cout << "OOps !! try Again\n";
            break;
        }
    }
    return 0;
}