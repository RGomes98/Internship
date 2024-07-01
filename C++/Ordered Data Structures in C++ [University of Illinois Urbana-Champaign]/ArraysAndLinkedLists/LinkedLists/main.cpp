#include <iostream>
#include "List.h"

template <typename T>
const T &List<T>::operator[](unsigned index)
{
    ListNode *list = head_;

    while (index > 0 && list->next != nullptr)
    {
        list = list->next;
        index--;
    }

    return list->data;
};

template <typename T>
void List<T>::insertAtFront(const T &data)
{
    ListNode *node = new ListNode(data);
    node->next = head_;
    head_ = node;
};

int main()
{
    List<int> list;
    const int item_a = 5;
    const int item_b = 8;

    list.insertAtFront(item_a);
    std::cout << "First item: " << list[0] << std::endl;

    list.insertAtFront(item_b);
    std::cout << "First item: " << list[0] << " - Second item: " << list[1] << std::endl;

    return 0;
}