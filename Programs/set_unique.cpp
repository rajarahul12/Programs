#include <set>
#include<iostream>
int main()
{
    int a[] = { 1, 9, 4, 5, 8, 3, 1, 3, 5 };

    std::set<int> sa(a, a + 9);
    std::cout << sa.size() << std::endl;
	return 0;
}
