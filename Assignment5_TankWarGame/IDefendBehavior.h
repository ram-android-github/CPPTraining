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
#ifndef IDEFENDBEHAVIOR_H_
#define IDEFENDBEHAVIOR_H_

class IDefendBehavior {
 public:
  IDefendBehavior();
  virtual void defend() = 0;
  virtual ~IDefendBehavior();
};

#endif  // IDEFENDBEHAVIOR_H_
