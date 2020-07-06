#include <iostream>

using namespace std;

int main()
{
    short int length = 0;
    cout << "Vvedite dlinnu massiva(1-100): ";
    cin >> length;
    cout << endl;

        int *mass = new int[length];

        for(short int i = 0; i < length; i++)
        {
            i++;
            cout << "Vvedite " << i << "-i element massiva: ";
            i--;
            cin >> mass[i];
        }
        cout << endl;

        for(short int i = 0; i < length; i++)
            cout << mass[i] << " ";
        cout << endl;

        short int k = 0;
        cout << "Vvedite k-tuu poziciu min elementa massiva: ";
        cin >> k;
        cout << endl;

        short int min_el = mass[0];
        short int number_of_min_el = 0;
        for(short int i = 1; i < length; i++)
        {
            if (mass[i] < min_el)
            {
                min_el = mass[i];
                number_of_min_el = i;
            }
        }

        int shift = k - number_of_min_el;
        if (shift < 0)
        {
            for(short int i = 0; i > shift; i--)
            {
                short int first = mass[0];
                for(short int j = 0; j < length; j++)
                    mass[j] = mass[j + 1];
                mass[length - 1] = first;
            }
        }
        else if(shift > 0)
        {
            for(short int i = 0; i < shift; i++)
            {
                short int last = mass[length - 1];
                for(short int j = (length - 1); j > 0; j--)
                    mass[j] = mass[j - 1];
                mass[0] = last;
            }
        }

        for(short int i = 0; i < length; i++)
            cout << mass[i] << " ";
        cout << endl;

    return 0;
}
