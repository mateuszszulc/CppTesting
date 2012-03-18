#include <iostream>
#include <cstdlib>
#include <cstdio>

struct Base
{
  virtual int Virtual() = 0;
};

struct Child
{
  struct : public Base
  {
    virtual int Virtual() { return 1; }
  } First;

  struct : public Base
  {
    virtual int Virtual() { return 2; }
  } Second;
};

int main()
{
  Child child;
  printf("ble: %i\n", ((Base*)&child.First)->Virtual());
  printf("ble: %i\n", ((Base*)&child.Second)->Virtual());

//  system("PAUSE");
  return 0;
}
