/*!@copyright
 * Copyright ? Widex A/S, 2019 - 2021.
 * All rights reserved.
 * Any unauthorized redistribution or use of the software in source or binary
 * form is prohibited and will be prosecuted when discovered.
 *
 * @brief [brief description]
 *
 * [detailed description]
 */
#ifndef COVERFIRE_H_
#define COVERFIRE_H_
#include "IDefendBehavior.h"
#include <iostream>
using namespace std;

class Hide:IDefendBehavior {
 public:
  Hide();
  void defend() override {
    cout<<"Hiding"<<endl;
  }
  virtual ~Hide();
};

#endif  // COVERFIRE_H_
