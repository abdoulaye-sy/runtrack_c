#include <unistd.h>
int my_sqrt(int n){int i=1;while(i*i<=n){if(i*i==n)return i;i++;}return 0;}
int main(){int r=my_sqrt(16);char c=r+48;write(1,&c,1);return 0;}
