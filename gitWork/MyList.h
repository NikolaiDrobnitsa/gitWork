#pragma once
#include <list>
#include <ostream>
#include <istream>
#include <algorithm>
#include <functional>
#include <numeric>

template <typename T>
class MyList
{
protected:
	std::list<T> list;
public:
	MyList(){}

	void push_back(T val) {
		list.push_back(val);
	}

	void push_front(T val) {
		list.push_front(val);
	}
	std::list<T> getList() {
		return list;
	}
	
	

	T sum(int start_index = 0){
		return std::accumulate(this->list.begin(), this->list.end(), start_index);
	}
	T multi() {
		return std::accumulate(this->list.begin(), this->list.end(), 1, std::multiplies<int>());
	}
	bool isHasOdd() {
		bool isOdd = false;
		for (auto i : this->getList()) {
			if (i % 2 == 0)
				isOdd = true;
		}
		return isOdd;
	}

	~MyList(){}
};

