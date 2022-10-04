// This Program contains all the basic programs regarding Cpp;
//written by Vishal Singh

#include <bits/stdc++.h>
using namespace std;
void sum()
{
    int a, b;

    cout << "Enter the no 1:";
    cin >> a;
    cout << "Enter the no 2:";
    cin >> b;
    cout << "The Sum of the two Numbers is " << a + b << endl;
}

void average()
{

    cout << "Enter the  total numbers :\n";
    int n, n1;
    cin >> n;
    int sum = 0;
    cout << "Enter them  one by one\n";
    for (int i = 0; i < n; i++)
    {
        cin >> n1;
        sum += n1;
    }
    int avg = sum / n;
    cout << "Average is : " << avg << endl;
}

void multiply()
{
    int n;
    cout << "Enter the number whose table we have to find\n";
    cin >> n;
    cout << "Result of your hardwork is :\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
void check()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    if (n & 1)
    {
        cout << "The number is odd\n";
    }
    else
    {
        cout << "Even haii yaar\n";
    }
}
void printEven()
{

    int i = 2, n;
    cout << "Enter the number till where you want to print the even number\n";
    cin >> n;
    for (i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
}

void printOdd()
{
    int i = 1, n;
    cout << "Enter the number till where you want to print the odd number\n";
    cin >> n;
    for (i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
}
void sum2()
{
    int s = 0;
    cout << "Enter the total number of numbers sum do you want to calculate\n";
    int n, a;
    cin >> n;
    cout << "Enter the number one by one\n";
    int i = 1;
    while (i <= n)
    {
        cin >> a;
        s += a;
        i++;
    }
    cout << "Result is " << s << endl;
}

void Fact()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    cout << "Factorial of a number is " << fact << endl;
}
void isprime()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;
    bool isprime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            cout << "Non Prime\n";

            break;
        }
    }
    if (isprime)
    {
        cout << "Prime\n";
    }
}
void printprime()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n == 1)
    {
        cout << n << " ";
    }
    for (int i = 2; i <= n; i++)
    {
        bool isprime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << i << " ";
        }
    }
}
void cal()
{
    cout << "Enter the percentage \n";
    int p;
    cin >> p;
    cout << "Enter the total no of marks\n";
    int m;
    cin >> m;
    int ans = p * m / 100;
    cout << "Total marks Obtained are: " << ans << endl;
}
void cal1()
{
    cout << "Total marks Obtained are: \n";
    int p;
    cin >> p;
    cout << "Enter the total no of marks\n";
    int m;
    cin >> m;
    int ans = (p * 100) / 500;
    cout << "Total  percentage  is " << ans << endl;
}
void fib2()
{
    int f1 = 0, f2 = 1, fnext, temp;
    int n;
    cout << "Enter the number: \n";
    cin >> n;
    int i = 1;
    cout << "The result is: ";
    cout << f1 <<" "<< f2 << " ";
    while (i <= n)
    {
       
           
        
        fnext = f1 + f2;
        cout << fnext << " ";
        temp = f2;
        f2 = fnext;
        f1 = temp;
        i++;
        
    }
}
void isleap()
{
    int y;
    cout<<"Enter the Year  ";
    cin>>y;
    if( (y%400==0)|| (y%100!=0)){
        cout<<y<<" is a leap year"<<endl;
    }
    else{
        cout<<y<<" is not a leap year"<<endl;
    }
}
void Fah(){
    float c;
    cout<<"Temp in celcisus\n";
    cin>>c;
    float fah=((c*9/5)+32);
    cout<<"The temperature in Fahrenheit is "<<fah<<endl;
}
void Cel(){
    float f;
    cout<<"Temp in Fahrenheit\n";
    cin>>f;
    float cel = ((f - 32) * 5 / 9);
    cout<<"The temperature in Celcius is "<<cel<<endl;
}
void CI_Yearly(){
    float p;
    cout<<"Enter the amount principal\n";
    cin>>p;
    float t;
    cout<<"Enter the time\n";
    cin>>t;
    float r;
    cout<<"Enter  the rate of the interest\n";
    cin>>r;
    cout << "The Compound Interest  Annually is ";
    float CI = p * pow((1 + r / 100), t) - p;
    cout << CI << endl;
}
void CI_PYearly(){
    float p;
    cout<<"Enter the amount principal\n";
    cin>>p;
    float t;
    cout<<"Enter the time\n";
    cin>>t;
    float r;
    cout<<"Enter  the rate of the interest\n";
    cin>>r;
    cout << "The Compound   Half/yearly  is ";
    float ans = 1 + r / 200;

    ans = pow(ans, 2 * t);

    // cout << ans << endl;
    float e = ans * p;
    // cout << e << endl;
    float CI = e - p;
    cout << (CI) << endl;
    cout << CI << endl;
}


int main()
{
    cout << "\t NoCodeLimits\n";
    while (true)
    {
        cout << "\n\n";
        cout << "1. To Find Sum\n";
        cout << "2. To Find Average\n";
        cout << "3. Multiplication Table\n";
        cout << "4. To Check whether a number is odd or even\n";
        cout << "5. To Print Even numbers\n";
        cout << "6. To Print Odd numbers\n";
        cout << "7. To Print the Sum of the number\n";
        cout << "8. Factorial \n";
        cout << "9. Check whether a no is prime or not \n";
        cout << "10. Print prime numbers\n";
        cout << "11. Percentage calculator\n";
        cout << "12. Total marks calculator\n";
        cout << "13. Fibonacci number\n";
        cout<<"14. Leap Year\n";
        cout<<"15. Temperature in Fahrenheit\n";
        cout<<"16. Temperature in Celsius\n";
        cout<<"17. Compound Interest per yearly\n";
        cout<<"18. Compound Interest pehalf yearly\n";

        cout << "99. To Exit\n";

        cout << "Enter the choice\n";
        int ch;
        cin >> ch;
        switch (ch)
        {

        case 1:
            sum();
            break;

        case 2:
            average();
            break;
        case 3:
            multiply();
            break;
        case 4:
            check();
            break;
        case 5:
            printEven();
            break;
        case 6:
            printOdd();
            break;
        case 7:
            sum2();
            break;
        case 8:
            Fact();
            break;
        case 9:
            isprime();
            break;
        case 10:
            printprime();
            break;
        case 11:
            cal();
            break;
        case 12:
            cal1();
            break;
        case 13:
            fib2();
            break;
        case 14:
            isleap();
            break;
        case 15:
            Fah();
            break;
        case 16:
            Cel();
            break;
        case 17:
            CI_Yearly();
            break;
        case 18:
            CI_PYearly();
            break;

        case 99:
            exit(0);
            break;
        }
    }

    return 0;
}
