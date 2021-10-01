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
#ifndef FIREATENEMY_H_
#define FIREATENEMY_H_
#include "IAttackBehavior.h"
#include <iostream>
using namespace std;
class FireAndMove : IAttackBehavior {
 public:
  FireAndMove() = default;
  void attack() override {
    cout<<"Fire and Move"<<endl;
  }
  virtual ~FireAndMove() = default;
};

#endif  // FIREATENEMY_H_
