// ADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class ArrayID
{
private:
    int capacity;
    int size;
    int* array;
public:
    Array1D(int Arraycap = 10);
    {
        capacity = Arraycap;
        size = 0;
        array = new int[capacity];
    }
    ~Array1D()
    {
        delete[] array;
    }

    int Getsize() const
    {
        return size;
    }

    bool isEmpty() const
    {
        return size == 0;
    }
    bool isFull() const
    {
        return size == capacity;
    }
    void InsertItem(int pos, int val)
    {
        if (pos < 0 || pose > size || isFull())
        {
            cout << "Array is already full!";
            return;
        }

        for (int i = size; i > pos; --i) {

            array[i] = array[i - 1];

        }

        array[pos] = val;
        ++size;
    }
    void RemoveItem(int pos)
    {
        if (pos < 0 || pos >= size || isEmpty())
        {
            cout << "Array is empty!";
            return;
        }
        for (int i = pos; i < size; ++i)
        {
            array[i] = array[i + 1];
        }
        --size;
    }
    void AddItem(int val)
    {
        if (isFull())
        {
            cout << "Array is full!";
            return;
        }
        array[size] = val;
        ++size;
    }

    void DisplayElements() const

        if (isEmpty())
        {
            cout << "Array is empty!!";
            return;
        }

    cout << "Your elements are: \n";

    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
    
}
};
        


int main()
{
    Array1D.arr(5);
    arr.AddItem(10);
    arr.AddItem(20);
    arr.AddItem(30);
    arr.DisplayElements();

    arr.InsertItem(1, 15);
    arr.DisplayElements();

    arr.AddItem(40);
    arr.DisplayElements();

    arr.AddItem(50);
    arr.RemoveItem();

    arr.DisplayElements();

    cout << "Array size: " << arr.GetSize() << endl;

    if (arr.isEmpty())
    {
        cout << "Array is empty!" << endl;
    }
    else
    {
        cout << "Array is not empty!" << endl;
    }

    return 0;
}


