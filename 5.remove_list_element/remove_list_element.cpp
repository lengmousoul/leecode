#include "remove_list_element.h"
list_node* remove_list_element(list_node* head, int val)
{
    list_node* dummy_head = new list_node(0); // 创建虚拟头节点
    dummy_head->next = head;

    list_node* cur = dummy_head;
    while (cur->next != NULL)
    {
        if(cur->next->val == val)
        {
            list_node * tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        }
        else
        {
            cur = cur->next;
        }
    }
    head = dummy_head->next;
    delete dummy_head;
    return head;

}
void remove_list_element_test()
{   
    list_node* my_list = readLinkedListInput();
    cout << "please input target"<<endl;
    int target;
    cin >> target;
    list_node * return_list = remove_list_element(my_list, target);
    cout<< "following is result"<<endl;
    printf_list(return_list);
}



// 函数用于读取链表输入
list_node* readLinkedListInput() {
    int value;
    int size;
    list_node* head = nullptr;
    list_node* current = nullptr;
    cout << "please input size"<<endl;
    cin>> size;
    cout <<"please input list" <<endl;
    while (size--) {
        cin >> value;
        list_node* newNode = new list_node(value);

        if (head == nullptr) {
            // 如果链表为空，设置头节点
            head = newNode;
            current = newNode;
        } else {
            // 否则，连接到当前节点的下一个节点
            current->next = newNode;
            current = newNode;
        }
    }

    return head;
}

void printf_list(list_node* list_head)
{
    list_node * cur = list_head;
    while(cur != nullptr)
    {
        cout<< cur->val<< " ";
        cur = cur->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    remove_list_element_test();
    return 0;
}

