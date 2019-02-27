#include <iostream>

int AverageNumb(int *tempArray, int size, int average)
{
    int max = 0;
    for (int j = 0; j < size; j++)
    {
        if(tempArray[j] > average)
        max = tempArray[j];
    }
    return max;
}

int main()
{
    int sizeOfArray, Average = 0;
    std::cin>>sizeOfArray;
    int *array = new int[sizeOfArray]();
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cin>>array[i];
        Average += array[i];
    }
    Average /= sizeOfArray;
    std::cout<<AverageNumb(array, sizeOfArray, Average);
    delete [] array;
}
