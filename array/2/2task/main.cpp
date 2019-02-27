#include <iostream>

int maxNumb(int *tempArray, int size)
{
    int max = 0;
    for (int j = 0; j < size; j++)
    {
        if(tempArray[j] > max && j % 2 == 0)
        max = tempArray[j];
    }
    return max;
}

int main()
{
    int sizeOfArray;
    std::cin>>sizeOfArray;
    int *array = new int[sizeOfArray]();
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cin>>array[i];
    }
    std::cout<<maxNumb(array, sizeOfArray);
    delete [] array;
}
