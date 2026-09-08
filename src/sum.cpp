// src/sum.cpp

#include <vector>
#include "sum.h"

int sum( const std::vector<int>& nums ) {
    int sum=0;

    for( auto i{0}; i < nums.size(); i++ ) {
        sum += nums.at(i);
    }

    return sum;
}
