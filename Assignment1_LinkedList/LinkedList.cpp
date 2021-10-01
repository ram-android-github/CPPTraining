/*!@copyright
 * Copyright © Widex A/S, 2019 - 2021.
 * All rights reserved.
 * Any unauthorized redistribution or use of the software in source or binary
 * form is prohibited and will be prosecuted when discovered.
 *
 * @brief [brief description]
 *
 * [detailed description]
 */
#include "LinkedList.h"

LinkedList::LinkedList() {
  // TODO Auto-generated constructor stub
}

LinkedList::~LinkedList() {
  // TODO Auto-generated destructor stub
}

// Function to Add item at the end
void LinkedList::add(int data) {
  Node *item = new Node(data);
  if (head == nullptr) {
    head = item;
    return;
  }
  Node *prev = head;
  while (prev->next != nullptr) {
    prev = prev->next;
  }
  prev->next = item;
}
// Function to get item at given position
int LinkedList::getItem(int pos) {
  Node *prev = head;
  int cur_pos = pos - 1;
  while (cur_pos > 0) {
    prev = prev->next;
    cur_pos--;
  }

  if (prev != nullptr) {
    return prev->data;
  } else {
    return -1;
  }
}
// Function to set update Data of an item at given position
void LinkedList::set(int pos, int data) {
  Node *prev = head;
  int cur_pos = pos - 1;
  while (cur_pos > 0) {
    prev = prev->next;
    cur_pos--;
  }

  if (prev != nullptr) {
    prev->data = data;
  }
}
// Function to insert an item at given position
void LinkedList::insert(int pos, int data) {
  Node *item = new Node(data);
  Node *prev = head;
  int cur_pos = pos - 2;
  while (cur_pos > 0) {
    prev = prev->next;
    cur_pos--;
  }

  if (prev != nullptr) {
    if (cur_pos < 0) {
      item->next = head;
      head = item;
    } else {
      item->next = prev->next;
      prev->next = item;
      if (prev == head) {
        head = item;
      }
      else {
        prev->next = item;
      }
    }

  } else {
    head = item;
  }
}
// Function to Remove an item at given position and return it's data
int LinkedList::removeItem(int pos) {

  Node *prev = head;
    int cur_pos = pos - 2;
    while (cur_pos > 0) {
      prev = prev->next;
      cur_pos--;
    }

    if (prev != nullptr) {
      if (cur_pos < 0) {
        delete head;
        head = prev->next;
      } else {
        if (prev == head) {
          delete head;
          head = prev->next;
        }
        else {
          prev->next = prev->next->next;
          delete prev->next;
        }
      }

    }

}
// function to Display all items
void LinkedList::display() {

}
