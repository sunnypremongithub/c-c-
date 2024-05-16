#include <iostream>
using namespace std;
class A
{

    int a[3][3], i, j;

public:
    void show()
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (j== 0)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = 0;
                }
            }
        }

        cout << "show matrix" << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    A a1;
    a1.show();
}