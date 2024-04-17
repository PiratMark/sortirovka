#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int m[] = { 2,6,7,1,-5,90 }; //сортировка выбором 
    int size = 6;
    int t = 0;
    int t2 = 0;
    int j;

    for (int i = 0; i < size; i++)
    {
        j = i;
        for (t = i; t < size; t++)
        {
            if (m[j] > m[t])
            {
                j = t;
            }
        }
        swap(m[i], m[j]);
    }


    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }

    cout << endl;

    int m2[] = { 4,22,7,1,-5,90 }; // с помощью встроеной функции 
    sort(m2,m2 + 6);

    for (int i = 0; i < 6; i++)
    {
        cout << m2[i] << " ";
    }
    
    

    int m3[] = { 41,22,71,1,-5,90 }; // сортировка пузырьком

    for (int i = 0; i < size-1; i++)
    {
        for (t2 = 0; t2 < size-1; t2++)
        {
            if (m3[t2+1] <  m3[t2])
            {
               swap(m3[t2 + 1], m3[t2]);
            }
        }


        cout << endl;

        for (int i = 0; i < size; i++)
        {
            cout << m3[i] << " ";
        }

        
    }




}

