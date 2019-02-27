#include <iostream>

int sumOfEven(int *tempArray, int size)
{
    int sum = 0;
    for (int j = 0; j < size; j++)
    {
        if(tempArray[j] % 2 == 0 && tempArray[j] > 0)
        sum += tempArray[j];
    }
    return sum;
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
    std::cout<<sumOfEven(array, sizeOfArray);
    delete [] array;
}
