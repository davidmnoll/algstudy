//
// grid
//
#include "grid.hpp"
// #include "../../data_structures/hashtable/hashtable.hpp"

using namespace std;

int grid(int i, int j)
{
    if ( i < 1 || j < 1 )return 0;
    if ( i==1 && j == 1 )return 1;
    return grid(i, j-1) + grid(i-1, j);
}
