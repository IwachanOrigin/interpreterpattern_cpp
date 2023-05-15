
#include "policy.h"

using namespace design_pattern;

std::string Policy::buy(Context* pContext)
{
  switch(m_preference)
  {
  case PREFER_RESERVED_SEAT:
  {
    if (pContext->isReservedSeatAvailable())
    {
      return "Reserved Seat";
    }
    else
    {
      return "Unreserved Seat";
    }
  }
  break;

  case NECESSARY_RESERVED_SEAT:
  {
    if (pContext->isReservedSeatAvailable())
    {
      return "Reserved Seat";
    }
    else
    {
      return "Nothing";
    }
  }
  break;

  case PREFER_UNRESERVED_SEAT:
  {
    return "Unreserved";
  }
  break;

  }

  return "Nothing";
}
