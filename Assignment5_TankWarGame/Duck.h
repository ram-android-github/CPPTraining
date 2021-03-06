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

class Duck:IDefendBehavior {
 public:
  Duck();
  void defend() override {
    cout<<"Ducking"<<endl;
  }
  virtual ~Duck();
};

#endif  // COVERFIRE_H_
