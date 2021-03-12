#include<clocale>
#include <iostream>
#include "kombin.h"
#include <math.h>

using namespace std;
int Factorial(int x)
{
    {
        if (x == 0) return 1;
        else return x * Factorial(x-1);
    }
}
void PlacementWithRepetition()
{
    int n,r, PLW;
    cout<<"Введите количество элементов"<<" ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    else
    cout<<"Введите количество объектов, которые мы выбираем"<<" ";
    cin>>r;
    if(r<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    PLW=pow(n,r);
    cout<<PLW<<endl;
}
void PlacementWithoutRepetition()
{
    int n,r,CWR;
    cout<<"Введите количество элементов"<<" ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    else
        cout<<"Введите количество объектов, которые мы выбираем"<<" ";
    cin>>r;
    if(r<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    CWR=Factorial(n)/Factorial(n-r);
    cout<<CWR<<endl;
}
void CombinationWithRepetition()
{
    int n,r,CWR;
    cout<<"Введите количество элементов"<<" ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    else
        cout<<"Введите количество объектов, которые мы выбираем"<<" ";
    cin>>r;
    if(r<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    else
        CWR=Factorial(n+r-1)/(Factorial(r)*Factorial(n-1));
    cout<<CWR<<endl;


}
void CombinationWithoutRepetition()
{
    int n,r,CWR;
    cout<<"Введите количество элементов"<<" ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    else
        cout<<"Введите количество объектов, которые мы выбираем"<<" ";
    cin>>r;
    if(r<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    else
    CWR=Factorial(n)/(Factorial(r)*Factorial(n-r));
    cout<<CWR<<endl;
}
void Transposition()
{
    int n,x;
    cout<<"Введите количество элементов:"<<"";
    cin>>n;
    if(n<=0)
    {
        cout<<"Введенное значение неверно!!";
    }
    else
    x=n;
    cout<<Factorial(x)<<endl;
}
void kombinMenu() {
    setlocale(LC_ALL, "Russian");
    int Kombin_variant;
    bool variant=1;
    while (variant)
    {
    cout << "Выберите калькулятор:\n1)Размещение с повторением.\n2)Размещение без повторений.\n3)Сочетание с повторением.\n4)Сочетание без повторений.\n5)Перестановка."<< endl;
    cin >> Kombin_variant;
    switch (Kombin_variant) {
        case 1:
            PlacementWithRepetition();
            break;
        case 2:
            PlacementWithoutRepetition();
            break;
        case 3:
            CombinationWithRepetition();
            break;
        case 4:
            CombinationWithoutRepetition();
            break;
        case 5:
            Transposition();
            break;
        case 0:
            variant=0;

            break;
        default:
            cout << "Выбранного варианта нет!" << endl;
    }
    }
}
int main()
{
    kombinMenu();
}