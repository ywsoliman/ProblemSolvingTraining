long taumBday(int b, int w, int bc, int wc, int z) {
    long bp = min(bc, wc + z);
    long wp = min(wc, bc + z);
    return b * bp + w * wp;
}