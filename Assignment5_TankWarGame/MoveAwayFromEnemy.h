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
class MoveAwayFromEnemy:public IMoveBehavior {
 public:
  MoveAwayFromEnemy() = default;
  void move() override {
    cout<<"Moving Away from Enemy"<<endl;
  }
  virtual ~MoveAwayFromEnemy()= default;
};

#endif  // MOVEAWAYFROMENEMY_H_
