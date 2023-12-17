#ifndef guard
#define guard

#include<vector>
#include <algorithm>
#include <iostream>


void bubbleSort(std::vector<int> &vec)
{
    int tmp;
    for(size_t i = 0; i < vec.size()-1; i++){
        for(size_t j = 0; j < vec.size()-1-i; j++){
            if(vec[j] > vec[j+1]){
                tmp = vec[j+1];
                vec[j+1] = vec[j];
                vec[j] = tmp;
            }
        }
    }
}

void bubbleSort(std::vector<double> &vec)
{
    double tmp;
    for(size_t i = 0; i < vec.size()-1; i++){
        for(size_t j = 0; j < vec.size()-1-i; j++){
            if(vec[j] > vec[j+1]){
                tmp = vec[j+1];
                vec[j+1] = vec[j];
                vec[j] = tmp;
            }
        }
    }
}


void fastSort(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end());
}

void fastSort(std::vector<double> &vec)
{
    std::sort(vec.begin(), vec.end());
}


#endif //guard