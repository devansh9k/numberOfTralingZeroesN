long zeros(long n) {
  int total = 0;
  int x = 1;
  int t = 5;
  while(x != 0)
  {
    x =  n/t;
    total += x;
    t *= 5;
  }
  return total;
}