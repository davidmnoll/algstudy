
#include "hashtable/hashtable.hpp"
#include "binarytree/binarytree.hpp"
#include "stack/stack.hpp"


int main_stack(int argc, const char * argv[])
{
    std::cout << "start - stack\n";
    Stack s();
    std::cout << "wow";
    return 0;
}

int main_binarytree(int argc, const char * argv[])
{
    std::cout << "start - bt\n";
    BinaryTree a(3);
    std::cout << "1\n";
    a.output();
    std::cout << "2\n";
    std::cout << "\n";
    std::cout << "\n";
    a.insert(1);
    std::cout << "3\n";
    a.insert(2);
    a.insert(5);
    a.insert(7);
    a.insert(11);
    
    a.output();

    a.remove(7);
    std::cout << "\n";
    a.output();

    return 0;
}

int main_hashtable(int argc, const char * argv[])
{
    std::cout << "start - ht\n";

    HashTable ht;
    ht.insert("test", 3);
    ht.insert("tesadt", 2);
    ht.insert("tes23asdt", 10);
    ht.insert("s2345234t", 7);
    ht.insert("tea234sdfast", 9);
    ht.insert("te132st", 4);
    ht.output();

    std::cout << "\ntest\n";
    int val = ht.find("tesadt");
    std::cout << val;

    std::cout << "\nend\n";
    return 0;
}