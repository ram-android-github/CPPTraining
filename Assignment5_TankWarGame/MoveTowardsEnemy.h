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
#ifndef MOVEAWAYFROMENEMY_H_
#define MOVEAWAYFROMENEMY_H_
#include "IMoveBehavior.h"
#include <iostream>
using namespace std;
class MoveTowardsEnemy:public IMoveBehavior {
 public:
  MoveTowardsEnemy() = default;
  void move() override {
    cout<<"Moving Towards Enemy"<<endl;
  }
  virtual ~MoveTowardsEnemy()= default;
};

#endif  // MOVEAWAYFROMENEMY_H_
