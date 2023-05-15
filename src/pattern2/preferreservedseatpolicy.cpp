
#include "preferreservedseatpolicy.h"

using namespace design_pattern;

std::string PreferReservedSeatPolicy::buy(Context* pContext)
{
  if (pContext->isReservedSeatAvailable())
  {
    return "Reserved Seat";
  }

  return "Unreserved Seat";
}
