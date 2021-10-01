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
#ifndef AGRESSIVETANKBEHAVIOR_H_
#define AGRESSIVETANKBEHAVIOR_H_
#include "ITankerBehavior.h"
#include "IMoveBehavior.h"
#include "IAttackBehavior.h"
#include "IDefendBehavior.h"
#include "MoveTowardsEnemy.h"
#include "FireAtEnemy.h"
#include "CoverFire.h"

#include <iostream>
using namespace std;
class AgressiveTankBehavior: public ITankerBehavior {
 private:
  IMoveBehavior *moveBehavior;
  IAttackBehavior *attackBehavior;
  IDefendBehavior *defendBehavior;
 public:
  AgressiveTankBehavior() {
    moveBehavior = new MoveTowardsEnemy();
    attackBehavior = new FireAtEnemy();
    defendBehavior = new CoverFire();
  }
  virtual ~AgressiveTankBehavior() {
    delete moveBehavior;
    delete attackBehavior;
    delete defendBehavior;

  }
  void move() override {
    moveBehavior->move();
  }
  virtual void attack()override {
   attackBehavior->attack();
  }
  virtual void defend()override {
       defendBehavior->defend();
  }
};

#endif  // AGRESSIVETANKBEHAVIOR_H_
