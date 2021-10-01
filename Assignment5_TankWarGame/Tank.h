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
#ifndef TANK_H_
#define TANK_H_
#include<iostream>
#include "ITankerBehavior.h"
using namespace std;

class Tank {
 private:
  ITankerBehavior *tankBehavior = nullptr;
 public:
  Tank();
  void setTankBehavior(ITankerBehavior *tankBehavior_) {
    this->tankBehavior = tankBehavior_;
  }
  void move() {
    tankBehavior->move();
  }

  void attack() {
    tankBehavior->attack();
  }

  void defend() {
    tankBehavior->defend();
  }
  virtual ~Tank();
};

#endif  // TANK_H_
