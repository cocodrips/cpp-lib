int CountBit(int x) {
    int ret = 0;
    while(x) {
        x &= x - 1;
        ++ret;
    }
    return ret;
}
