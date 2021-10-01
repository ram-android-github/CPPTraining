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
#ifndef ITANKERBEHAVIOR_H_
#define ITANKERBEHAVIOR_H_

class ITankerBehavior {
 public:
  ITankerBehavior();
  virtual void move() = 0;
  virtual void attack() = 0;
  virtual void defend() = 0;
  virtual ~ITankerBehavior();
};

#endif  // ITANKERBEHAVIOR_H_
