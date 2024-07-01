#include <iostream>
#include <vector>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Array Size: " << sizeof(arr) << " bytes" << std::endl;

    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Vector Initial Size: " << vec.size() << std::endl;
    std::cout << "Vector Initial Capacity: " << vec.capacity() << std::endl;

    vec.push_back(11);
    std::cout << "Vector Updated Size: " << vec.size() << std::endl;
    std::cout << "Vector Updated Capacity: " << vec.capacity() << std::endl;
    std::cout << "Vector Memory Usage: " << vec.size() * sizeof(int) + sizeof(std::vector<int>) << " bytes" << std::endl;

    return 0;
}