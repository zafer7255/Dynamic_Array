#include<iostream>
using namespace std;

class Dynamic_Array
{
    int* Array;
    int size;
    int count;
    public:
    Dynamic_Array()
    {
        Array = new int[1];
        size = 0;
        count = 1;
    }

    ~Dynamic_Array()
    {
        delete[] Array;
        size = 0;
        count = 0;
    }

    void resize()
    {
        int* temp = new int[2*count];
        for (int i = 0; i < size; i++)
        {
            temp[i] = Array[i];
        }
        count = size*2;
        delete[] Array;
        Array = temp;
    } 

     void insert(int number)
     {
        if (size == count)
        {
            resize();
        }
        Array[size] = number;
        size++;
     }

     void Dispay()
     {
        for (int i = 0; i < size; i++)
        {
            cout<<Array[i]<<endl;
        }
     }

     int size_of_array()
     {
        return size;
     }

     int capacity_of_Array()
     {
        return count;
     }

};

int main()
{
    system("clear");
    Dynamic_Array a;
    a.insert(5);
    a.insert(15);
    a.insert(25);
    a.insert(35);
    a.insert(45);
    a.insert(55);
    a.insert(65);
    a.insert(75);
    a.insert(85);
    a.Dispay();
    cout<<"Size of the array is "<<a.size_of_array()<<endl;
     cout<<"Size of the array is "<<a.capacity_of_Array()<<endl;
};
