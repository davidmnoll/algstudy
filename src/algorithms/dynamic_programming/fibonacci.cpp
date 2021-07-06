//
// fibonacci
//
#include "fibonacci.hpp"
#include "../../data_structures/hashtable/hashtable.hpp"

using namespace std;

int fibonacci(int i)
{
    if ( i <= 2 ){
        return 1;
    }else{
        return fibonacci(i-1) + fibonacci(i-2);
    }
}

int faster_fibonacci(int i, HashTable h)
{
    if ( i <= 2 ){
        return 1;
    }else{
        int found_memo = h.find(std::to_string(i));
        if (found_memo > 0) return found_memo;
        int new_memo = faster_fibonacci(i-1, h) + faster_fibonacci(i-2, h);
        h.insert(std::to_string(i), new_memo);
        return new_memo;   
    }
}