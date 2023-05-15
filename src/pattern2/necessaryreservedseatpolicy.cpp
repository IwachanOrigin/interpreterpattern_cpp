
#include "necessaryreservedseatpolicy.h"

using namespace design_pattern;

std::string NecessaryReservedSeatPolicy::buy(Context* pContext)
{
  if (pContext->isReservedSeatAvailable())
  {
    return "Reserved Seat";
  }

  return "Nothing";
}
