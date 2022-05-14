#include <string>
#include "item.h"

Item::Item(const std::string &item_name): m_name(item_name) {}

/*
 * getName
 *
 * gets the name of the item
 *
 * input: n/a
 * output: name of the item (string)
 *
 */

std::string Item::getName() {
  return m_name;
}

/*
 * isEqual
 *
 * determines if the item is equal to another item
 *
 * input: the comparison item (Item type)
 * output: bool
 *
 */

bool Item::isEqual(Item other_item) {
  return m_name == other_item.getName();
}