// combine_samefn_2.c

// repeated function
int foo(int x)
{
  int y = x + 3;    // 8
  int z = y + x;    // 13
  return z + x;     // 18
}


// same thing for globals
int myglobal = 3;
