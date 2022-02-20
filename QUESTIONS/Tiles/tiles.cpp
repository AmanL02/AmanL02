#include <iostream>
int min_tiles(int w, int h);
int main()
{
    int w, h;
    std::cin >> w >> h;
    std::cout << min_tiles(w, h) << std::endl;
    return 0;
}

int min_tiles(int w, int h){
// kept simple cases at front to reduce Execution Time
    if (w==0 or h==0){return 0;}
    if (w==1){return h;}
    if (h==1){return w;}
// checking for all multiples of 2 for all values w,h <1000
    for (int i=512; i>3; i=i/2){
        if (w>=i and h>=i){return (w/i)*(h/i) + min_tiles(w%i,h%i) + min_tiles(w%i,h-h%i) + min_tiles(h%i,w-w%i);}
    }
// the only case left is where w,h=3 or 2
    return (w/2)*(h/2) + min_tiles(w%2,h%2) + min_tiles(w%2,h-h%2) + min_tiles(h%2,w-w%2);
}
