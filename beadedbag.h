#ifndef __BEADEDBAG_BEADEDBAG_HPP
#define __BEADEDBAG_BEADEDBAG_HPP

#include "item.h"
#include <vector>

class BeadedBag {
public:
  // Place your member function declarations here.
	void insert(Item to_insert);
  // Here's the declaration for contains, to get you started:
	bool contains(Item maybe_contained_item);
	int size();

private:
	std::vector<Item> bb;
};

#endif