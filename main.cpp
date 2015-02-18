//
//  main.cpp
//  InsertionSort
//
//  Created by Teddy Engel on 18/02/2015.
//  Copyright (c) 2015 Teddy Engel. All rights reserved.
//

#include <vector>
#include <iostream>

void InsertionSortAscending(std::vector<int> &values)
{
    int i = 0, j = 0;
    int value = 0;

    for (j = 1; j < values.size(); j++)
    {
        value = values[j];
        i = j - 1;
        while (i > -1 && values[i] > value)
        {
            values[i + 1] = values[i];
            i = i - 1;
        }
        values[i + 1] = value;
    }
}

void InsertionSortDescending(std::vector<int> &values)
{
    int i = 0, j = 0;
    int value = 0;

    for (j = values.size() - 1; j > -1; j--)
    {
        value = values[j];
        i = j + 1;
        while (i < values.size() && values[i] > value)
        {
            values[i - 1] = values[i];
            i = i + 1;
        }
        values[i - 1] = value;
    }
}

void PrintVector(std::vector<int> &values)
{
    int i;
    
    for(i = 0; i != values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    std::vector<int> values = {10, 0, 2, 5, -4, 3, 2};

    std::cout << "Unsorted collection:" << std::endl;
    PrintVector(values);
    InsertionSortAscending(values);
    // InsertionSortDescending(values);
    std::cout << "Sorted collection:" << std::endl;
    PrintVector(values);
    return 0;
}
