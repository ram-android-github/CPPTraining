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
#ifndef IATTACKBEHAVIOR_H_
#define IATTACKBEHAVIOR_H_

class IAttackBehavior {
 public:
  IAttackBehavior();
  virtual void attack() = 0;
  virtual ~IAttackBehavior();
};

#endif  // IATTACKBEHAVIOR_H_
