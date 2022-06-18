#include <iostream>
using namespace std;

class Studi
{
public:
    void input();
    void proses();
    void output();

private:
    int book[24];
    int book2[4][6];
    int x, y, temp;
};

void Studi::input()
{

    for (int i = 0; i < 24; i++)
    {
        cout << "Masukkan nomor buku : ";
        cin >> book[i];
    }
}

void Studi::proses()
{
    {
        for (x = 0; x < 23; x++)
        {
            for (y = x + 1; y < 24; y++)
            {
                if (book[x] > book[y])
                {
                    temp = book[x];
                    book[x] = book[y];
                    book[y] = temp;
                }
            }
        }
        
        int i = 0;
        while (i < 20)
        {
            for (x = 0; x < 4; x++)
            {
                for (y = 0; y < 6; y++)
                {
                    book2[x][y] = book[i];
                    i++;
                }
            }
        }
    }
}

void Studi::output()
{
    {
        cout << "Nomor buku setelah diurutkan : ";
        for (int i = 0; i < 24; i++)
        {
            cout << book[i] << " ";
        }
        cout << "\nTampilan nomer pada rak buku : " << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << "RAK BUKU KE- : " << i + 1;
            for (int j = 0; j < 6; j++)
            {
                cout << "    |" << book2[i][j] << "    |"; 
            }
            cout << endl;
        }
    }
}

int main()
{
    Studi a;

    a.input();
    a.proses();
    a.output();

    return 0;
}
