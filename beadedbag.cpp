#include <algorithm>
#include "beadedbag.h"
#include "item.h"
#include <vector>

// Implement the BeadedBag::size and BeadedBag::insert member functions here.

/*
 * insert
 *
 * inserts an item into the bag
 *
 * input: item
 * output: n/a
 * 
 */

void BeadedBag::insert(Item to_insert) {
	if (!contains(to_insert)) {
		bb.push_back(to_insert);
	}
}

/*
 * size
 *
 * calculates how may items are in the bag
 *
 * input: n/a
 * output: number of items in the bag (int)
 *
 */

int BeadedBag::size() {
	return bb.size();
}

// Complete the implementation of the BeadedBag::contains member function.

/*
 * contains
 *
 * checks if the bag already contains that item
 *
 * input: the item (Item type)
 * output: bool
 *
 */

bool BeadedBag::contains(Item maybe_contained_item) {
	for (int i = 0; i < size(); ++i) {
		if (bb[i].isEqual(maybe_contained_item)) {
			return true;
		}
	}
	return false;
}