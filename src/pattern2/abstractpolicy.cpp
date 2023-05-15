
#include "abstractpolicy.h"
#include "preferreservedseatpolicy.h"
#include "preferunreservedseatpolicy.h"
#include "necessaryreservedseatpolicy.h"

using namespace design_pattern;

AbstractPolicy* AbstractPolicy::preferReservedSeat()
{
  return new PreferReservedSeatPolicy();
}

AbstractPolicy* AbstractPolicy::necessaryReservedSeat()
{
  return new NecessaryReservedSeatPolicy();
}

AbstractPolicy* AbstractPolicy::preferUnreservedSeat()
{
  return new PreferUnreservedSeatPolicy();
}

