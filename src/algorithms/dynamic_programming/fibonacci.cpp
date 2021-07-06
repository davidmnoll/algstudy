//
// fibonacci
//
#include "fibonacci.hpp"

using namespace std;

int fibonnci(int i)
{
    if ( i < 2 ){
        return 1;
    }else{
        return fibonacci(i-1) + fibonacci(i-2);
    }
}