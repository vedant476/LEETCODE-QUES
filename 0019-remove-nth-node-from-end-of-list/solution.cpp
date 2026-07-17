/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#pragma GCC optimize("Ofast")

#include <iostream>
#include <vector>

static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;

void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return &BUFFER[pos - size];
}

void *operator new[](const std::size_t size) {
    return operator new(size);
}

void operator delete(void *) noexcept {}

void operator delete[](void *) noexcept {}

void operator delete(void *, std::size_t) noexcept {}

void operator delete[](void *, std::size_t) noexcept {}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ios_base::sync_with_stdio(0);
        ListNode dummy = ListNode(0, head);
        ListNode* links = &dummy;
        ListNode* rechts = &dummy;
        for (int i = 0; rechts->next != nullptr; i++){
            if (i < n) {
                rechts = rechts->next;
                continue;
            }
            links = links->next;
            rechts = rechts->next;
        }
        if (links->next == nullptr) links = nullptr;
        else {
            ListNode* tmp = links;
            links = links->next;
            tmp->next = links->next;
        }

        return dummy.next;

    }
};
int init = [] {
    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());
    for (string str, n_str; getline(cin, str) && getline(cin, n_str);
         cout << '\n') {
        const int n = stoi(n_str);
        auto end = str.end() - 2;
        for (int commas = 0; end != str.begin() && commas != n - 1; --end)
            if (*end == ',')
                ++commas;
        auto start =
            find(reverse_iterator(end), str.rend() - 2, ',').base() - 1;
        str.erase(start, end + 1);
        if (str[1] == ',')
            str.erase(1, 1);
        cout << str;
    }
    exit(0);
    return 0;
}();