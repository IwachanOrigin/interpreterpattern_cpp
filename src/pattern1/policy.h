
#ifndef POLICY_H_
#define POLICY_H_

#include "context.h"
#include <string>

namespace design_pattern
{

class Policy
{
public:
  ~Policy() = default;

  std::string buy(Context* pContext);
  static Policy* preferReservedSeat() { return new Policy(PREFER_RESERVED_SEAT); }
  static Policy* necessaryReservedSeat() { return new Policy(NECESSARY_RESERVED_SEAT); }
  static Policy* preferUnreservedSeat() { return new Policy(PREFER_UNRESERVED_SEAT); }

private:
  int m_preference;
  const static int PREFER_RESERVED_SEAT = 0;
  const static int NECESSARY_RESERVED_SEAT = 1;
  const static int PREFER_UNRESERVED_SEAT = 2;

  explicit Policy(const int preference) : m_preference(preference) {}
};

} // design_pattern

#endif // POLICY_H_
