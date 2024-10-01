#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b[n];
    for (int i=0; i<n; i++)         //вводим переменные в массив
    {
        cin >> b[i];
    }
    for(int i=0; i<n-1; i++)        //сортируем массив по убыванию
    for( int j=i+1; j<n; j++)
    if(b[i]<b[j])
    {
        int t=b[i];
        b[i]=b[j];
        b[j]=t;
    }

    int m = 0;
    int p = 0;

    for (int i=0; i<n;)         //Распределяем массы среди Маши и Пети.
    {
        if (m>p)                    //Маше, если у нее столько же сколько и у Пети
        {                           //Пете, если у него меньше чем у Маши
            p = p + b[i];
            i++;
        }
        else
        {
            m = m +b[i];
            i++;
        }
    }

    int s;
    s = abs(m-p);
    cout << s;
    return 0;
}

