# include "MutantStack.hpp"
# include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_front(17);
	std::cout << mlist.front() << std::endl;
	mlist.pop_front();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator it2 = mlist.begin();
	std::list<int>::iterator it2e = mlist.end();
	++it2;
	--it2;
	while (it2 != it2e)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::list<int> l(mlist);

	return 0;
}
