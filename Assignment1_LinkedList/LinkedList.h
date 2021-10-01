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
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

class Node{
 private:
  int data;
  Node *next;
  Node(int data_){
    data = data_;
    next = nullptr;
  }
  friend class LinkedList;
};

class LinkedList {
 private:
  Node *head = nullptr;
 public:
  LinkedList();
  //Function to Add item at the end
  void add(int data);
  //Function to get item at given position
  int getItem(int pos);
  //Function to set update Data of an item at given position
  void set(int pos, int data);
  //Function to insert an item at given position
  void insert(int pos, int data);
  //Function to Remove an item at given position and return it's data
  int removeItem(int pos);
  //function to Display all items
  void display();
  virtual ~LinkedList();
};

#endif  // LINKEDLIST_H_
