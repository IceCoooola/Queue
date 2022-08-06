#pragma once

#include<deque>
namespace IceCola {

	template<class T, class Container = std::deque<T>>
	class Queue
	{
	public:
		Queue(){}

		bool empty() const
		{
			return con.empty();
		}
	
		size_t size() const
		{
			return con.size();
		}

		T& front()
		{
			return con.front();
		}

		const T front() const
		{
			return con.front();
		}

		T& back()
		{
			return con.back();
		}

		const T& back() const
		{
			return con.back();
		}
		
		void push(const T& x)
		{
			con.push_back(x);
		}

		void pop()
		{
			con.pop_front();
		}
	private:
		Container con;
	};

}

