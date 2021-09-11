#pragma once
#include "MyList.h"
template<typename T>
class MyList_Decor :
	public MyList<T>
{
public:
	MyList_Decor(){}

	friend std::ostream& operator << (std::ostream& out, MyList<T>& my_list) {
		
		for (auto i : my_list.getList())
			out << i << ".";

		return out;
	}

	friend std::istream& operator >> (std::istream& in, MyList<T>& my_list) {

		T * val = new T;
		in >> *val;
		my_list.push_back(*val);
		delete val;

		return in;
	}
	int countOf (T val) {
		int count = 0;
		for (auto i : this->getList())
		{
			if (val == i)
			{
				count++;
			}
		}
		return count;
	}
	~MyList_Decor(){}
};

