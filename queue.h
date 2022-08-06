#pragma once

namespace IceCola {

#include<deque>

	template<class T, class Container = std::deque<T>>
	class queue
	{
	public:
		queue(){}
		bool empty();
		size_t size();
		T& front();
		const T front();
		T& back();
		const T& back();
		void push();
		void pop();
	private:
		deque<T> con;
	};

}

