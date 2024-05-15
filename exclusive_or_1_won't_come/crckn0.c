#include <stdio.h>

unsigned char _[] = "XHgyZFx4MjdceDJhXHgyY1x4MzBceDNmXHg3OFx4NmZceDNmXHgxNFx4MjZceDc4XHgxNFx4MTNceDdiXHgxOVx4MTRceDA4XHgzOVx4MjhceDIwXHgyNVx4N2JceDM2XHg0Yg"; //TODO: remember to |<>|(^)|<>|2^6 or get coffee for the night
int main()
{
 char __ = '_';
 int ___ = 0;
 for (___; ___<sizeof(_) - 1; ___++)
 {
  _[___] = _[___]^__;
 }
 printf("%s", _);
}