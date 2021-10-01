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
#ifndef IMOVEBEHAVIOR_H_
#define IMOVEBEHAVIOR_H_

class IMoveBehavior {
 public:
  IMoveBehavior();
  virtual void move() = 0;
  virtual ~IMoveBehavior();
};

#endif  // IMOVEBEHAVIOR_H_
