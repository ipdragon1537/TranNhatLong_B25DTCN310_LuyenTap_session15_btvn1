#include <stdio.h>
int dao_nguoc_so(int n) {
    float so_dao_nguoc = 0;
    int Phandu;
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        n = -n;
    }
    
    while (n != 0) {
        Phandu = n % 10;
        so_dao_nguoc = so_dao_nguoc * 10 + Phandu;
        n /= 10;
    }
    return so_dao_nguoc;
}
int main() {
    int so = -1234;
    int so_dao_nguoc = dao_nguoc_so(so);
    printf ("So dao nguoc cua %d la:%d ",so,dao_nguoc_so(so));
    return 0;
}
