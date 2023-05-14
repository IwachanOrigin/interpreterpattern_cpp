
#include "policy.h"
#include "context.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  Context* contextReserved = Context::createReservedSeatAvailable();
  Context* contextUnreserved = Context::createReservedSeatUnavailable();

  Policy* policyReserved = Policy::preferReservedSeat();
  Policy* policyNecessary = Policy::necessaryReservedSeat();
  Policy* policyUnreserved = Policy::preferUnreservedSeat();

  std::cout << policyReserved->buy(contextReserved) << std::endl;
  std::cout << policyReserved->buy(contextUnreserved) << std::endl;

  std::cout << policyNecessary->buy(contextReserved) << std::endl;
  std::cout << policyNecessary->buy(contextUnreserved) << std::endl;

  std::cout << policyUnreserved->buy(contextReserved) << std::endl;
  std::cout << policyUnreserved->buy(contextUnreserved) << std::endl;

  delete policyReserved;
  policyReserved = nullptr;
  delete policyNecessary;
  policyNecessary = nullptr;
  delete policyUnreserved;
  policyUnreserved = nullptr;

  delete contextReserved;
  contextReserved = nullptr;
  delete contextUnreserved;
  contextUnreserved = nullptr;

  return 0;
}

