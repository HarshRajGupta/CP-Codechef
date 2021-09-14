#include <iostream>
using namespace std;

struct node {
        long long data;
        struct node* next;

        // Constructors
        node ()
        {
                data = 0;
                next = NULL;
        }
        node (long long value)
        {
                data = value;
                next = NULL;
        }

        // Functions
        void push_back(long long value)
        {
                struct node* push = (struct node*)malloc(sizeof(struct node));
                push->data = value;
                push->next = NULL;
                if (next == NULL)
                {
                        next = push;
                }
                else
                {
                        struct node* ptr = next;
                        while (ptr->next != NULL) ptr = ptr->next;
                        ptr->next = push;
                }
        }
        void printf()
        {
                cout << "\n" << data << " ";
                for (struct node* i = next; i != NULL; i = i->next)
                {
                        cout << i->data << " ";
                }
                cout << endl;
        }
        size_t size()
        {
                size_t count {1};
                for (struct node* i = next; i != NULL; i = i->next) ++count;
                return count;
        }
        struct node* end()
        {
                if (next != NULL)
                {
                        struct node* ptr = next;
                        while (ptr->next != NULL) ptr = ptr->next;
                        return ptr;
                }
                else if (next == NULL)
                {
                        return NULL;
                }
        }
        struct node* position(size_t pos)
        {
                if (pos > 1)
                {
                        struct node* ptr = next;
                        for (size_t i = 2; i < pos && ptr != NULL; ++i) ptr = ptr->next;
                        return ptr;
                }
        }
        int pop()
        {
                if (next != NULL)
                {
                        struct node* ptr = next;
                        while (ptr->next != NULL) ptr = ptr->next;
                        int temp = ptr->data;
                        free(ptr);
                        return temp;
                }
        }
};

typedef struct node NODE;

int main(int argc, char const *argv[])
{
        $0
        return 0;
}