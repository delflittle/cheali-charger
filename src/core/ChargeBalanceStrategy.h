/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef CHARGEBALANCESTRATEGY_H_
#define CHARGEBALANCESTRATEGY_H_

#include "ChargeBalanceStrategy.h"

#define CHARGE_BALANCE_COUNT 3

class ChargeBalanceStrategy : public Strategy {
public:
    enum State  {Charge, Balance};

    State state_;
    uint8_t count_;

    ChargeBalanceStrategy(){}
    virtual void powerOn();
    virtual statusType doStrategy();
    virtual void powerOff();
    void setVI(AnalogInputs::ValueType V, AnalogInputs::ValueType Ic);
};

extern ChargeBalanceStrategy chargeBalanceStrategy;


#endif /* CHARGEBALANCESTRATEGY_H_ */
