
#ifndef PREFER_UNRESERVED_SEAT_POLICY_H_
#define PREFER_UNRESERVED_SEAT_POLICY_H_

#include "abstractpolicy.h"

namespace design_pattern
{

class PreferUnreservedSeatPolicy : public AbstractPolicy
{
public:
  explicit PreferUnreservedSeatPolicy() = default;
  virtual ~PreferUnreservedSeatPolicy() = default;

  virtual std::string buy(Context* pContext);
};

} // design_pattern

#endif // PREFER_RESERVED_SEAT_POLICY_H_
