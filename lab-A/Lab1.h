#pragma once

// ��������� ���� ������
typedef struct ListNode {
    char* data;
    struct ListNode* next;
} ListNode;
#include <stdlib.h>
// ������� ��� ������ �� �������
ListNode* create_node(const char* data);
void free_list(ListNode* head);
void push_front(ListNode** head, const char* data);
void push_back(ListNode** head, const char* data);
size_t list_length(const ListNode* head);
ListNode* get_node_at(ListNode* head, size_t index);
char* get_data_at(ListNode* head, size_t index);

// ������� ����������
ListNode* merge_sort(ListNode* head);
ListNode* sorted_merge(ListNode* a, ListNode* b);
void front_back_split(ListNode* source, ListNode** front, ListNode** back);

// ��������������� �������
void print_list(const ListNode* head);
int is_sorted(const ListNode* head);

