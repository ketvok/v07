#pragma once

#include <ostream>

namespace vsite::oop::v7 
{
	class money {
		unsigned lp;
	public:
		money(unsigned lp);
		money();
		money& operator+=(const money& other);
		money& operator-=(const money& other);
		friend std::istream& operator>>(std::istream& is, money& m);
		friend std::ostream& operator<<(std::ostream& os, const money& m);
	};
}
