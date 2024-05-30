

#include <iostream>
using namespace std;

class queues
{
    int FRONT, REAR, max = 5;
    int queue_array[5];

public:
    queues()
    {
        FRONT = -1;
        REAR = -1;
    }

    void insert()
    {
        int num;
        cout << "Enter a number";
        cin >> num;
        cout << endl;

        //cek apakah antrian penuh
        if ((FRONT == 00 && REAR == max - 1) || (FRONT == REAR + 1))
        {
            cout << "\nQueues overlflow\n";
            return;
        }
    }
};
int main()
{
    
}

